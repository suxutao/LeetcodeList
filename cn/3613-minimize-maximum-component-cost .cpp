#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>fa;
    int query(int x){
        return x==fa[x]?x:fa[x]= query(fa[x]);
    }
    void merge(int x,int y){
        x= query(x);
        y= query(y);
        if (x!=y)
            fa[x]=y;
    }
    int minCost(int n, vector<vector<int>>& edges, int k) {
        if (n<=k)
            return 0;
        int cnt=n,ans=0;
        fa.resize(n);
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        ranges::sort(edges,[&](auto&a,auto&b){
            return a[2]<b[2];
        });
        for (auto &i: edges){
            int a= query(i[0]),b= query(i[1]);
            if (a!=b){
                merge(i[0],i[1]);
                cnt--;
                ans=i[2];
            }
            if (cnt<=k)
                return ans;
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}