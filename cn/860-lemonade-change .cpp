#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,ten=0;
        for (int i = 0; i < bills.size(); ++i) {
            if (bills[i]==5){
                five++;
            }else if (bills[i]==10){
                if (five==0)
                    return false;
                five--;
                ten++;
            }else{
                if (five>=1&&ten>=1){
                    five--;ten--;
                }else if (five>=3){
                    five-=3;
                }else
                    return false;
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}