#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int ans=-1,n=nums.size(),cnt=0;
        map<int,int>m;
        for (auto &item: nums)
            ++m[item];
        for (auto &[a,b]: m){
            if (a%2==0&&b>cnt){
                cnt=b;
                ans=a;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}