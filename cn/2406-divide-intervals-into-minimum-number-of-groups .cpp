#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),[](auto&a,auto&b){
           return a[0]<b[0];
        });
        priority_queue<int,vector<int>,greater<>>q;
        int n=intervals.size();
        for (int i = 0; i < n; ++i) {
            if (!q.empty()&&q.top()<intervals[i][0])
                q.pop();
            q.emplace(intervals[i][1]);
        }
        return q.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}