#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(int x){
        if (x==1)
            return false;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x%i==0)
                return false;
        }
        return true;
    }
    int primeSubarray(vector<int>& nums, int k) {
        int n=nums.size(),l=0,last=-1,last2=-1,ans=0;
        vector<bool>isprime(n);
        deque<int>mx,mn;
        for (int i = 0; i < n; ++i) {
            isprime[i]= pan(nums[i]);
        }
        for (int r = 0; r < n; ++r) {
            if (isprime[r]){
                last2=last;
                last=r;
                while (!mn.empty()&&nums[r]<=nums[mn.back()]){
                    mn.pop_back();
                }
                while (!mx.empty()&&nums[r]>=nums[mx.back()]){
                    mx.pop_back();
                }
                mn.push_back(r);
                mx.push_back(r);

                while (nums[mx.front()]-nums[mn.front()]>k){
                    ++l;
                    if (mn.front()<l)
                        mn.pop_front();
                    if (mx.front()<l)
                        mx.pop_front();
                }
            }
            ans+=last2-l+1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}