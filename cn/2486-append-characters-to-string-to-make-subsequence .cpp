#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int appendCharacters(string s, string t) {
        int n1=s.size(),n2=t.size(),p1=0,p2=0;
        while (p1<n1&&p2<n2){
            if (s[p1]!=t[p2]){
                p1++;
            }else{
                p1++;p2++;
            }
        }
        return n2-p2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}