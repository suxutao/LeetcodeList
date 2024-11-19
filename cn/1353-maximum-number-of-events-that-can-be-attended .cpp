#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        priority_queue<int,vector<int>,greater<>>q;
        sort(events.begin(), events.end());
        int ans=0,r=events[0][0],i=0;
        while (r<=events.back()[1]+10){
            while (!q.empty()&&q.top()<r){
                q.pop();
            }
            while (i<events.size()&&events[i][0]<=r){
                q.push(events[i++][1]);
            }
            if (!q.empty()){
                ans++;
                q.pop();
            }
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}