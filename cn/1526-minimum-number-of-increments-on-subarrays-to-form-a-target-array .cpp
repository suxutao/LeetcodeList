#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int ans=target[0];
        for (int i = 1; i < target.size(); ++i) {
            ans+= max(0,target[i]-target[i-1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}