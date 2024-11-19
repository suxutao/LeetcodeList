#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string getSmallestString(string s, int k) {
        for (int i = 0; i < s.length()&&k>0; ++i) {
            int a= min(s[i]-'a','z'-s[i]+1);
            if (k>=a){
                k-=a;
                s[i]='a';
            }else{
                s[i]-=k;
                break;
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}