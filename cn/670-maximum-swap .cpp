#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int MAX,pos,j;
        bool huan;
        for (j = 0; j < s.length(); ++j) {
            MAX=s[j],pos=j;
            huan= false;
            for (int i = s.length()-1; i > j; --i) {
                if (s[i]>MAX){
                    MAX=s[i];
                    pos=i;
                    huan = true;
                }
            }
            if (huan)
                break;
        }
        if (huan)
            swap(s[j],s[pos]);
        return stoi(s);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}