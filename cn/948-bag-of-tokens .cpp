#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if (tokens.empty())
            return 0;
        int ans=0,l=0,r=tokens.size()-1;
        sort(tokens.begin(), tokens.end());
        if (power<tokens[0])
            return 0;
        while (l<=r){
            if (l<r-1&&power<tokens[l]&&ans){
                power+=tokens[r--];
                --ans;
            }else if (l>=r-1&&power<tokens[l]){
                break;
            }
            while (l<=r&&power>=tokens[l]){
                power-=tokens[l++];
                ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={100,200,300,400};
    Solution().bagOfTokensScore(v,200);
    return 0;
}