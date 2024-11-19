#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumChairs(string s) {
        int ans=0,yi=0;
        for (auto &item: s){
            if (item=='E')
                yi++;
            else
                yi--;
            ans= max(ans,yi);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}