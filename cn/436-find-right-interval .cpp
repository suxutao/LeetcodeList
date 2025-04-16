#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<int>ans;
        vector<array<int,3>>v(n);
        for (int i = 0; i < n; ++i) {
            v[i]={intervals[i][0],intervals[i][1],i};
        }
        ranges::sort(v);
        for (auto &i: intervals){
            auto it= lower_bound(v.begin(), v.end(),array<int,3>{i[1],INT_MIN});
            if (it!=v.end())
                ans.push_back((*it)[2]);
            else
                ans.push_back(-1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}