#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long n=nums1.size(),ans=0,sum=0;
        vector<array<int,2>>v(n);
        priority_queue<int,vector<int>,greater<>>q;
        for (int i = 0; i < n; ++i) {
            v[i]={nums2[i],nums1[i]};
        }
        ranges::sort(v,greater<>());
        for (int i = 0; i < n; ++i) {
            sum+=v[i][1];
            q.push(v[i][1]);
            if (q.size()>k){
                sum-=q.top();
                q.pop();
            }
            if (i>=k-1)
            ans= max(ans,sum*v[i][0]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}