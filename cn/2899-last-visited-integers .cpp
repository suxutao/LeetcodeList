#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        deque<int>seen;
        vector<int>ans;
        int k=0;
        for (int i = 0; i < nums.size(); ++i) {
            if (~nums[i]){
                seen.push_front(nums[i]);
            }else{
                if (i==0){
                    if (1>seen.size())
                        ans.push_back(-1);
                    else
                        ans.push_back(seen[0]);
                }else{
                    if (nums[i-1]==-1)
                        k++;
                    else
                        k=1;
                    if (k>seen.size())
                        ans.push_back(-1);
                    else
                        ans.push_back(seen[k-1]);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}