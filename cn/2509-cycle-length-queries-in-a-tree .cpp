#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> cycleLengthQueries(int n, vector<vector<int>>& queries) {
        vector<int>v(queries.size());
        for (int i = 0; i < v.size(); ++i) {
            int a=queries[i][0],b=queries[i][1],t=0;
            while (a!=b){
                a>b?a>>=1:b>>=1;
                ++t;
            }
            v[i]=t+1;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}