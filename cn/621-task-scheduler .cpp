#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>m;
        int MAX=0,cnt=0,sz=tasks.size();
        for (int i = 0; i < sz; ++i) {
            ++m[tasks[i]];
        }
        for (auto &[a,b]: m){
            if (b>MAX){
                MAX=b;
                cnt=1;
            }else if (b==MAX){
                cnt++;
            }
        }
        return max(sz,(n+1)*(MAX-1)+cnt);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}