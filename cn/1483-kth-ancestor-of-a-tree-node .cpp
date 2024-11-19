#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class TreeAncestor {
public:
    const int Log = 16;
    vector<vector<int>> ancestors;

    TreeAncestor(int n, vector<int>& parent) {
        ancestors.assign(n,vector<int>(Log,-1));
        for (int i = 0; i < n; ++i) {
            ancestors[i][0]=parent[i];
        }
        for (int j = 1; j < Log; ++j) {
            for (int i = 0; i < n; ++i) {
                if (~ancestors[i][j-1]){
                    ancestors[i][j]=ancestors[ancestors[i][j-1]][j-1];
                }
            }
        }
    }

    int getKthAncestor(int node, int k) {
        for (int i = 0; i < Log; ++i) {
            if ((k>>i)&1){
                node=ancestors[node][i];
                if (node==-1)
                    return -1;
            }
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}