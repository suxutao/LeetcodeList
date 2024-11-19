#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>vs(searchWord.size());
        string s;
        sort(products.begin(), products.end());
        for (int i = 0; i < searchWord.size(); ++i) {
            s.push_back(searchWord[i]);
            auto t=lower_bound(products.begin(), products.end(),s);
            for (auto j = t; j != products.end()&&j<t+3; ++j) {
                if (j->substr(0,s.size())==s){
                    vs[i].push_back(*j);
                }else{
                    break;
                }
            }
        }
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}