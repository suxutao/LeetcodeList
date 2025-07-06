#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n=code.size();
        vector<pair<string,string>>p;
        vector<string>ans;
        for (int i = 0; i < n; ++i) {
            if (isActive[i]&&code[i]!=""){
                if (businessLine[i]=="electronics"||businessLine[i]=="grocery"||businessLine[i]=="pharmacy"||businessLine[i]=="restaurant"){
                    bool b=true;
                    for (int j = 0; j < code[i].size(); ++j) {
                        if (!isdigit(code[i][j])&&!islower(code[i][j])&&!isupper(code[i][j])&&code[i][j]!='_'){
                            b= false;
                            break;
                        }
                    }
                    if (b)
                        p.push_back({businessLine[i],code[i]});
                }
            }
        }
        ranges::sort(p);
        for (int i = 0; i < p.size(); ++i) {
            ans.push_back(p[i].second);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}