#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string smallestNumber(string pattern) {
        int i=0,cur='1',n=pattern.size();
        string ans(n+1,'1');
        while (i<n){
            if (i&&pattern[i]=='I')
                ++i;
            while (i<n&&pattern[i]=='I'){
                ans[i]=cur++;
                ++i;
            }
            int tem=i;
            while (i<n&&pattern[i]=='D'){
                ++i;
            }
            for (int j = i; j >= tem; --j) {
                ans[j]=cur++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}