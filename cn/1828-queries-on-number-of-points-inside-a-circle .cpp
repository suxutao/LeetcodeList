#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>v(queries.size());
        for (int i = 0; i < queries.size(); ++i) {
            int t=0,x=queries[i][0],y=queries[i][1],r=queries[i][2];
            for (int j = 0; j < points.size(); ++j) {
                int X=points[j][0],Y=points[j][1];
                if ((X-x)*(X-x)+(Y-y)*(Y-y)<=r*r)
                    t++;
            }
            v[i]=t;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}