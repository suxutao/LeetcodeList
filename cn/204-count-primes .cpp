#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[5000005]={};
    int countPrimes(int n) {
        if (n==0||n==1)
            return 0;
        int ans=0;
        for (int i = 2; i < n; ++i) {
            if (arr[i])
                continue;
            ans++;
            for (int j = 1; j*i <n; ++j) {
                arr[j*i]=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}