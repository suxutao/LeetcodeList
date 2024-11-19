#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;
        for (auto &i: patterns){
            if (word.find(i)!=string::npos)
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}