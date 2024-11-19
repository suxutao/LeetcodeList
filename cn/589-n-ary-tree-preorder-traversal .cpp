#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)


class Solution {
public:
    vector<int>v;
    void dfs(Node*p){
        if (p== nullptr)
            return;
        v.push_back(p->val);
        for (auto i:p->children) {
            dfs(i);
        }
    }
    vector<int> preorder(Node* root) {
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