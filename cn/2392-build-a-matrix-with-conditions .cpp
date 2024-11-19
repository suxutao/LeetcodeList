#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>R[404],C[404];
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>>ans(k,vector<int>(k));
        vector<int>inr(k+1),inc(k+1),r,c;
        unordered_map<int,int>m;
        for (auto &i: rowConditions){
            R[i[0]].push_back(i[1]);
            inr[i[1]]++;
        }
        for (auto &i: colConditions){
            C[i[0]].push_back(i[1]);
            inc[i[1]]++;
        }
        queue<int>q,p;
        for (int i = 1; i <= k; ++i) {
            if (inr[i]==0)
                q.push(i);
            if (inc[i]==0)
                p.push(i);
        }
        while (!q.empty()){
            r.push_back(q.front());
            q.pop();
            for (auto &i: R[r.back()]){
                --inr[i];
                if (inr[i]==0)
                    q.push(i);
            }
        }
        while (!p.empty()){
            c.push_back(p.front());
            p.pop();
            for (auto &i: C[c.back()]){
                --inc[i];
                if (inc[i]==0)
                    p.push(i);
            }
        }
        if (r.size()<k||c.size()<k)
            return {};
        for (int i = 0; i < k; ++i) {
            m[c[i]]=i;
        }
        for (int i = 0; i < k; ++i) {
            ans[i][m[r[i]]]=r[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>r{{1,2},{3,2}},c{{2,1},{3,2}};
    Solution().buildMatrix(3,r,c);
    return 0;
}