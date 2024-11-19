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
class CBTInserter {
public:
    TreeNode*r;
    queue<TreeNode*>q;
    CBTInserter(TreeNode* root) {
        r=root;
        q.push(root);
        while (!q.empty()){
            TreeNode*p=q.front();
            if (p->left&&p->right){
                q.push(p->left);
                q.push(p->right);
                q.pop();
            }else{
                if (p->left)
                    q.push(p->left);
                break;
            }
        }
    }
    
    int insert(int val) {
        TreeNode*t=new TreeNode(val);
        TreeNode*p=q.front();
        if (p->left){
            p->right=t;
            q.pop();
        }else{
            p->left=t;
        }
        q.push(t);
        return p->val;
    }
    
    TreeNode* get_root() {
        return r;
    }
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}