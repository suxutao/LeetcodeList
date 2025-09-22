#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>v(101,0);
        for (int i = 0; i < nums.size(); ++i) {
            v[nums[i]]++;
        }
        int ans=0,MAX=0;
        for (int i = 0; i < v.size(); ++i) {
            if (v[i]>MAX){
                ans=v[i];
                MAX=v[i];
            }else if (v[i]==MAX){
                ans+=v[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}