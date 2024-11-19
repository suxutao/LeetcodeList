#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int fa[1002];
    int find_set(int x){
        return x==fa[x]?x:fa[x]= find_set(fa[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b)
            fa[b]=a;
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size(),ans=0;
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        priority_queue<pii,vector<pii>,greater<>>q;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                q.emplace(abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1]),i<<16|j);
            }
        }
        while (!q.empty()){
            auto [a,b]=q.top();q.pop();
            int x=b>>16,y=b<<16>>16;
            x= find_set(x);
            y= find_set(y);
            if (x!=y){
                ans+=a;
                merge_set(x,y);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}