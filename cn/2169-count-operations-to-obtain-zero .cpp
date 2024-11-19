#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans=0;
        while (num1&&num2){
            if (num1>num2)
                swap(num2,num1);
            num2-=num1;
            ++ans;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}