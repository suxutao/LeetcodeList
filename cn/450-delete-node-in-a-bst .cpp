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
class Solution {
public:
    pair<TreeNode*,TreeNode*> findNode(TreeNode*p,int key){
        if (p== nullptr)
            return {nullptr,nullptr};
        while(p){
            if (p->val<key){
                if (p->right&&p->right->val==key)
                    return {p->right,p};
                p=p->right;
            }
            else if (p->val>key) {
                if (p->left&&p->left->val == key)
                    return {p->left, p};
                p = p->left;
            }
            else
                return {p,nullptr};
        }
        return {nullptr,nullptr};
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root== nullptr)
            return nullptr;
        if (root->val==key){
            if (!root->left&&!root->right)
                return nullptr;
            else if (root->left&&!root->right){
                return root->left;
            }else if (!root->left&&root->right){
                return root->right;
            }else{
                TreeNode*p2=root->right;
                while(p2->left)p2=p2->left;
                p2->left=root->left;
                return root->right;
            }
        }
        pair<TreeNode*,TreeNode*>fpp= findNode(root,key);
        TreeNode*p=fpp.first;TreeNode*fp=fpp.second;
        if (!fp&&!p)
            return root;
        bool left=fp->val>p->val;
        if (p&&fp&&left){
            if (!p->left&&!p->right)
                fp->left=nullptr;
            else if (p->left&&!p->right){
                fp->left=p->left;
            }else if (!p->left&&p->right){
                fp->left=p->right;
            }else{
                TreeNode*p2=p->right;
                while(p2->left)p2=p2->left;
                p2->left=p->left;
                fp->left=p->right;
            }
        }else if (p&&fp&&!left){
            if (!p->left&&!p->right)
                fp->right=nullptr;
            else if (p->left&&!p->right){
                fp->right=p->left;
            }else if (!p->left&&p->right){
                fp->right=p->right;
            }else{
                TreeNode*p2=p->right;
                while(p2->left)p2=p2->left;
                p2->left=p->left;
                fp->right=p->right;
            }
        }
        return root;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}