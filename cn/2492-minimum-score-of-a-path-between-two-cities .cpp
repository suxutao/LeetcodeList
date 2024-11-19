#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    struct node{
        node(){}
        node(int to,int w):to(to),w(w){}
        int to,w;
    };
    vector<node>G[100005];
    unordered_map<int,bool>m;
    int n;
    int dfs(int x,int y){
        m[x]=1;
        for (auto &i: G[x]){
            if (!m[i.to])
                y=min(y,dfs(i.to, min(i.w,y)));
            else
                y= min(y,i.w);
        }
        return y;
    }
    int minScore(int n, vector<vector<int>>& roads) {
        this->n=n;
        int ans=INT_MAX;
        for (auto &i: roads){
            G[i[0]].emplace_back(i[1],i[2]);
            G[i[1]].emplace_back(i[0],i[2]);
        }
        m[1]=1;
        for (auto &i: G[1]){
            if (!m[i.to])
                ans= min(ans, dfs(i.to,i.w));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}