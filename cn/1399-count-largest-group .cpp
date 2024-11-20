#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int shu(int n){
        int ans=0;
        while (n){
            ans+=n%10;
            n/=10;
        }
        return ans;
    }
    int countLargestGroup(int n) {
        int ans=0,MAX=0;
        unordered_map<int,int>m;
        for (int i = 1; i <= n; ++i) {
            ++m[shu(i)];
        }
        for (auto &[_,a]: m){
            if (a>MAX){
                MAX=a;
                ans=1;
            }else if (a==MAX){
                ans++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}