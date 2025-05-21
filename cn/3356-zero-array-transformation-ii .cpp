#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(),nq=queries.size(),l=0,r=nq;
        auto check=[&](int x)->bool {
            vector<int>pre(n+1);
            for (int i = 0; i < x; ++i) {
                pre[queries[i][0]]+=queries[i][2];
                pre[queries[i][1]+1]-=queries[i][2];
            }
            if (pre[0]<nums[0])
                return false;
            for (int i = 1; i < n; ++i) {
                pre[i]+=pre[i-1];
                if (pre[i]<nums[i])
                    return false;
            }
            return true;
        };
        if (!check(r))
            return -1;
        while (l<r){
            int mid=(l+r)>>1;
            if (!check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}