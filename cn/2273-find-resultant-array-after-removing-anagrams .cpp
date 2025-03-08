#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(string s1,string s2){
        ranges::sort(s1);
        ranges::sort(s2);
        return s1==s2;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>ans{words[0]};
        for (int i = 1; i < words.size(); ++i) {
            if (!pan(words[i],words[i-1]))
                ans.push_back(words[i]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}