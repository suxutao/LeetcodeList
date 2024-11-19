#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if (intervals.size()==0)
            return {newInterval};
        vector<vector<int>>vv;
        bool pan= true;
        if (intervals[0][0]>newInterval[1]){
            vv.push_back(newInterval);
            for (int i = 0; i < intervals.size(); ++i) {
                vv.push_back(intervals[i]);
            }
        }else {
            for (int i = 0; i < intervals.size(); ++i) {
                if (pan && intervals[i][1] >= newInterval[0]) {
                    int j = i;
                    while (j < intervals.size() && intervals[j][0] <= newInterval[1])j++;
                    j--;
                    int a = min(intervals[i][0], newInterval[0]);
                    int b = max(intervals[j][1], newInterval[1]);
                    vv.push_back({a, b});
                    i = j;
                    pan = false;
                } else {
                    vv.push_back(intervals[i]);
                }
            }
            if (pan)
                vv.push_back(newInterval);
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}