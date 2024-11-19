#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>>vv;
    vector<int>v;
    void hui(int l,int sum,int k,int n){
        if (sum>n)
            return;
        if (v.size()==k){
            if (sum==n)
                vv.push_back(v);
            return;
        }
        for (int i = l; i < 10; ++i) {
            v.push_back(i);
            hui(i+1,sum+i,k,n);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        if (n>45)
            return {};
        if (n==45&&k!=9)
            return {};
        hui(1,0,k,n);
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}