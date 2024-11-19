#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root== nullptr)
            return "!";
        return to_string(root->val)+" "+ serialize(root->left)+" "+ serialize(root->right);
    }
    TreeNode* des(stringstream&ss){
        string temp;
        ss>>temp;
        if (temp=="!")
            return nullptr;
        TreeNode*p=new TreeNode(stoi(temp));
        p->left= des(ss);
        p->right= des(ss);
        return p;
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss;
        ss<<data;
        return des(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}