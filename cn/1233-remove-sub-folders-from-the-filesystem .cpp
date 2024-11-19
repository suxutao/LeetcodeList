#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans = {folder[0]};
        for (int i = 1; i < folder.size(); ++i) {
            int m = ans.back().size();
            int n = folder[i].size();
            if (m >= n || !(ans.back() == folder[i].substr(0, m) && folder[i][m] == '/')) {
                ans.emplace_back(folder[i]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<string>v{"/a","/a/b/c","/a/b/d"};
    auto ti=Solution().removeSubfolders(v);
    for (auto & i : ti) {
        cout<<i<<endl;
    }
    return 0;
}