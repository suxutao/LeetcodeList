#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>v(spells.size());
        sort(potions.begin(), potions.end());
        for (int i = 0; i < v.size(); ++i) {
            auto a= lower_bound(potions.begin(), potions.end(),(double)success/spells[i]);
            if (a!=potions.end()){
                v[i]=potions.end()-a;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}