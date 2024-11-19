#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for (auto &item: words){
            if (item.substr(0,pref.size())==pref)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}