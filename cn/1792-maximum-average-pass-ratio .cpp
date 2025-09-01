#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using ad = array<double, 2>;
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        struct com{
            bool operator()(ad&a,ad&b){
                double A=(a[0]+1)/(a[1]+1)-a[0]/a[1];
                double B=(b[0]+1)/(b[1]+1)-b[0]/b[1];
                return A<B;
            }
        };
        int n=classes.size();
        double ans=0;
        priority_queue<ad,vector<ad>,com>q;
        for (int i = 0; i < n; ++i) {
            q.push({(double)classes[i][0],(double)classes[i][1]});
        }
        for (int i = 0; i < extraStudents; ++i) {
            auto [x,y]=q.top();
            q.pop();
            q.push({x+1,y+1});
        }
        while (!q.empty()){
            ans+=q.top()[0]/q.top()[1];
            q.pop();
        }
        return ans/n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,2},{3,5},{2,2}};
    Solution().maxAverageRatio(v,2);
    return 0;
}