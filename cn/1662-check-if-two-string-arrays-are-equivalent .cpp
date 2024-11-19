#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int one=0,two=0,p1=0,p2=0;
        while (one<word1.size()&&two<word2.size()){
            if (word1[one][p1]==word2[two][p2]){
                p1++;p2++;
                if (p1==word1[one].size()){
                    p1=0;
                    one++;
                }
                if (p2==word2[two].size()){
                    p2=0;
                    two++;
                }
            }else{
                return false;
            }
        }
        return one==word1.size()&&two==word2.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}