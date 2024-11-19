#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for (auto &i: nums){
            ++m[i];
        }
        for (auto &[a,b]: m){
            if (b==1)
                return -1;
            if (b%3==0)
                ans+=b/3;
            else
                ans+=b/3+1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}