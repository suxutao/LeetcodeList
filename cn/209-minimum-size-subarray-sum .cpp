#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=nums.size();
        int arr[l+2];
        int a=0,b=1,Min=INT_MAX;
        arr[0]=0;arr[1]=nums[0];
        for (int i = 1; i < l; ++i) {
            arr[i+1]=arr[i]+nums[i];
        }
        while(b<=l){
            if (arr[b]-arr[a]<target)
                b++;
            else{
                Min=min(Min,b-a);
                a++;
            }
        }
        return Min==INT_MAX?0:Min;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,2,3,4,5};
    cout<<Solution().minSubArrayLen(15,v)<<endl;
    return 0;
}