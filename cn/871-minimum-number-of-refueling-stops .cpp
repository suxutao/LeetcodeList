#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if (startFuel>=target)
            return 0;
        int p=0,n=stations.size(),x=startFuel,ans=0;
        priority_queue<int>q;
        while (p<n&&stations[p][0]<=x){
            q.push(stations[p++][1]);
        }
        while (!q.empty()){
            x+=q.top();q.pop();
            while (p<n&&stations[p][0]<=x){
                q.push(stations[p++][1]);
            }
            ++ans;
            if (x>=target)
                return ans;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}