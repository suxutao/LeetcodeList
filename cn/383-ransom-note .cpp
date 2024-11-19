#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr['z'+1]={0};
        for (char a:magazine) {
            arr[a]++;
        }
        for (char a:ransomNote) {
            arr[a]--;
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i]<0)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}