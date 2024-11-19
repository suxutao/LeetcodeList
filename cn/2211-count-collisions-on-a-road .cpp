#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countCollisions(string directions) {
        stack<char>s;
        int ans=0;
        for (int i = 0; i < directions.size(); ++i) {
            if (directions[i]=='R'){
                s.push('R');
            }else if (directions[i]=='L'){
                if (!s.empty()&&s.top()!='L'){
                    if (s.top()=='R'){
                        while (!s.empty()&&s.top()=='R'){
                            ++ans;
                            s.pop();
                        }
                        ++ans;
                        s.push('S');
                    }else{
                        ++ans;
                    }
                }
            }else{
                while (!s.empty()&&s.top()=='R'){
                    s.pop();
                    ++ans;
                }
                s.push('S');
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}