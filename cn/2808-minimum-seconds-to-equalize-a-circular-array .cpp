#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int ans,temp=INT_MAX;bool tong= false;
        unordered_map<int,vector<int>>m;
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]].push_back(i);
        }
        for (auto &item: m){
            ans=0;
            for (int i = 1; i < item.second.size(); ++i) {
                ans= max(ans,(int)ceil((item.second[i]-1-item.second[i-1])/2.0));
            }
            if (item.second.size()>1) {
                ans = max(ans, (int) ceil(
                        (item.second[0] + (int) nums.size() - 1 - item.second[item.second.size() - 1]) / 2.0));
                tong= true;
            }
            if (ans)
                temp= min(ans,temp);
        }
        return tong?(temp==INT_MAX?0:temp):int(ceil((nums.size()-1)/2.0));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}