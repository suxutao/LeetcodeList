#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size(),sum=0;
        vector<int>v(n);
        for (auto &item: rolls){
            sum+=item;
        }
        if (mean*(n+m)>sum+n*6||mean*(n+m)<sum+n)
            return {};
        int shen=mean*(n+m)-sum;
        while (shen){
            int shu=shen/n;
            if (shu>0){
                shen-=shu*n;
                for (int i = 0; i < n; ++i) {
                    v[i]+=shu;
                }
            }
            n--;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}