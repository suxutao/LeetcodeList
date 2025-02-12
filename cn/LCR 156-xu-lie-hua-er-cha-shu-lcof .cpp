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
        if (!root) return "";
        string ans;
        queue<TreeNode*>q;
        q.emplace(root);
        while (!q.empty()){
            TreeNode*p=q.front();
            q.pop();
            if (p){
                ans+=to_string(p->val)+".";
                q.emplace(p->left);
                q.emplace(p->right);
            }else{
                ans+="null.";
            }
        }
        ans.pop_back();
        return ans;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data=="") return nullptr;
        string temp;
        stringstream ss(data);
        vector<string>vs;
        while (getline(ss,temp,'.')){
            vs.push_back(temp);
        }
        TreeNode*ans=new TreeNode(stoi(vs[0]));
        int cnt=1;
        queue<TreeNode*>q{{ans}};
        while (!q.empty()){
            TreeNode*p=q.front();
            q.pop();
            if (vs[cnt]!="null"){
                p->left= new TreeNode(stoi(vs[cnt]));
                q.push(p->left);
            }
            cnt++;
            if (vs[cnt]!="null"){
                p->right= new TreeNode(stoi(vs[cnt]));
                q.push(p->right);
            }
            cnt++;
        }
        return ans;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}