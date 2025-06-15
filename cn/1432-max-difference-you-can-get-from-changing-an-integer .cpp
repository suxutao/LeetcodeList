#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num),up=s,down=s;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]!='9'){
                for (int j = 0; j < s.size(); ++j) {
                    if (s[j]==s[i]){
                        up[j]='9';
                    }
                }
                break;
            }
        }
        if (s[0]!='1'){
            for (int i = 0; i < s.size(); ++i) {
                if (s[i]==s[0]){
                    down[i]='1';
                }
            }
        }else{
            for (int i = 1; i < s.size(); ++i) {
                if (s[i]!='0'&&s[i]!='1'){
                    for (int j = 0; j < s.size(); ++j) {
                        if (s[i]==s[j]){
                            down[j]='0';
                        }
                    }
                    break;
                }
            }
        }
        return stoi(up)-stoi(down);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}