#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        int cnt=0;
        string ans;
        unordered_map<string,int>m;
        for (auto &item: responses){
            unordered_set<string>s(item.begin(),item.end());
            for (auto &i: s)
                ++m[i];
        }
        for (auto &[_,a]: m){
            if (a>cnt){
                cnt=a;
                ans=_;
            }else if (a==cnt){
                ans= min(ans,_);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}