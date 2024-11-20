#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<int>ans(queries.size()),v(n-1);
        for (int i = 0; i < n - 1; ++i) {
            v[i]=i+1;
        }
        int cnt=n-1;
        for (int i = 0; i < queries.size(); ++i) {
            int l=queries[i][0],r=queries[i][1];
            if (v[l]&&v[l]<r){
                for (int j = v[l]; j < r; ) {
                    --cnt;
                    int temp=v[j];
                    v[j]=0;
                    j=temp;
                }
                v[l]=r;
            }
            ans[i]=cnt;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}