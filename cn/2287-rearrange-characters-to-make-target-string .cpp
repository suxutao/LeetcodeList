#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        int ans=INT_MAX;
        unordered_map<char,int>m1,m2;
        for (auto &item: s)
            ++m1[item];
        for (auto &item: target)
            ++m2[item];
        for (auto &[a,b]: m2){
            ans= min(ans,m1[a]/b);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}