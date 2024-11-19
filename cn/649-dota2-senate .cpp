#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string predictPartyVictory(string senate) {
        int a=-1;
        queue<int>R,D;
        for (int i=0;i<senate.length();i++){
            if (senate[i]=='R') {
                R.push(i);
            }
            else {
                D.push(i);
            }
        }
        while(!R.empty()&&!D.empty()){
            a++;
            if (a>=senate.length())
                a-=senate.length();
            while (R.front()!=a&&D.front()!=a){
                a++;
                if (a>=senate.length())
                    a-=senate.length();
            }
            if (a==R.front()) {
                D.pop();
                R.push(R.front());
                R.pop();
            }
            else {
                R.pop();
                D.push(D.front());
                D.pop();
            }
        }
        if (D.empty())
            return "Radiant";
        else
            return "Dire";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().predictPartyVictory("DRRD");
    return 0;
}