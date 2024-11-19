#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>v;
        for (auto &i: strs){
            string t=i;
            sort(t.begin(), t.end());
            m[t].push_back(i);
        }
        for (auto &[_,a]: m){
            v.push_back(a);
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}