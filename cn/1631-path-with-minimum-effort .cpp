#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int l=0,r=1e6,mid,m=heights.size(),n=heights[0].size();
        int arr[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
        auto check=[&](int x){
            queue<pair<int,int>>q;
            vector<vector<int>>v(m,vector<int>(n));
            q.push({0,0});v[0][0]=1;
            while (!q.empty()){
                int a=q.front().first,b=q.front().second;
                q.pop();
                if (a==m-1&&b==n-1)
                    return true;
                for (auto &i: arr){
                    if (a+i[0]<0||a+i[0]>=m||b+i[1]<0||b+i[1]>=n)
                        continue;
                    if (!v[a+i[0]][b+i[1]]&& abs(heights[a][b]-heights[a+i[0]][b+i[1]])<=x){
                        v[a+i[0]][b+i[1]]=1;
                        q.push({a+i[0],b+i[1]});
                    }
                }
            }
            return false;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (!check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}