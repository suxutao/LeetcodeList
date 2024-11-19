#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int runeReserve(vector<int>& runes) {
        int ans=1,cnt=1;
        sort(runes.begin(), runes.end());
        for (int i = 1; i < runes.size(); ++i) {
            if (runes[i]-runes[i-1]<=1){
                cnt++;
                ans= max(ans,cnt);
            }else{
                cnt=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}