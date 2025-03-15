#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[10]{};
    bool f(int n){
        int temp[10]{};
        while (n){
            temp[n%10]++;
            n/=10;
        }
        for (int i = 0; i < 10; ++i) {
            if (temp[i]!=arr[i])
                return false;
        }
        return true;
    }
    bool reorderedPowerOf2(int n) {
        int ans=1;
        while (n){
            arr[n%10]++;
            n/=10;
        }
        while (ans<1e9){
            if (f(ans))
                return true;
            ans<<=1;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}