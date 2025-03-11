#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int firstUniqChar(string s) {
        int ans=INT_MAX;
        vector<int>arr['z'+1];
        for (int i = 0; i < s.size(); ++i) {
            arr[s[i]].push_back(i);
        }
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i].size()==1)
                ans= min(ans,arr[i][0]);
        }
        return ans==INT_MAX?-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}