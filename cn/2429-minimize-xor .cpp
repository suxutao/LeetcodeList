#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int n2=__builtin_popcount(num2),n1=__builtin_popcount(num1),ans=num1;
        if (n1==n2)
            return num1;
        else if (n1<n2){
            for (int i=0,cnt=0;i<32&&cnt<n2-n1;++i) {
                if (((num1>>i)&1)==0){
                    ++cnt;
                    ans+=1<<i;
                }
            }
        }else{
            for (int i=0,cnt=0;i<32&&cnt<n1-n2;++i) {
                if ((num1>>i)&1){
                    ++cnt;
                    ans-=1<<i;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}