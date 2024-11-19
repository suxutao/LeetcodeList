#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numTrees(int n) {
        if (n==1)
            return 1;
        int arr[20]={0};
        arr[0]=1;arr[1]=1;
        for (int i = 2; i < n + 1; ++i) {
            for (int j = 1; j <= i; ++j) {
                arr[i]+=arr[j-1]*arr[i-j];
            }
        }
        return arr[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}