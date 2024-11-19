#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string ans;
    string compressString(string S) {
        char c=S[0];
        int temp=1;
        for (int i = 1; i < S.size(); ++i) {
            if (S[i]==c){
                temp++;
            }else{
                ans+=c+to_string(temp);
                temp=1;c=S[i];
            }
        }
        ans+=c+to_string(temp);
        return ans.size()>=S.size()?S:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}