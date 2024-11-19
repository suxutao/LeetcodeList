#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>s(brokenLetters.begin(),brokenLetters.end());
        stringstream ss(text);
        string temp;
        int ans=0;
        while (getline(ss,temp,' ')){
            bool b= true;
            for (auto &i: temp){
                if (s.contains(i)){
                    b= false;
                    break;
                }
            }
            if (b) ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}