#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumImbalanceNumbers(vector<int>& nums) {
        int ans=0,n=nums.size();
        for (int i = 0; i < n; ++i) {
            vector<int>v(1,nums[i]);
            int temp=0;
            for (int j = i+1; j < n; ++j) {
                int p= upper_bound(v.begin(), v.end(),nums[j])-v.begin();
                v.insert(v.begin()+p,nums[j]);
                if (p==0){
                    if (v[1]-v[0]>1)
                        temp++;
                }else if (p==v.size()-1){
                    if (v[p]-v[p-1]>1)
                        temp++;
                }else{
                    temp+=(v[p]-v[p-1]>1)+(v[p+1]-v[p]>1)-(v[p+1]-v[p-1]>1);
                }
                ans+=temp;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={2,3,1,4};
    Solution().sumImbalanceNumbers(v);
    return 0;
}