#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string freqAlphabets(string s) {
        string ans;
        int n=s.size();
        for (int i = n-1; i >= 0; --i) {
            if (s[i]=='#'){
                int j= stoi(s.substr(i - 2, 2));
                ans.push_back(j+'a'-1);
                i-=2;
            }else{
                ans.push_back(s[i]-'1'+'a');
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}