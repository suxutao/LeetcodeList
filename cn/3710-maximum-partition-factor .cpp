#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dis(vector<int>&a,vector<int>&b){
        return abs(a[0]-b[0])+abs(a[1]-b[1]);
    }
    int maxPartitionFactor(vector<vector<int>>& points) {
        if (points.size()==2)
            return 0;
        int n=points.size(),l=0,r=0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                r=max(r,dis(points[i],points[j]));
            }
        }
        auto check=[&](int x)->bool {
            vector<int>colors(n);
            auto dfs=[&](this auto&&dfs,int node,int color)->bool{
                colors[node]=color;
                for (int i = 0; i < n; ++i) {
                    if (i==node)
                        continue;
                    if (dis(points[node],points[i])<x){
                        if (colors[i]==color)
                            return false;
                        if (colors[i]==0&&!dfs(i,-color))
                            return false;
                    }
                }
                return true;
            };
            for (int i = 0; i < n; ++i) {
                if (colors[i]==0&&!dfs(i,1)){
                    return false;
                }
            }
            return true;
        };
        ++r;
        while (l<r){
            int mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}