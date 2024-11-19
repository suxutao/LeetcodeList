#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        map<pair<char,int>,int>m;
        string s;
        for (int i = 0; i < strs.size(); ++i) {
            for (int j = 0; j < strs[i].size(); ++j) {
                m[{strs[i][j],j}]++;
            }
        }
        for (int i = 0; i < strs[0].size(); ++i) {
            if (m[{strs[0][i],i}]==strs.size())
                s+=strs[0][i];
            else
                break;
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>v={"flower","flow","flight"};
    Solution().longestCommonPrefix(v);
    return 0;
}