#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxArea(vector<vector<int>>& coords) {
        ll ans=0;
        int hen_l=INT_MAX,hen_r=0,zon_d=INT_MAX,zon_u=0;
        unordered_map<int,array<ll,2>>row,col;
        for (auto &i: coords){
            if (row.contains(i[0])){
                row[i[0]][0]= max(row[i[0]][0],(ll)i[1]);
                row[i[0]][1]= min(row[i[0]][1],(ll)i[1]);
            }else{
                row[i[0]][0]= i[1];
                row[i[0]][1]= i[1];
            }
            if (col.contains(i[1])){
                col[i[1]][0]= max(col[i[1]][0],(ll)i[0]);
                col[i[1]][1]= min(col[i[1]][1],(ll)i[0]);
            }else{
                col[i[1]][0]= i[0];
                col[i[1]][1]= i[0];
            }
            hen_l= min(hen_l,i[0]);
            hen_r= max(hen_r,i[0]);
            zon_d= min(zon_d,i[1]);
            zon_u= max(zon_u,i[1]);
        }
        for (auto &[x,a]: row){
            if (a[0]!=a[1]){
                if (x!=hen_l&&x!=hen_r){
                    ans= max(ans,(a[0]-a[1])*max(x-hen_l,hen_r-x));
                }else if (x==hen_l){
                    ans= max(ans,(a[0]-a[1])*(hen_r-x));
                }else{
                    ans= max(ans,(a[0]-a[1])*(x-hen_l));
                }
            }
        }
        for (auto &[y,a]: col){
            if (a[0]!=a[1]){
                if (y!=zon_d&&y!=zon_u){
                    ans= max(ans,(a[0]-a[1])*max(y-zon_d,zon_u-y));
                }else if (y==zon_d){
                    ans= max(ans,(a[0]-a[1])*(zon_u-y));
                }else{
                    ans= max(ans,(a[0]-a[1])*(y-zon_d));
                }
            }
        }
        return ans?ans:-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}