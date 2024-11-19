#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int sz=set<int>(nums.begin(),nums.end()).size();
        int n=nums.size(),l=0,r=0,ans=0;
        unordered_map<int,int>m;
        while (r<n){
            ++m[nums[r]];
            while (m.size()==sz){
                --m[nums[l++]];
                if (m[nums[l-1]]==0)
                    m.erase(nums[l-1]);
            }
            ans+=l;
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}