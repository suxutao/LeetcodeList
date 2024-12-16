#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=words.size();
        vector<vector<string>>vs(n);
        vector<int>sum(n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[j]!=groups[i]&&sum[j]>sum[i]){
                    vs[i]=vs[j];
                    sum[i]=sum[j];
                }
            }
            vs[i].push_back(words[i]);
            sum[i]+=words[i].size();
        }
        int pos=ranges::max_element(sum)-sum.begin();
        return vs[pos];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}