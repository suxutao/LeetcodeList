#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        string s;
        for (auto &item: nums){
            s+=to_string(item);
        }
        vector<int>v(s.size());
        for (int i = 0; i < s.size(); ++i) {
            v[i]=s[i]-'0';
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}