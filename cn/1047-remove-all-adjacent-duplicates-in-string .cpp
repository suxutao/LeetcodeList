#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string a="";
        for (char c:s) {
            if (a.empty())
                a.push_back(c);
            else if (a.back()==c)
                a.pop_back();
            else
                a.push_back(c);
        }
        return a;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}