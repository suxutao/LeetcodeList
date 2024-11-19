#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(),[](vector<int>&a,vector<int>&b){
            if (a[0]==b[0])
                return a[1]>b[1];
            return a[0]<b[0];
        });
        vector<int>v(envelopes.size());
        for (int i = 0; i < v.size(); ++i) {
            v[i]=envelopes[i][1];
        }
        auto end=v.begin();
        for (auto &i: v){
            auto it=lower_bound(v.begin(), end,i);
            *it=i;
            if (it==end)
                end++;
        }
        return end-v.begin();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}