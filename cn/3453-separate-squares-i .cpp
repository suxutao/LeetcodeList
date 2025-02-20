#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double l=0,r=0,sum=0;
        for (auto &i: squares){
            r= max<double>(r,i[1]+i[2]+1);
            sum+=(double)i[2]*i[2];
        }
        auto check=[&](double x)->bool{
            double acc=0;
            for (auto &i: squares){
                if (i[1]+i[2]<=x)
                    acc+=(double)i[2]*i[2];
                else if (i[1]>=x)
                    continue;
                else
                    acc+=i[2]*(x-i[1]);
            }
            return acc*2<sum;
        };
        while (r-l>1e-6){
            double mid=(l+r)/2;
            if (check(mid)){
                l=mid;
            }else{
                r=mid;
            }
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}