#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt=0,pos=s.size();
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]==' '){
                cnt++;
            }
            if (cnt==k){
                pos=i;
                break;
            }
        }
        string ans(s.begin(),s.begin()+pos);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}