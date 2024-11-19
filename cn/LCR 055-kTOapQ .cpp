#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    vector<int>v;
    int pos;
    void dfs(TreeNode*p){
        if (!p)
            return;
        dfs(p->left);
        v.push_back(p->val);
        dfs(p->right);
    }
    BSTIterator(TreeNode* root) {
        v.push_back(INT_MIN);
        pos=0;
        dfs(root);
    }

    int next() {
        return v[++pos];
    }

    bool hasNext() {
        if (pos<v.size()-1)
            return true;
        else
            return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}