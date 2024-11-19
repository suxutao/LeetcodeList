#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int p=0,i;
        vector<string>v;
        for (i = 1; i <= n&&p<target.size(); ++i) {
            v.push_back("Push");
            if (target[p]!=i){
                v.push_back("Pop");
            }else{
                ++p;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}