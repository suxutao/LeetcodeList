#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDifference(string s) {
        int arr[26]{},n=s.size(),mx=0,mn=n+1;
        for (int i = 0; i < n; ++i) {
            ++arr[s[i]-'a'];
        }
        for (int i = 0; i < 26; ++i) {
            if (arr[i]&1)
                mx= max(mx,arr[i]);
            else if (arr[i])
                mn= min(mn,arr[i]);
        }
        return mx-mn;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}