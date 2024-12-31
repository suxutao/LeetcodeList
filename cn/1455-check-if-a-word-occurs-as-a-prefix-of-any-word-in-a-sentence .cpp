#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int cnt=1,n=searchWord.size();
        string temp;
        stringstream ss(sentence);
        while (getline(ss,temp,' ')){
            if (temp.size()>=n&&temp.substr(0,n)==searchWord){
                return cnt;
            }
            cnt++;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}