#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int>v(word.size());
        long long num=0;
        for (int i = 0; i < word.size(); ++i) {
            num=(num*10+word[i]-'0')%m;
            if (num==0)
                v[i]=1;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}