#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        bool a= false;
        for (int i = 0; i < num.size(); ++i) {
            if (change[num[i]-'0']>num[i]-'0'){
                num[i]=change[num[i]-'0']+'0';
                a= true;
            }else if (change[num[i]-'0']<num[i]-'0'){
                if (a)
                    break;
            }
        }
        return num;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}