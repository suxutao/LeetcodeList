#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long calculateScore(string s) {
        ll n=s.size(),ans=0;
        vector<int>v[26];
        for (int i = 0; i < n; ++i) {
            int c=s[i]-'a',cx=25-c;
            if (!v[cx].empty()){
                ans+=i-v[cx].back();
                v[cx].pop_back();
            }else{
                v[c].push_back(i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}