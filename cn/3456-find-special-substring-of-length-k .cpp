#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n=s.size()+1,cnt=1;
        s.push_back('?');
        for (int i = 1; i < n; ++i) {
            if (s[i]==s[i-1]){
                cnt++;
            }else{
                if (cnt==k)
                    return true;
                cnt=1;
            }
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}