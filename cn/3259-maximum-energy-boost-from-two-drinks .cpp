#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        int n=energyDrinkA.size();
        vector<ll>a(n+1),b(n+1);
        a[1]=energyDrinkA[0];
        b[1]=energyDrinkB[0];
        for (int i = 2; i <= n; ++i) {
            a[i]= max(a[i-1],b[i-2])+energyDrinkA[i-1];
            b[i]= max(b[i-1],a[i-2])+energyDrinkB[i-1];
        }
        return max(a[n],b[n]);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}