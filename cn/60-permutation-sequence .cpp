#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string getPermutation(int n, int k) {
        string ans;
        for (int i = 1; i <= n; ++i) {
            ans.push_back(i+'0');
        }
        for (int i = 0; i < k-1; ++i) {
            int pos=-1;
            for (int j = n-2; j >= 0; --j) {
                if (ans[j+1]>ans[j]){
                    pos=j;
                    break;
                }
            }
            if (pos>=0){
                for (int j = n - 1; j >= 0; --j) {
                    if (ans[j]>ans[pos]){
                        swap(ans[pos],ans[j]);
                        break;
                    }
                }
            }
            reverse(ans.begin()+pos+1, ans.end());
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}