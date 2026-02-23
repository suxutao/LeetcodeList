#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string ans(n,'a');
        for (int i = 0; i < n; ++i) {
            int sum=0;
            auto&s=words[i];
            for (int j = 0; j < s.size(); ++j) {
                sum+=weights[s[j]-'a'];
            }
            sum%=26;
            ans[i]+=25-sum;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}