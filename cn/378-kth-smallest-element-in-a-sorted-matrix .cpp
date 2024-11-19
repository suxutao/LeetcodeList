#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m=matrix.size(),n=matrix[0].size();
        priority_queue<pii,vector<pii>,greater<>>q;
        vector<int>v(m,1);
        for (int i = 0; i < m; ++i) {
            q.push({matrix[i][0],i});
        }
        for (int i = 0; i < k-1; ++i) {
            auto [a,b]=q.top();q.pop();
            if (v[b]<n)
                q.push({matrix[b][v[b]++],b});
        }
        return q.top().first;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}