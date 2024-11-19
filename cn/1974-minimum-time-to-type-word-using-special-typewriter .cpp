#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minTimeToType(string word) {
        int ans=word.size();char a='a';
        for (int i = 0; i < word.size(); ++i) {
            ans+= min(abs(word[i]-a),26-abs(word[i]-a));
            a=word[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}