#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    void hui(int n,int pos,int k){
        if (v.size()==k){
            vv.push_back(v);
            return;
        }
        for (int i = pos; i <= n; ++i) {
            v.push_back(i);
            hui(n,i+1,k);
            v.pop_back();
        }
    };
    vector<vector<int>> combine(int n, int k) {
        hui(n,1,k);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}