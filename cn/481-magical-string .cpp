#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int magicalString(int n) {
        int ans=0,p=2;
        string s="122";
        while (s.size()<n){
            if (p&1){
                if (s[p]=='1'){
                    s.push_back('2');
                }else{
                    s.push_back('2');
                    s.push_back('2');
                }
            }else{
                if (s[p]=='1'){
                    s.push_back('1');
                }else{
                    s.push_back('1');
                    s.push_back('1');
                }
            }
            ++p;
        }
        for (int i = 0; i < n; ++i) {
            ans+=s[i]=='1';
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}