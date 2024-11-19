#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int ans=0,r=0;
        sort(meetings.begin(), meetings.end());
        for (auto &i: meetings){
            if (i[0]>r){
                ans+=i[0]-r-1;
            }
            r= max(r,i[1]);
        }
        ans+=max(0,days-r);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{2,4},{1,3}};
    Solution().countDays(6,v);
    return 0;
}