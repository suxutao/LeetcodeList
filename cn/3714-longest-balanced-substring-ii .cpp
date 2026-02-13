#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size(),ans=1,a=0,b=0,c=0,t1,t2,cnt=1;
        unordered_map<long long,int>m;
        m[(long long)n<<32|n]=-1;
        for (int i = 1; i < n; ++i) {
            if (s[i]==s[i-1]){
                cnt++;
                ans=max(ans,cnt);
            }else{
                cnt=1;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (s[i]=='a'){
                ++a;
            }else if (s[i]=='b'){
                ++b;
            }else{
                ++c;
            }
            t1=a-b+n,t2=a-c+n;
            if (!m.contains((long long)t1<<32|t2)){
                m[(long long)t1<<32|t2]=i;
            }else{
                ans=max(ans,i-m[(long long)t1<<32|t2]);
            }
        }
        auto f=[&](char x,char y)->void{
            for (int i = 0; i < n; ++i) {
                int d=0;
                unordered_map<int,int>p;
                p[0]=i-1;
                for (; i<n&&(s[i]==x||s[i]==y); ++i) {
                    d+=s[i]==x?1:-1;
                    if (p.contains(d)){
                        ans=max(ans,i-p[d]);
                    }else{
                        p[d]=i;
                    }
                }
            }
        };
        f('a','b');
        f('a','c');
        f('b','c');
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}