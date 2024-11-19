#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n=words.size(),ans=0;
        for (auto &i: words){
            sort(i.begin(), i.end());
            i.erase(unique(i.begin(), i.end()),i.end());
        }
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (words[i]==words[j])
                    ++ans;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}