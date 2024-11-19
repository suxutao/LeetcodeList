#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>v(pref.size());
        v[0]=pref[0];
        for (int i = 1; i < v.size(); ++i) {
            v[i]=pref[i-1]^pref[i];
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}