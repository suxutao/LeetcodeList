#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans=0;
        for (auto &item: nums){
            string s=to_string(item);
            int c= *std::max_element(s.begin(), s.end())-'0';
            for (int i = 0; i < s.size(); ++i) {
                ans+=c;
                c*=10;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}