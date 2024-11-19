#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for (auto &item: details){
            if (stoi(item.substr(11,2))>60)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}