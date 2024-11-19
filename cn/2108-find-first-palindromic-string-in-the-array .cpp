#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool hui(string&s){
        int l=0,r=s.size()-1;
        while (l<r){
            if (s[l]!=s[r])
                return false;
            l++;r--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        string s;
        for (int i = 0; i < words.size(); ++i) {
            if (hui(words[i])){
                s=words[i];
                break;
            }
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}