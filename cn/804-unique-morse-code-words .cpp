#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string>s;
        string str[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for (auto &i: words){
            string temp;
            for (auto &j: i){
                temp+=str[j-'a'];
            }
            s.insert(temp);
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}