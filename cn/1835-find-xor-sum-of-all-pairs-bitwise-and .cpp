#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int a= accumulate(arr1.begin(),arr1.end(),0,bit_xor<>());
        int b= accumulate(arr2.begin(),arr2.end(),0,bit_xor<>());
        return a&b;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}