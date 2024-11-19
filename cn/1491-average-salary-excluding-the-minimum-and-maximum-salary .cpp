#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double average(vector<int>& salary) {
        std::sort(salary.begin(), salary.end());
        double ans=0;
        for (int i = 1; i < salary.size() - 1; ++i) {
            ans+=salary[i];
        }
        return ans/(salary.size()-2);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}