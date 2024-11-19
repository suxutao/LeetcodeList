#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>s;
        for (auto &i: emails){
            string temp;
            bool b=false;
            for (int j = 0; j < i.size(); ++j) {
                if (i[j]=='@'){
                    temp+=i.substr(j);
                    break;
                }else if (i[j]=='+'){
                    b=true;
                }else{
                    if (!b&&i[j]!='.')
                        temp.push_back(i[j]);
                }
            }
            s.insert(temp);
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}