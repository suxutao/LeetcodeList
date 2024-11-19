#include "../../../stdc.h"
using namespace std;
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(vector<vector<int>>& g,int l,int r,int d,int u){
        int a=g[l][d];
        for (int i = l; i < r; ++i) {
            for (int j = d; j < u; ++j) {
                if (g[i][j]!=a)
                    return false;
            }
        }
        return true;
    }
    Node* fen(vector<vector<int>>& g,int l,int r,int d,int u){
        if (pan(g,l,r,d,u)){
            return new Node(g[l][d],1);
        }
        int n=(r-l)/2;
        Node*p=new Node;
        p->topLeft= fen(g,l,l+n,d,d+n);
        p->bottomLeft= fen(g,l+n,r,d,d+n);
        p->topRight= fen(g,l,l+n,d+n,u);
        p->bottomRight= fen(g,l+n,r,d+n,u);
        return p;
    }
    Node* construct(vector<vector<int>>& grid) {
        int n=grid.size();
        return fen(grid,0,n,0,n);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}