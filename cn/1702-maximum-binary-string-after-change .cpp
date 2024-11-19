#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string maximumBinaryString(string binary) {
        for (int i = 0; i < binary.size() - 1; ++i) {
            if (binary[i]=='0'){
                int pos=binary.find('0',i+1);
                if (~pos){
                    binary[i]='1';
                    if (pos!=1+i){
                        binary[pos]='1';
                        binary[i+1]='0';
                    }
                }else{
                    break;
                }
            }
        }
        return binary;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().maximumBinaryString("000110");
    return 0;
}