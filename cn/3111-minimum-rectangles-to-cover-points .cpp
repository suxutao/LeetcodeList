#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        int ans=0,l;
        set<int>s;
        for (int i = 0; i < points.size(); ++i) {
            s.insert(points[i][0]);
        }
        vector<int>v(s.begin(),s.end());
        l=v[0];
        for (int i = 1; i < v.size(); ++i) {
            if (v[i]-l>w){
                l=v[i];
                ans++;
            }
        }
        return ans+1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}