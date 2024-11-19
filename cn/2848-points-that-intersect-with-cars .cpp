#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        map<int,bool>num;
        for (auto &i: nums){
            for (int j = i[0]; j <= i[1]; ++j) {
                num[j]=1;
            }
        }
        return num.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}