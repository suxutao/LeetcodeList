#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int>v(2);
        for (int i = 0; i < nums.size(); ++i) {
            m[nums[i]]++;
        }
        for (auto &item: m){
            if (item.second&1)
                v[1]++;
            v[0]+=item.second/2;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}