#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int arr[10]{},ans=0,mn=100;
        while (n){
            ++arr[n%10];
            n/=10;
        }
        for (int i = 0; i < 10; ++i) {
            if (arr[i]&&arr[i]<mn){
                mn=arr[i];
                ans=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}