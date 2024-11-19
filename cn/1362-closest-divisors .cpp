#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> closestDivisors(int num) {
        int MIN=INT_MAX;
        vector<int>v(2);
        for (int i = 1; i <= sqrt(num+1); ++i) {
            if ((num+1)%i==0){
                if ((num+1)/i-i<MIN){
                    MIN=(num+1)/i-i;
                    v[0]=i;v[1]=(num+1)/i;
                }
            }
        }
        for (int i = 1; i <= sqrt(num+2); ++i) {
            if ((num+2)%i==0){
                if ((num+2)/i-i<MIN){
                    MIN=(num+2)/i-i;
                    v[0]=i;v[1]=(num+2)/i;
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}