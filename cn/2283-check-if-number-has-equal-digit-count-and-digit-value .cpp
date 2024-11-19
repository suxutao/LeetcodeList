#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool digitCount(string num) {
        int arr[10]={0};
        for (auto &item: num){
            arr[item-'0']++;
        }
        for (int i = 0; i < num.size(); ++i) {
            if (num[i]-'0'!=arr[i])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}