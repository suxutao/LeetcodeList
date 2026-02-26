#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numSteps(string s) {
        int ans=0;
        while (s.size()>1){
            if (s.back()=='0'){
                s.pop_back();
            }else{
                for (int i = s.size() - 1; i >= 0; --i) {
                    if (s[i]=='1'){
                        s[i]='0';
                    }else{
                        s[i]='1';
                        break;
                    }
                }
                if (s[0]=='0')
                    s.insert(s.begin(),'1');
            }
            ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}