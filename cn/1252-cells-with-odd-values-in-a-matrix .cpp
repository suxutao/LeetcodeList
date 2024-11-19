#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int a=0,b=0;
        vector<int>row(m),col(n);
        for (auto &item: indices){
            row[item[0]]++;
            col[item[1]]++;
        }
        for (int i = 0; i < m; ++i) {
            if (row[i]&1)
                a++;
        }
        for (int i = 0; i < n; ++i) {
            if (col[i]&1)
                b++;
        }
        int ans=a*(n-b)+(m-a)*b;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}