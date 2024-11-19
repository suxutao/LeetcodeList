#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int>v;
        for (int i = 0; i < nums.size(); ++i) {
            if (v.empty())
                v.push_back(nums[i]);
            else{
                while (!v.empty()&&__gcd(v.back(),nums[i])!=1){
                    nums[i]=v.back()/__gcd(v.back(),nums[i])*nums[i];
                    v.pop_back();
                }
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}