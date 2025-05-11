#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxFreqSum(string s) {
        int arr['z'+1]{},k1=0,k2=0;
        for (int i = 0; i < s.size(); ++i) {
            ++arr[s[i]];
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
                k1= max(k1,arr[i]);
            else
                k2= max(k2,arr[i]);
        }
        return k1+k2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}