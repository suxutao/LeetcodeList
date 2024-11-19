#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    deque<Node*>q;
    vector<vector<int>> levelOrder(Node* root) {
        if (root==nullptr)
            return {};
        q.push_back(root);
        while (!q.empty()){
            int s=q.size();v.clear();
            for (int i = 0; i < s; ++i) {
                Node*p=q.front();
                v.push_back(p->val);
                for (const auto &item: p->children){
                    q.push_back(item);
                }
                q.pop_front();
            }
            vv.push_back(v);
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}