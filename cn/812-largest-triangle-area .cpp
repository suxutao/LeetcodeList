#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double f(vector<int>&v1,vector<int>&v2,vector<int>&v3){
        return abs(v1[0]*v2[1]+v2[0]*v3[1]+v3[0]*v1[1]-v1[0]*v3[1]-v2[0]*v1[1]-v3[0]*v2[1])/2.;
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans=0;
        int n=points.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                for (int k = j+1; k < n; ++k) {
                    ans= max(ans, f(points[i],points[j],points[k]));
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}