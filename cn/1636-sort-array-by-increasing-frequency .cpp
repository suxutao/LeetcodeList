#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for (auto &item: nums){
            m[item]++;
        }
        std::sort(nums.begin(), nums.end(),[&](int&a,int&b){
            if (m[a]==m[b])
                return a>b;
            return m[a]<m[b];
        });
        return nums;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}