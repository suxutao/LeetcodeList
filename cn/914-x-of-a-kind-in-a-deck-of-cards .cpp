#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>m;
        int gg=0;
        for (auto &i: deck){
            m[i]++;
        }
        for (auto &[a,b]: m){
            if (gg)
                gg=__gcd(gg,b);
            else
                gg=b;
            if (gg==1)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}