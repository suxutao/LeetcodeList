#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        ranges::sort(intervals,[&](vector<int>&a,vector<int>&b){
            if (a[0]==b[0])
                return a[1]>b[1];
            return a[0]<b[0];
        });
        int ans=intervals.size(),r=intervals[0][1];
        intervals.erase(intervals.begin());
        for (auto &i: intervals){
            if (i[1]<=r){
                --ans;
            }
            r= max(r,i[1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}