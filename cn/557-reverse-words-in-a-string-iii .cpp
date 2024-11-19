#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp,ans;
        while (getline(ss,temp,' ')){
            std::reverse(temp.begin(), temp.end());
            ans+=temp;
            ans.push_back(' ');
        }
        ans.pop_back();
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}