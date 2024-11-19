#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool f(int n){
        string s=to_string(n);
        if (s.size()&1)
            return false;
        int sum=0;
        for (int i = 0; i < s.size() / 2; ++i) {
            sum+=s[i];
        }
        for (int i = s.size() / 2; i < s.size(); ++i) {
            sum-=s[i];
        }
        return sum==0;
    }
    int countSymmetricIntegers(int low, int high) {
        int ans=0;
        for (int i = low; i <= high; ++i) {
            ans+= f(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}