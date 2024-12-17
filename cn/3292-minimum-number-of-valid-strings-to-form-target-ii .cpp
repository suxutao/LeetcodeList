#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ull = unsigned long long;
    const ull P=1313131;
    int minValidStrings(vector<string>& words, string target) {
        int n=target.size(),mx=0;
        vector<int>v(n);
        vector<ull>pre(n+1),pp(n+1);
        for (int i = 0; i < words.size(); ++i) {
            mx= max<int>(mx,words[i].size());
        }
        vector<unordered_set<ull>>vs(mx+2);
        for (auto &i: words){
            ull t=0;
            for (int j = 0; j < i.size(); ++j) {
                t=t*P+i[j];
                vs[j].insert(t);
            }
        }
        pp[0]=1;
        for (int i = 1; i <= n; ++i) {
            pre[i]=pre[i-1]*P+target[i-1];
            pp[i]=pp[i-1]*P;
        }
        auto jump=[&](int i)->int{
            int l=0,r=min(mx,n-i)+1;
            while (l+1<r){
                int mid=(l+r)>>1;
                ull t=pre[i+mid]-pre[i]*pp[mid];
                if (vs[mid-1].contains(t)){
                    l=mid;
                }else{
                    r=mid;
                }
            }
            return l;
        };
        for (int i = 0; i < n; ++i) {
            v[i]=jump(i);
        }
        int mxPos=0,end=0,ans=0;
        for (int i = 0; i < n; ++i) {
            if (mxPos>=i){
                mxPos= max(mxPos,i+v[i]);
                if (i==end){
                    ans++;
                    end=mxPos;
                }
            }else{
                return -1;
            }
        }
        return mxPos>=n?ans:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>vs{"abc","aaaaa","bcdef"};
    string target="aabcdabc";
    Solution().minValidStrings(vs,target);
    return 0;
}