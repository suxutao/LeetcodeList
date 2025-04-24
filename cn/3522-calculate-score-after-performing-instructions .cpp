#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ll = long long;
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        int p=0,n=instructions.size();
        vector<bool>vis(n);
        ll ans=0;
        while (p>=0&&p<n&&!vis[p]){
            vis[p]=1;
            if (instructions[p]=="add"){
                ans+=values[p];
                ++p;
            }else{
                p=p+values[p];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}