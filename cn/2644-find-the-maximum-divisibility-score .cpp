#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        std::sort(divisors.begin(), divisors.end());
        int MAX=-1,ans;
        function<int(int)> f=[&](int a){
            int ans=0;
            for (const auto &item: nums){
                if (item%a==0)
                    ans++;
            }
            return ans;
        };
        for (auto &item: divisors){
            int temp=f(item);
            if (temp>MAX){
                MAX=temp;
                ans=item;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}