#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isdi(string s){
        for (auto &item: s){
            if (!isdigit(item))
                return false;
        }
        return true;
    }
    int maximumValue(vector<string>& strs) {
        int ans=0;
        for (const auto &item: strs){
            if (isdi(item)){
                ans= max(ans, stoi(item));
            }else{
                ans= max(ans,(int)item.size());
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}