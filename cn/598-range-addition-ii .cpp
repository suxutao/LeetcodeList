#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if (ops.empty())
            return m*n;
        int a=INT_MAX,b=INT_MAX;
        for (auto &i: ops){
            a= min(a,i[0]);
            b= min(b,i[1]);
        }
        return a*b;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}