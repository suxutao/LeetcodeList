#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double>s;
        sort(nums.begin(), nums.end());
        int l=0,r=nums.size()-1;
        while (l<r){
            s.insert((nums[l++]+nums[r--])/2.);
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}