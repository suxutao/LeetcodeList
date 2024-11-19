#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSteps(string s, string t) {
        int ans=0;
        unordered_map<char,int>m;
        for (auto &i: s){
            ++m[i];
        }
        for (auto &i: t){
            --m[i];
        }
        for (auto &[a,b]: m){
            ans+= abs(b);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}