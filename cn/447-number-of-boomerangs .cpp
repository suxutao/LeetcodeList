#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        unordered_map<int,int>m;
        int ans=0,temp;
        for (int i = 0; i < points.size(); ++i) {
            m.clear();
            for (int j = 0; j < points.size(); ++j) {
                temp=(points[j][0]-points[i][0])*(points[j][0]-points[i][0])+(points[j][1]-points[i][1])*(points[j][1]-points[i][1]);
                m[temp]++;
            }
            for (auto j=m.begin();j!=m.end();j++){
                if (j->second>=2)
                    ans+=j->second*(j->second-1);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}