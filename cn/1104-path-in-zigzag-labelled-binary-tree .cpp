#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    vector<int> pathInZigZagTree(int label) {
        int n= log2(label)+1;
        v.resize(n);
        if (!(n&1)){
            for (int i = n-1; i >= 0; --i) {
                if (i&1){
                    v[i]=label;
                }else{
                    v[i]=(1<<i)+(1<<(i+1))-1-label;
                }
                label>>=1;
            }
        }else{
            for (int i = n-1; i >= 0; --i) {
                if (!(i&1)){
                    v[i]=label;
                }else{
                    v[i]=(1<<i)+(1<<(i+1))-1-label;
                }
                label>>=1;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}