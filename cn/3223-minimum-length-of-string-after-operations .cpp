#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>m;
        int ans=0;
        for (auto &item: s){
            ++m[item];
        }
        for (auto &[_,a]: m){
            while (a>=3)
                a=a/3+a%3;
            ans+=a;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}