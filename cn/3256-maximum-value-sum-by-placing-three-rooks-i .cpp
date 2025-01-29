#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    using pii = pair<int, int>;
    long long maximumValueSum(vector<vector<int>>& board) {
        int m=board.size(),n=board[0].size();
        ll ans=LLONG_MIN;
        array<pii,3>p;
        vector<array<pii,3>>suf(m);
        ranges::fill(p,pair(INT_MIN,-1));
        auto update=[&](vector<int>&row){
            for (int i = 0; i < row.size(); ++i) {
                int x=row[i];
                if (x>p[0].first){
                    if (p[0].second!=i){
                        if (p[1].second!=i){
                            p[2]=p[1];
                        }
                        p[1]=p[0];
                    }
                    p[0]={x,i};
                }else if (x>p[1].first&&i!=p[0].second){
                    if (p[1].second!=i){
                        p[2]=p[1];
                    }
                    p[1]={x,i};
                }else if (x>p[2].first&&i!=p[0].second&&i!=p[1].second){
                    p[2]={x,i};
                }
            }
        };
        for (int i = m - 1; i >= 0; --i) {
            update(board[i]);
            suf[i]=p;
        }
        ranges::fill(p,pair(INT_MIN,-1));
        for (int i = 1; i < m-1; ++i) {
            update(board[i-1]);
            auto s=suf[i+1];
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < 3; ++k) {
                    for (int l = 0; l < 3; ++l) {
                        if (j!=p[k].second&&j!=s[l].second&&p[k].second!=s[l].second){
                            ans= max(ans,(ll)board[i][j]+p[k].first+s[l].first);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}