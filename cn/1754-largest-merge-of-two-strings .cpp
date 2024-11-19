#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans;
        while (!word1.empty()&&!word2.empty()){
            if (word1>word2){
                ans.push_back(word1[0]);
                word1.erase(word1.begin());
            }else{
                ans.push_back(word2[0]);
                word2.erase(word2.begin());
            }
        }
        if (word1.empty())
            ans+=word2;
        else
            ans+=word1;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}