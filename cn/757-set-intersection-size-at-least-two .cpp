#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int n=intervals.size(),r=-1,r2=-1,ans=0;
        sort(intervals.begin(), intervals.end(),[&](vector<int>&a,vector<int>&b){
            if (a[1]==b[1])
                return a[0]<b[0];
            return a[1]<b[1];
        });
        for (int i = 0; i < n; ++i) {
            if (intervals[i][0]>r){
                ans+=2;
                r=intervals[i][1];
                r2=intervals[i][1]-1;
            }else if (intervals[i][0]>r2){
                ans++;
                if (r==intervals[i][1]){
                    r2=r-1;
                }else{
                    r2=r;
                    r=intervals[i][1];
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,3},{3,7},{5,7},{7,8}};
    Solution().intersectionSizeTwo(v);
    return 0;
}