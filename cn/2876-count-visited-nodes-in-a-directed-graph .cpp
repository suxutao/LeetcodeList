#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> countVisitedNodes(vector<int>& edges) {
        int n=edges.size();
        queue<int>q;
        vector<int>in(n),ans(n);
        unordered_set<int>s;
        for (int i = 0; i < n; ++i) {
            ++in[edges[i]];
        }
        for (int i = 0; i < n; ++i) {
            if (in[i]==0)
                q.push(i);
        }
        while (!q.empty()){
            int t=q.front();q.pop();
            s.insert(t);
            --in[edges[t]];
            if (!in[edges[t]])
                q.push(edges[t]);
        }
        for (int i = 0; i < n; ++i) {
            if (in[i]==1){
                int cnt=0,t=i;
                while (in[t]==1){
                    in[t]=0;
                    t=edges[t];
                    cnt++;
                }
                t=i;
                do {
                    ans[t]=cnt;
                    t=edges[t];
                } while (t!=i);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (ans[i]==0){
                int t=i,cnt=0;
                while (s.contains(t)){
                    t=edges[t];
                    cnt++;
                }
                int f=i;
                while (s.contains(f)){
                    ans[f]=cnt+ans[t];
                    f=edges[f];
                    cnt--;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
//    Solution().countVisitedNodes();
    return 0;
}