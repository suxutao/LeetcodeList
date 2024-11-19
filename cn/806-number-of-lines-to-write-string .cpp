#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int hang=1,sum=0;
        for (int i = 0; i < s.size(); ++i) {
            if (widths[s[i]-'a']+sum>100){
                hang++;
                sum=widths[s[i]-'a'];
            }else{
                sum+=widths[s[i]-'a'];
            }
        }
        return {hang,sum};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}