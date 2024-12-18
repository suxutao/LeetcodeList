#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long minimumDifference(vector<int>& nums) {
        int n=nums.size()/3;
        ll sumPre=accumulate(nums.begin(), nums.begin()+n,0ll),sumSuf=accumulate(nums.begin()+n*2, nums.begin()+n*3,0ll),ans=LLONG_MAX;
        vector<ll>suf(n+1);
        priority_queue<ll>qPre;
        priority_queue<ll,vector<ll>,greater<>>qSuf;
        for (int i = 0; i < n; ++i) {
            qPre.push(nums[i]);
        }
        for (int i = n*2; i < n * 3; ++i) {
            qSuf.push(nums[i]);
        }
        suf.back()=sumSuf;
        for (int i = n*2-1; i >= n; --i) {
            suf[i-n]=suf[i-n+1];
            if (nums[i]>qSuf.top()){
                suf[i-n]+=nums[i]-qSuf.top();
                qSuf.pop();
                qSuf.push(nums[i]);
            }
        }
        ans= min(ans,sumPre-suf[0]);
        for (int i = n; i < n * 2; ++i) {
            if (nums[i]<qPre.top()){
                sumPre+=nums[i]-qPre.top();
                qPre.pop();
                qPre.push(nums[i]);
            }
            ans= min(sumPre-suf[i-n+1],ans);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}