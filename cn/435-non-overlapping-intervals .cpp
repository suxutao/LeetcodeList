#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.size()==1)
            return 0;
        sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
            if (a[1]==b[1])
                return a[0]<b[0];
            return a[1]<b[1];
        });
        int ans=0,a=intervals[0][1];
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0]<a){
                ans++;
            }else{
                a=intervals[i][1];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}