#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>vv;
        if (intervals.size()==1)
            return intervals;
        sort(intervals.begin(),intervals.end(),[&](vector<int>a,vector<int>b){
            return a[0]<b[0];
        });
        vv.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0]<=vv.back()[1])
                vv.back()[1]=max(intervals[i][1],vv.back()[1]);
            else
                vv.push_back(intervals[i]);
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}