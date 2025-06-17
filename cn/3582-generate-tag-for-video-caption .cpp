#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string generateTag(string caption) {
        int cnt=1,pos=0;
        for (int i = 0; i < caption.size(); ++i) {
            if (caption[i]!=' '){
                pos=i;
                break;
            }
        }
        string ans="#",t;
        stringstream ss(caption.substr(pos));
        while (getline(ss,t,' ')){
            if (cnt!=1) {
                t[0] = toupper(t[0]);
                for (int i = 1; i < t.size(); ++i) {
                    t[i]=tolower(t[i]);
                }
            }else{
                for (int i = 0; i < t.size(); ++i) {
                    t[i]=tolower(t[i]);
                }
            }
            ans+=t;
            ++cnt;
            if (ans.size()>=100)
                break;
        }
        return ans.size()>100?ans.substr(0,100):ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}