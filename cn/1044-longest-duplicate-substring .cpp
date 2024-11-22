#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ull = unsigned long long;
    const ull P=1313131;
    string longestDupSubstring(string s) {
        string ans;
        int n=s.size(),l=0,r=n;
        vector<ull>v(n+1),p(n+1);
        p[0]=1;
        for (int i = 0; i < n; ++i) {
            p[i+1]=p[i]*P;
            v[i+1]=v[i]*P+s[i];
        }
        auto check=[&](int len)->bool{
            unordered_map<ull,int>m;
            for (int i = len; i <= n; ++i) {
                ull t=v[i]-v[i-len]*p[len];
                if (m[t]){
                    ans=s.substr(i-len,len);
                    return true;
                }
                ++m[t];
            }
            return false;
        };
        while (l<r){
            int mid=(l+r)>>1;
            if (check(mid)){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}