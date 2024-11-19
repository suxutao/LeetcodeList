#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<pair<char,int>,int>m;
    int maximumLength(string s) {
        int ans=-1,count=0;
        char c='0';
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]!=c){
                for (int j = 1; j <= count; ++j) {
                    m[{c,j}]+=count-j+1;
                    if (m[{c,j}]>=3&&j>ans)
                        ans=j;
                }
                c=s[i];
                count=1;
            }else{
                count++;
            }
        }
        for (int j = 1; j <= count; ++j) {
            m[{c,j}]+=count-j+1;
            if (m[{c,j}]>=3&&j>ans)
                ans=j;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().maximumLength("aaaa");
    return 0;
}