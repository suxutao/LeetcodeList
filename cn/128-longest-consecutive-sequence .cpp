#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,bool>m;
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int ans=1,t=0,temp=1;
        for (auto &item: nums){
            m[item]=1;
        }
        for (auto i = m.begin(); i!=m.end(); ++i) {
            nums[t++]=i->first;
        }
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i]==1+nums[i-1]){
                temp++;
                ans= max(ans,temp);
            }else{
                temp=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}