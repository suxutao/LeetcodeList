#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v(n+1);
        for (int i = 1; i <= n; ++i) {
            int temp=i,cnt=0;
            while (temp){
                cnt++;
                temp=temp&(temp-1);
            }
            v[i]=cnt;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}