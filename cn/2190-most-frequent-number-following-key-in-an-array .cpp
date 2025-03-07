#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int n=nums.size();
        unordered_map<int,int>m;
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i]==key){
                ++m[nums[i+1]];
            }
        }
        int ans=0,MAX=INT_MIN;
        for (auto &[a,b]: m){
            if (b>MAX){
                ans=a;
                MAX=b;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}