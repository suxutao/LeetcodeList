#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr['z'+1]={0};
        int temp=0;
        for (auto &i: sentence){
            if (arr[i]==0){
                arr[i]=1;
                temp++;
            }
            if (temp==26)
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}