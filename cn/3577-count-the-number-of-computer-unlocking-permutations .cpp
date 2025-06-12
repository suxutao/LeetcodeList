#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int countPermutations(vector<int>& complexity) {
        long long n=complexity.size(),ans=1;
        for (int i = 1; i < n; ++i) {
            if (complexity[i]<=complexity[0])
                return 0;
        }
        for (int i = 1; i < n; ++i) {
            ans=ans*i%N;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}