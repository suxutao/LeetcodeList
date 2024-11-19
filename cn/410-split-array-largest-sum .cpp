#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool check(vector<int>& v,int m,int k){
        long long sum = 0;
        int cnt = 1;
        for (int i = 0; i < v.size(); i++) {
            if (sum + v[i] > m) {
                cnt++;
                sum = v[i];
            } else {
                sum += v[i];
            }
        }
        return cnt <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        long long l=0,r=0,middle;
        for (int num : nums) {
            r += num;
            if (l < num) {
                l = num;
            }
        }
        while (l<r){
            middle=(l+r)>>1;
            if (check(nums,middle,k)){
                r=middle;
            }else{
                l=middle+1;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={7,2,5,10,8};
    Solution().splitArray(v,2);
    return 0;
}