#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        unordered_set<string>s;
        vector<string>ans;
        std::sort(words.begin(), words.end(),[&](string&a,string&b){
            return a.size()>b.size();
        });
        for (auto &i: words){
            if (s.contains(i)) {
                ans.push_back(i);
                continue;
            }
            for (int j = 0; j < i.size(); ++j) {
                string temp;
                for (int k = j; k < i.size(); ++k) {
                    temp.push_back(i[k]);
                    s.insert(temp);
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}