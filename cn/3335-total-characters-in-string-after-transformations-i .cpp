#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    using ll = long long;
    int lengthAfterTransformations(string s, int t) {
        int n=s.size();
        vector<ll>arr(26),p(26);
        for (int i = 0; i < n; ++i) {
            arr[s[i]-'a']++;
        }
        for (int i = 0; i < t; ++i) {
            p[0]=arr[25];
            p[1]=(arr[0]+arr[25])%N;
            for (int j = 2; j < 26; ++j) {
                p[j]=arr[j-1];
            }
            arr=p;
        }
        return accumulate(arr.begin(), arr.end(),0ll)%N;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}