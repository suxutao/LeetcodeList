#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.size()==1)
            return 1;
        sort(points.begin(), points.end(),[](vector<int>&a,vector<int>&b){
            return a[0]<b[0];
        });
        int right=points[0][1],ans=1;
        for (int i = 1; i < points.size(); ++i) {
            if (points[i][0]<=right){
                right= min(points[i][1],right);
            }else{
                ans++;
                right=points[i][1];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}