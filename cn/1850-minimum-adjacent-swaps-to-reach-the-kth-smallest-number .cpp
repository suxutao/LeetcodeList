#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getMinSwaps(string num, int k) {
        int n=num.size(),ans=0;
        string s=num;
        for (int i = 0; i < k; ++i) {
            next_permutation(s.begin(), s.end());
        }
        for (int i = 0; i < n; ++i) {
            if (s[i]!=num[i]){
                for (int j = i+1; j < n; ++j) {
                    if (num[j]==s[i]){
                        for (int l = j; l > i; --l) {
                            ans++;
                            swap(num[l],num[l-1]);
                        }
                        break;
                    }
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}