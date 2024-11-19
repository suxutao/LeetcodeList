#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool isValid(string str) {
        int cnt = 0;
        for (char&c : str) {
            if (c == '(') {
                cnt++;
            } else if (c == ')') {
                cnt--;
                if (cnt < 0)
                    return false;
            }
        }
        return cnt==0;
    }
    vector<string> ans;
    unordered_set<string> u;
    vector<string> removeInvalidParentheses(string s) {
        u.insert(s);
        while (true) {
            for (auto & str : u) {
                if (isValid(str))
                    ans.emplace_back(str);
            }
            if (ans.size() > 0)
                return ans;
            unordered_set<string>n;
            for (auto & str : u) {
                for (int i = 0; i < str.size(); i++) {
                    if (i > 0 && str[i] == str[i - 1])
                        continue;
                    if (str[i] == '(' || str[i] == ')') {
                        n.insert(str.substr(0, i) + str.substr(i + 1, str.size()));
                    }
                }
            }
            u = n;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}