#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> getValidT9Words(string num, vector<string>& words) {
        vector<string>ans;
        int ch[26]{2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
        for (auto &i: words){
            bool b= true;
            for (int j = 0; j < i.size(); ++j) {
                if (ch[i[j]-'a']!=num[j]-'0'){
                    b= false;
                    break;
                }
            }
            if (b) ans.push_back(i);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}