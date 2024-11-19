#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkPowersOfThree(int n) {
        list<int>l;
        int a=1;
        while (a<=n){
            l.push_front(a);
            a*=3;
        }
        for (auto &i: l){
            if (n>=i){
                n-=i;
            }
            if (n==0)
                return true;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}