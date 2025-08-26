#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size(),cnt=n/k;
        if (n%k)
            return false;
        unordered_map<int,int>m;
        for (auto &item: nums){
            ++m[item];
        }
        for (auto &[_,a]: m){
            if (a>cnt)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}