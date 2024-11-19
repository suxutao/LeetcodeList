#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string stringHash(string s, int k) {
        int n=s.size();
        string ans;
        for (int i = 0; i < n; i+=k) {
            int t=0;
            for (int j = i; j < i + k; ++j) {
                t+=s[j]-'a';
            }
            ans.push_back(t%26+'a');
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}