#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    vector<pii>v;
    string smallestString(string s) {
        int l=-1,r;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]!='a'){
                l=i;
                break;
            }
        }
        if (l==-1){
            s.back()='z';
            return s;
        }
        r=l;
        for (int i = l; i < s.size(); ++i) {
            if (s[i]!='a')
                r++;
            else
                break;
        }
        for (int i = l; i < r; ++i) {
            s[i]--;
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}