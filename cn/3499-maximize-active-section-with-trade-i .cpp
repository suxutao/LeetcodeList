#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size(),cnt=0,ans=count(s.begin(), s.end(),'1');
        s.insert(s.begin(),'1');
        s.push_back('1');
        vector<int>v;
        for (int i = 1; i <= n+1; ++i) {
            if (s[i]=='0'){
                cnt++;
            }else{
                if (cnt){
                    v.push_back(cnt);
                    cnt=0;
                }
            }
        }
        int mx=0;
        for (int i = 1; i < v.size(); ++i) {
            mx= max(mx,v[i]+v[i-1]);
        }
        return ans+mx;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}