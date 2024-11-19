#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int count,chen;
        vector<pair<int,int>>v;
        vector<int>V(nums.size());
        vector<int>n(nums.size());
        for (int i = 0; i < nums.size(); ++i) {
            n[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            count=0;chen=1;
            if (nums[i]){
                while(nums[i]){
                    count+=mapping[nums[i]%10]*chen;
                    nums[i]/=10;chen*=10;
                }
            }else{
                count=mapping[0];
            }
            v.push_back({count,i});
        }
        sort(v.begin(),v.end());
        for (int i = 0; i < nums.size(); ++i) {
            V[i]=n[v[i].second];
        }
        return V;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v1={9,8,7,6,5,4,3,2,1,0};
    vector<int>v2={0,1,2,3,4,5,6,7,8,9};
    Solution().sortJumbled(v1,v2);
    return 0;
}