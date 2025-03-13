#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    bool arr['z'+1]{};
    ll hua(string&s,int k){
        ll n=s.size(),ans=0,l=0,cnt=0;
        unordered_map<char,int>m;
        for (int r = 0; r < n; ++r) {
            if (arr[s[r]]){
                ++m[s[r]];
            }else{
                cnt++;
            }
            while (m.size()==5&&cnt>=k){
                if (arr[s[l]]){
                    if (--m[s[l]]==0)
                        m.erase(s[l]);
                }else{
                    cnt--;
                }
                l++;
            }
            ans+=l;
        }
        return ans;
    }
    long long countOfSubstrings(string word, int k) {
        arr['a']=1;
        arr['e']=1;
        arr['i']=1;
        arr['o']=1;
        arr['u']=1;
        return hua(word,k)-hua(word,k+1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}