#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int type,ans=0;
        if (ruleKey=="type"){
            type=0;
        }else if (ruleKey=="color"){
            type=1;
        }else{
            type=2;
        }
        for (int i = 0; i < items.size(); ++i) {
            if (items[i][type]==ruleValue)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}