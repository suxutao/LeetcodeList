#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& price, int target) {
        int l=0,r=price.size()-1;
        while (l<r){
            if (target==price[l]+price[r]){
                return {price[l],price[r]};
            }else if (target>price[l]+price[r]){
                l++;
            }else{
                r--;
            }
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}