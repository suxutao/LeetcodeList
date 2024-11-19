#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size(),ans=0;
        vector<int>v(n);
        for (int i = 0; i < n; ++i) {
            for (auto &j: words[i]){
                v[i]|=1<<(j-'a');
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!(v[i]&v[j]))
                    ans= max<int>(ans,words[i].size()*words[j].size());
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}