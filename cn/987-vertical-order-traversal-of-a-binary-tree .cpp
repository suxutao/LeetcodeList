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
    struct treeNode{
        int depth,width,value;
        bool operator<(const treeNode&p)const{
            if (width==p.width){
                if (depth==p.depth){
                    return value<p.value;
                }else{
                    return depth<p.depth;
                }
            }else{
                return width<p.width;
            }
        }
    };
    vector<treeNode>v;
    vector<vector<int>>vv;
    vector<int>vi;
    void dfs(TreeNode*p,int depth,int width){
        if (!p) return;
        v.emplace_back(depth,width,p->val);
        dfs(p->left,depth+1,width-1);
        dfs(p->right,depth+1,width+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        std::sort(v.begin(), v.end());
        int a=v[0].width;
        for (auto &i: v){
            if (i.width!=a){
                vv.push_back(vi);
                vi.clear();
                vi.push_back(i.value);
                a=i.width;
            }else{
                vi.push_back(i.value);
            }
        }
        vv.push_back(vi);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}