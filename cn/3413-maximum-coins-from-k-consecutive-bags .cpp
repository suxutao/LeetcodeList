#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maximumCoins(vector<vector<int>>& coins, int k) {
        ll ans=0,pre=0,cnt=1;
        map<int,ll>m;
        unordered_map<int,ll>ma,me;
        ranges::sort(coins);
        for (auto &i: coins){
            m[i[0]]=pre+i[2];
            pre+=(ll)i[2]*(i[1]-i[0]+1);
            m[i[1]]=pre;
            ma[i[0]]=ma[i[1]]=i[2];
            me[i[0]]=me[i[1]]=cnt++;
        }
        for (auto &[pos,coin]: m){
            auto t=m.lower_bound(pos+k-1);
            if (t==m.end()){
                t= prev(t);
                ans= max(ans,t->second-coin+ma[pos]);
            }else{
                if (t->first==pos+k-1){
                    ans= max(ans,t->second-coin+ma[pos]);
                }else{
                    auto p= prev(t);
                    if (me[p->first]==me[t->first]){
                        ans= max(ans,p->second+ma[p->first]*(pos+k-1-p->first)-coin+ma[pos]);
                    }else{
                        ans= max(ans,p->second-coin+ma[pos]);
                    }
                }
            }
        }
        for (auto &[pos,coin]: m){
            auto t=m.lower_bound(pos-k+1);
            if (t==m.begin()){
                ans= max(ans,coin-t->second+ma[t->first]);
            }else{
                if (t->first==pos-k+1){
                    ans= max(ans,coin-t->second+ma[t->first]);
                }else{
                    auto p= prev(t);
                    if (me[p->first]==me[t->first]){
                        ans= max(ans,coin-t->second+ma[p->first]*(t->first-pos+k));
                    }else{
                        ans= max(ans,coin-p->second);
                    }
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{30,49,12}};
    Solution().maximumCoins(v,28);
    return 0;
}