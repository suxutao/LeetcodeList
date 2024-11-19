#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int ans=0;
        while (ans*(ans+1)/2<=grades.size())
            ++ans;
        return ans-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}