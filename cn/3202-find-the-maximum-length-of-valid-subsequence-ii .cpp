#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    using ll = long long;
public:
    unordered_map<ll,int>m;
    vector<int>v[1005];
    int maximumLength(vector<int>& nums, int k) {
        int ans=2,n=nums.size();
        for (int i = 0; i < n; ++i) {
            nums[i]%=k;
            v[nums[i]].push_back(i);
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                int temp=(nums[i]+nums[j])%k;
                if (m[((ll)nums[i]<<32)|temp])
                    continue;
                if (ans>=n-j+1)
                    continue;
                m[((ll)nums[i]<<32)|temp]=2;
                int a=i,b=j;
                if (nums[i]==nums[j]){
                    for (; ; ++m[((ll)nums[i]<<32)|temp]) {
                        int pos=upper_bound(v[nums[i]].begin(), v[nums[i]].end(),b)-v[nums[i]].begin();
                        if (pos==v[nums[i]].size())
                            break;
                        b=v[nums[i]][pos];
                    }
                }else{
                    for (; ; ++m[((ll)nums[i]<<32)|temp]) {
                        if (m[((ll)nums[i]<<32)|temp]%2==0){
                            int pos=upper_bound(v[nums[i]].begin(), v[nums[i]].end(), max(a,b))-v[nums[i]].begin();
                            if (pos==v[nums[i]].size())
                                break;
                            a=v[nums[i]][pos];
                        }else{
                            int pos=upper_bound(v[nums[j]].begin(), v[nums[j]].end(), max(a,b))-v[nums[j]].begin();
                            if (pos==v[nums[j]].size())
                                break;
                            b=v[nums[j]][pos];
                        }
                    }
                }
                ans= max(ans,m[((ll)nums[i]<<32)|temp]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}