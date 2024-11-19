#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        unordered_set<int>s;
        int ans=INT_MAX;
        for (int i = 0; i < fronts.size(); ++i) {
            if (fronts[i]==backs[i])
                s.insert(backs[i]);
        }
        for (int i:fronts) {
            if (!s.count(i))
                ans= min(ans,i);
        }
        for (int i:backs) {
            if (!s.count(i))
                ans= min(ans,i);
        }
        return ans%INT_MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}