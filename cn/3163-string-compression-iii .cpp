#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string compressedString(string word) {
        string ans;
        int cnt=1;
        char c=word[0];
        for (int i = 1; i < word.size(); ++i) {
            if (c==word[i]){
                cnt++;
            }else{
                while (cnt>9){
                    ans.push_back('9');
                    ans.push_back(c);
                    cnt-=9;
                }
                ans.push_back(cnt+'0');
                ans.push_back(c);
                cnt=1;
                c=word[i];
            }
        }
        while (cnt>9){
            ans.push_back('9');
            ans.push_back(c);
            cnt-=9;
        }
        ans.push_back(cnt+'0');
        ans.push_back(c);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}