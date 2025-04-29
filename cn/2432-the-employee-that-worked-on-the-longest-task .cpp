#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int pre=0,ans=0,mx=0;
        for (auto &i: logs){
            if (i[1]-pre>mx){
                mx=i[1]-pre;
                ans=i[0];
            }else if (i[1]-pre==mx){
                ans= min(ans,i[0]);
            }
            pre=i[1];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{0,3},{2,5},{0,9},{1,15}};
    Solution().hardestWorker(2,v);
    return 0;
}