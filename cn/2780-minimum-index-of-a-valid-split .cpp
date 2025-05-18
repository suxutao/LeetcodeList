#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size(),key,cnt=0,pre=0;
        unordered_map<int,int>m;
        for (int i = 0; i < n; ++i) {
            ++m[nums[i]];
        }
        for (auto &[a,b]: m){
            if (b>cnt){
                cnt=b;
                key=a;
            }
        }
        for (int i = 0; i < n-1; ++i) {
            pre+=nums[i]==key;
            if (pre*2>i+1&&(cnt-pre)*2>n-i-1)
                return i;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}