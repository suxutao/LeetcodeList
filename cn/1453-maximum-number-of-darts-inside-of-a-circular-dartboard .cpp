#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ad = array<double, 2>;
    double dis(ad&x,ad&y){
        return sqrt((x[0]-y[0])*(x[0]-y[0])+(x[1]-y[1])*(x[1]-y[1]));
    }
    ad center(ad&x,ad&y,double r){
        ad m={(x[0] + y[0])/2, (x[1] + y[1])/2};
        double d=dis(x,y)/2;
        double h=sqrt(r*r-d*d);
        ad o={y[1]-x[1],x[0]-y[0]};
        double od= sqrt(o[0]*o[0]+o[1]*o[1]);
        o[0]/=od;o[1]/=od;
        return {m[0]+h*o[0],m[1]+h*o[1]};
    }
    int numPoints(vector<vector<int>>& darts, int r) {
        int n=darts.size(),ans=1;
        vector<ad>v;
        for (int i = 0; i < n; ++i) {
            v.push_back({(double)darts[i][0],(double)darts[i][1]});
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                int t=0;
                if (i==j){
                    for (int k = 0; k < n; ++k) {
                        if (dis(v[i],v[k])<=r)
                            ++t;
                    }
                }else{
                    if (dis(v[i],v[j])>r*2){
                        continue;
                    }
                    ad a= center(v[i],v[j],r);
                    for (int k = 0; k < n; ++k) {
                        if (dis(a,v[k])<=r)
                            ++t;
                    }
                }
                ans= max(ans,t);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}