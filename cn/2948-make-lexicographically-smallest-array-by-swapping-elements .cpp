#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n=nums.size(),l=0;
        vector<int>ans(n);
        vector<array<int,2>>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={nums[i],i};
        }
        ranges::sort(v);
        v.push_back({INT_MAX,INT_MAX});
        for (int i = 1; i <= n; ++i) {
            if (v[i][0]-v[i-1][0]>limit){
                vector<int>temp;
                for (int j = l; j < i; ++j) {
                    temp.push_back(v[j][1]);
                }
                ranges::sort(temp);
                for (int j = l; j < i; ++j) {
                    ans[temp[j-l]]=v[j][0];
                }
                l=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}