#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0,MAX=0;
        for (auto &item: nums){
            m[item]++;
        }
        for (auto &[a,b]: m){
            if (b>MAX){
                MAX=b;
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