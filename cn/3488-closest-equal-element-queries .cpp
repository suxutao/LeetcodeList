#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size(),nq=queries.size();
        vector<int>ans(nq,-1);
        unordered_map<int,vector<int>>m;
        for (int i = 0; i < n; ++i) {
            m[nums[i]].push_back(i);
        }
        for (int i = 0; i < nq; ++i) {
            auto&v=m[nums[queries[i]]];
            if (v.size()>1){
                int pos=lower_bound(v.begin(), v.end(),queries[i])-v.begin();
                if (pos==0){
                    ans[i]= min(v[1]-v[0],v[0]+n-v.back());
                }else if (pos==v.size()-1){
                    ans[i]= min(v.back()-v[pos-1],v[0]+n-v.back());
                }else{
                    ans[i]= min(v[pos]-v[pos-1],v[pos+1]-v[pos]);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}