#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        int nq=queries.size(),cnt=1;
        unordered_map<int,int>score;
        vector<bool>ans(nq);
        score[0]=1;
        for (int i = 1; i < n; ++i) {
            if (nums[i]-nums[i-1]>maxDiff){
                score[i]=++cnt;
            }else{
                score[i]=cnt;
            }
        }
        for (int i = 0; i < nq; ++i) {
            ans[i]=score[queries[i][0]]==score[queries[i][1]];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}