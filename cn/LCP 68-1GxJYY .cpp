#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int beautifulBouquet(vector<int>& flowers, int cnt) {
        int n=flowers.size(),l=0,ans=0;
        unordered_map<int,int>m;
        for (int r = 0; r < n; ++r) {
            ++m[flowers[r]];
            while (m[flowers[r]]>cnt){
                --m[flowers[l++]];
            }
            ans+=r-l+1;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}