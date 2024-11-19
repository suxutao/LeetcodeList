#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size()<k)
            return false;
        unordered_map<char,int>m;
        int sum=0;
        for (int i = 0; i < s.size(); ++i) {
            m[s[i]]++;
        }
        for (auto &[a,b]: m){
            sum+=b&1;
        }
        return sum<=k;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}