#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumDistance(vector<vector<int>>& points) {
        multiset<int>x,y;
        for (auto &i: points){
            x.insert(i[0]+i[1]);
            y.insert(i[1]-i[0]);
        }
        int ans=INT_MAX;
        for (auto &i: points){
            x.erase(x.find(i[0]+i[1]));
            y.erase(y.find(i[1]-i[0]));
            ans= min(ans, max(*x.rbegin()-*x.begin(),*y.rbegin()-*y.begin()));
            x.insert(i[0]+i[1]);
            y.insert(i[1]-i[0]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}