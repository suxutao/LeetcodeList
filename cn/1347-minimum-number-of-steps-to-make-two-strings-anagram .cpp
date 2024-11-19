#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m;
    int minSteps(string s, string t) {
        int ans=0;
        for (auto &item: s){
            m[item]++;
        }
        for (auto &item: t){
            m[item]--;
        }
        for (auto &item: m){
            ans+= abs(item.second);
        }
        return ans/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}