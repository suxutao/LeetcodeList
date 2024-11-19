#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set<string>s(words.begin(),words.end());
        for (auto &i: words){
            for (int j = 1; j < i.size(); ++j) {
                s.erase(i.substr(j));
            }
        }
        int ans=0;
        for (auto &i: s)
            ans+=i.size()+1;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}