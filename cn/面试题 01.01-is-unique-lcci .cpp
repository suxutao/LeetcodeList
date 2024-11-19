#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isUnique(string astr) {
        int arr['z'+1]={0};
        for (auto &item: astr){
            if (arr[item]!=0)
                return false;
            arr[item]=1;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}