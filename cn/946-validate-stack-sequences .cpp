#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int p=0;
        for (int i = 0; i < pushed.size(); ++i) {
            s.push(pushed[i]);
            while (!s.empty()&&s.top()==popped[p]){
                s.pop();p++;
            }
        }
        return s.empty();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}