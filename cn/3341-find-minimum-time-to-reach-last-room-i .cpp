#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int arr[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int m=moveTime.size(),n=moveTime[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n));
        priority_queue<pii,vector<pii>,greater<>>q;
        q.emplace(0,0);
        while (!q.empty()){
            auto [a,b]=q.top();
            q.pop();
            int x=b>>16,y=b<<16>>16;
            if (vis[x][y])
                continue;
            vis[x][y]=1;
            moveTime[x][y]=a;
            if (x==m-1&&y==n-1)
                return a;
            for (auto &i: arr){
                int tx=i[0]+x,ty=i[1]+y;
                if (tx<0||ty<0||tx>=m||ty>=n||vis[tx][ty])
                    continue;
                q.emplace(1+max(a,moveTime[tx][ty]),tx<<16|ty);
            }
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}