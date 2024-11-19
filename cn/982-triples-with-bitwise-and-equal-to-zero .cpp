#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countTriplets(vector<int>& nums) {
        int n=nums.size(),ans=0;
        unordered_map<int,int>m;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                m[nums[i]&nums[j]]++;
            }
        }
        for (int i = 0; i < n; ++i) {
            for (auto &j: m){
                if ((j.first&nums[i])==0)
                    ans+=j.second;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}