#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minChanges(string s) {
        int ans=0,temp=1;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i]==s[i-1]){
                temp++;
            }else{
                if (temp&1){
                    ans++;
                    temp=1;
                    s[i]=s[i-1];
                    i++;
                }else{
                    temp=1;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}