#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool panduan(int n){
        int arr[11]={0};
        while(n){
            int a=n%10;
            if (a==0)
                return false;
            arr[a]++;
            n/=10;
        }
        for (int i = 1; i < 10; ++i) {
            if (arr[i]!=i&&arr[i]!=0)
                return false;
        }
        return true;
    }
    int nextBeautifulNumber(int n) {
        do {
            n++;
        }while(!panduan(n));
        return n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    cout<<Solution().nextBeautifulNumber(1000)<<endl;
    return 0;
}