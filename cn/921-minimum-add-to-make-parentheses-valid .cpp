#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0,st=0;
        for (auto &item: s){
            if (item=='(')
                st++;
            else{
                if (st)
                    --st;
                else
                    ans++;
            }
        }
        ans+=st;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}