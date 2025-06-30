#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> partitionString(string s) {
        int n=s.size();
        vector<string>ans;
        unordered_set<string>m;
        for (int i = 0; i < n; ++i) {
            string temp;
            for (int j = i; j < n; ++j) {
                temp.push_back(s[j]);
                if (!m.contains(temp)){
                    m.insert(temp);
                    ans.push_back(temp);
                    i=j;
                    break;
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