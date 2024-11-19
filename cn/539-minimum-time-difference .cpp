#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int cha(pii&a,pii&b){
        return (a.first-b.first)*60+a.second-b.second;
    }
    int findMinDifference(vector<string>& timePoints) {
        std::sort(timePoints.begin(), timePoints.end());
        vector<pii>v(timePoints.size());
        for (int i = 0; i < v.size(); ++i) {
            string temp=timePoints[i];
            v[i]={stoi(temp.substr(0,2)), stoi(temp.substr(3,2))};
        }
        pii first={v.front().first+24,v.front().second};
        int ans= cha(first,v.back());
        for (int i = 0; i < timePoints.size()-1; ++i) {
            ans= min(ans, cha(v[i+1],v[i]));
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}