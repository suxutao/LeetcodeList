#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        unordered_map<int,int>m;
        for (auto &i: nums){
            if (m[k-i]){
                ++ans;--m[k-i];
            }else{
                ++m[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}