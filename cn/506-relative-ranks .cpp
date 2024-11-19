#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii=pair<int,int>;
    vector<pii>v;
    vector<string>ans;
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        string s[3]={"Gold Medal","Silver Medal","Bronze Medal"};
        v.resize(n);ans.resize(n);
        for (int i = 0; i < n; ++i) {
            v.emplace_back(score[i],i);
        }
        std::sort(v.begin(), v.end(),greater<>());
        for (int i = 0; i < min(3, n); ++i) {
            ans[v[i].second]=s[i];
        }
        for (int i = 3; i < n; ++i) {
            ans[v[i].second]= to_string(i+1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}