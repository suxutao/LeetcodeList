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
    vector<int>v;
    void dfs(Node*p){
        if (p== nullptr)
            return;
        for (auto i:p->children) {
            dfs(i);
        }
        v.push_back(p->val);
    }
    vector<int> postorder(Node* root) {
        if (root== nullptr)
            return {};
        dfs(root);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}