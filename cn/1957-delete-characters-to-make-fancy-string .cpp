#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string makeFancyString(string s) {
        char c=' ';int cnt=0;
        string ans;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]==c){
                cnt++;
                if (cnt<3)
                    ans.push_back(c);
            }else{
                cnt=1;
                c=s[i];
                ans.push_back(c);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}