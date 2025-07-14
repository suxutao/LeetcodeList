#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>fa;
    int query(int x){
        return x==fa[x]?x:fa[x]=query(fa[x]);
    }
    void merge(int x,int y){
        x= query(x);
        y= query(y);
        if (x!=y)
            fa[x]=y;
    }
    int minTime(int n, vector<vector<int>>& edges, int k) {
        if (edges.empty())
            return 0;
        int t=n,a,b;
        fa.resize(n);
        for (int i = 0; i < n; ++i) {
            fa[i]=i;
        }
        ranges::sort(edges,[&](auto&a,auto&b){
            return a[2]>b[2];
        });
        for (auto &i: edges){
            a= query(i[0]);
            b= query(i[1]);
            if (a!=b){
                --t;
                merge(i[0],i[1]);
                if (t<k)
                    return i[2];
            }
        }
        return 0;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}