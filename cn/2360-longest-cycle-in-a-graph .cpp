#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n=edges.size(),ans=-1,cnt;
        vector<int>in(n);
        for (int i = 0; i < n; ++i) {
            if (~edges[i])
                ++in[edges[i]];
        }
        queue<int>q;
        for (int i = 0; i < n; ++i) {
            if (in[i]==0)
                q.push(i);
        }
        while (!q.empty()){
            int t=q.front();q.pop();
            if (~edges[t]){
                --in[edges[t]];
                if (in[edges[t]]==0)
                    q.push(edges[t]);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (in[i]==1){
                int temp=i;cnt=0;
                while (in[temp]==1){
                    cnt++;
                    in[temp]=0;
                    temp=edges[temp];
                }
                ans=max(ans,cnt);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}