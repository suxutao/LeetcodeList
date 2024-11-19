#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string robotWithString(string s) {
        string ans;
        int cnt[26]{};
        stack<char>st;
        for (auto &i: s){
            cnt[i-'a']++;
        }
        for (auto &i: s){
            int MIN=0;
            cnt[i-'a']--;
            while (MIN<25&&cnt[MIN]==0)
                MIN++;
            st.push(i);
            while (!st.empty() && st.top() - 'a' <= MIN) {
                ans += st.top();
                st.pop();
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}