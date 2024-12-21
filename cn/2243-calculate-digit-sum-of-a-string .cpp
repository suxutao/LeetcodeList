#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string digitSum(string s, int k) {
        while (s.size()>k){
            string t;
            for (int i = 0; i < s.size(); i+=k) {
                int temp=0;
                for (int j = i; j < min<int>(i+k,s.size()); ++j) {
                    temp+=s[j]-'0';
                }
                t+=to_string(temp);
            }
            s=t;
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().digitSum("00000000",3);
    return 0;
}