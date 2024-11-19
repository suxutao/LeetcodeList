#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr['z'+1]={0};
        for (auto a:s) {
            arr[a]++;
        }for (auto a:t) {
            arr[a]--;
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i])
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}