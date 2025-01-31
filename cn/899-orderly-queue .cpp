#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if (k==1){
            int n=s.size();
            string ans(n,'z');
            for (int i = 0; i < n; ++i) {
                string temp=s.substr(i)+s.substr(0,i);
                ans= min(ans,temp);
            }
            return ans;
        }else{
            std::sort(s.begin(), s.end());
            return s;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}