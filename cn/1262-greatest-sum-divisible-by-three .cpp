#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int ans=0;
        vector<int>one,two;
        for (auto &i: nums){
            if (i%3==1){
                one.push_back(i);
            }else if (i%3==2){
                two.push_back(i);
            }
            ans+=i;
        }
        std::sort(one.begin(), one.end());
        std::sort(two.begin(), two.end());
        if (ans%3==1) {
            if (two.size()<2&&one.size()==0)
                return 0;
            if (two.size()<2)
                ans-=one[0];
            else if (one.size()==0)
                ans-=two[0]+two[1];
            else
                ans-= min(one[0],two[0]+two[1]);
        }else if (ans%3==2){
            if (one.size()<2&&two.size()==0)
                return 0;
            if (one.size()<2)
                ans-=two[0];
            else if (two.size()==0)
                ans-=one[0]+one[1];
            else
                ans-= min(two[0],one[0]+one[1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}