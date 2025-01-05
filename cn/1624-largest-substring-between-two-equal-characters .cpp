#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        vector<int>v('z'+1,-1);
        for (int i = 0; i < s.size(); ++i) {
            if (~v[s[i]]){
                ans= max(ans,i-v[s[i]]-1);
            }else{
                v[s[i]]=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}