#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int ans=1;
    vector<bool>v;
    void dfs(int n,int pos){
        ans++;
        if (n==pos) {
            return;
        }
        for (int i = 0; i < 10; ++i) {
            if (!v[i]){
                v[i]=true;
                dfs(n,pos+1);
                v[i]=false;
            }
        }
    }
    int countNumbersWithUniqueDigits(int n) {
        if (!n)return 1;
        v.resize(10);
        for (int i = 1; i <= 9; ++i) {
            v[i]=true;
            dfs(n,1);
            v[i]=false;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}