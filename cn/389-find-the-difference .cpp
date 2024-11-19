#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr['z'+1]={0};
        int arr2['z'+1]={0};
        for (int i = 0; i < s.size(); ++i) {
            arr[s[i]]++;
        }
        for (int i = 0; i < t.size(); ++i) {
            arr2[t[i]]++;
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i]!=arr2[i])
                return i;
        }
        return 'a';
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}