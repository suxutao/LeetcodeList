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
class FindElements {
public:
    TreeNode*r;
    unordered_set<int>s;
    FindElements(TreeNode* root) {
        r=root;
        function<void(TreeNode*,int)>dfs=[&](TreeNode*p,int value){
            p->val=value;
            s.insert(value);
            if (p->left)
                dfs(p->left,value*2+1);
            if (p->right)
                dfs(p->right,value*2+2);
        };
        dfs(root,0);
    }
    
    bool find(int target) {
        return s.contains(target);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}