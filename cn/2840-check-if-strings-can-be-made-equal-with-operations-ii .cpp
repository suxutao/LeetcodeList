#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int>m1,m2;
        for (int i = 0; i < s1.size(); ++i) {
            if (i&1){
                m1[s1[i]]++;
                m1[s2[i]]--;
            }else{
                m2[s1[i]]++;
                m2[s2[i]]--;
            }
        }
        for (auto &[_,a]: m1){
            if (a)
                return false;
        }
        for (auto &[_,a]: m2){
            if (a)
                return false;
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}