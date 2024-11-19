#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        while (l<r){
            int sum=numbers[l]+numbers[r];
            if (sum==target)
                return {l,r};
            else if (sum<target)
                l++;
            else
                r--;
        }
        return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}