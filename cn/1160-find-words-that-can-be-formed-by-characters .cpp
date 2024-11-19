#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>m;
        int ans=0;
        for (auto &item: chars){
            ++m[item];
        }
        for (auto &i: words){
            unordered_map<char,int>t;
            bool jia=true;
            for (auto &item: i){
                ++t[item];
            }
            for (auto &[_,a]: t){
                if (m[_]<t[_]){
                    jia= false;
                    break;
                }
            }
            if (jia) ans+=i.size();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}