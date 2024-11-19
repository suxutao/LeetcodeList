#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string interpret(string command) {
        string ans;
        for (int i = 0; i < command.size(); ++i) {
            if (command[i]=='G')
                ans.push_back('G');
            else if (command[i]=='('&&command[i+1]==')') {
                i++;
                ans.push_back('o');
            }
            else if (command[i]=='('&&command[i+1]=='a'){
                i+=3;
                ans.append("al");
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}