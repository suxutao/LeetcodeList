#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minMaxDifference(int num) {
        string n=to_string(num),m=n;
        for (int i = 0; i < n.size(); ++i) {
            if (n[i]!='9'){
                char temp=n[i];
                for (int j = 0; j < n.size(); ++j) {
                    if (n[j]==temp){
                        n[j]='9';
                    }
                }
                break;
            }
        }
        char temp=m[0];
        for (int i = 0; i < m.size(); ++i) {
            if (m[i]==temp)
                m[i]='0';
        }
        return stoi(n)-stoi(m);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}