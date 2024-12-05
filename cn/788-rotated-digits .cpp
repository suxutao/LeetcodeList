#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>v;
    bool f(int n){
        bool ans=0;
        while (n){
            if (!v.contains(n%10))
                return false;
            ans=ans|(v[n%10]!=n%10);
            n/=10;
        }
        return ans;
    }
    int rotatedDigits(int n) {
        int ans=0;
        v[0]=0;v[1]=1;v[8]=8;
        v[2]=5;v[5]=2;
        v[9]=6;v[6]=9;
        for (int i = 1; i <= n; ++i) {
            ans+= f(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}