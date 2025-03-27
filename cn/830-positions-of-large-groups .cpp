#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int cnt=1,n=s.size();
        vector<vector<int>>ans;
        s.push_back(' ');
        for (int i = 1; i <= n; ++i) {
            if (s[i]==s[i-1]){
                cnt++;
            }else{
                if (cnt>=3){
                    ans.push_back({i-cnt,i-1});
                }
                cnt=1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}