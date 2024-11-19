#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeDigit(string number, char digit) {
        int pos=-1;
        for (int i = 0; i < number.size(); ++i) {
            if (number[i]==digit){
                if (i==number.size()-1){
                    number.pop_back();
                    return number;
                }else{
                    if (number[i]<number[i+1]){
                        number.erase(number.begin()+i);
                        return number;
                    }else{
                        pos=i;
                    }
                }
            }
        }
        number.erase(number.begin()+pos);
        return number;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}