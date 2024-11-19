#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int giveGem(vector<int>& gem, vector<vector<int>>& operations) {
        for (const auto &item: operations){
            gem[item[1]]+=gem[item[0]]/2;
            gem[item[0]]-=gem[item[0]]/2;
        }
        return *max_element(gem.begin(), gem.end())-*min_element(gem.begin(), gem.end());
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}