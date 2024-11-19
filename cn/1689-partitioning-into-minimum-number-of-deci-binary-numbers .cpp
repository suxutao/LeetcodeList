#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minPartitions(string n) {
        int ans=1;
        for (int i = 0; i < n.size(); ++i) {
            if (n[i]>ans+48){
                ans=n[i]-48;
            }
            if (ans==9)
                return ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}