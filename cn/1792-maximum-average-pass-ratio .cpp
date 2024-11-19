#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<double, double>;
    struct com{
        bool operator()(const pii&a,const pii&b){
            double A=(a.first+1)/(a.second+1)-a.first/a.second;
            double B=(b.first+1)/(b.second+1)-b.first/b.second;
            return A<B;
        }
    };
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pii,vector<pii>,com>q;
        double ans=0;
        for (auto & classe : classes) {
            q.emplace(classe[0],classe[1]);
        }
        for (int i = 0; i < extraStudents; ++i) {
            auto[a,b]=q.top();
            q.pop();
            q.push({a+1,b+1});
        }
        while (!q.empty()){
            auto[a,b]=q.top();
            ans+=a/b;
            q.pop();
        }
        return ans/classes.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{1,2},{3,5},{2,2}};
    Solution().maxAverageRatio(v,2);
    return 0;
}