#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size()-1;
        while ((s+1)&&digits[s]==9){
            digits[s]=0;
            s--;
        }
        if (s==-1){
            digits.insert(digits.begin(),1);
        }else{
            digits[s]++;
        }
        return digits;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}