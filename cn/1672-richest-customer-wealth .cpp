#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int>v(accounts.size(),0);
        for (int i = 0; i < v.size(); ++i) {
            for (int j = 0; j < accounts[0].size(); ++j) {
                v[i]+=accounts[i][j];
            }
        }
        return *std::max_element(v.begin(), v.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}