#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string str_sort(string&s){
        string s1,s2,ans;
        for (int i = 0; i < s.size(); ++i) {
            if (i&1){
                s1.push_back(s[i]);
            }else{
                s2.push_back(s[i]);
            }
        }
        std::sort(s1.begin(), s1.end());
        std::sort(s2.begin(), s2.end());
        for (int i = 0; i < s.size(); ++i) {
            if (i&1){
                ans.push_back(s1[i/2]);
            }else{
                ans.push_back(s2[i/2]);
            }
        }
        return ans;
    }
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_set<string>s;
        for (auto &item: words){
            s.insert(str_sort(item));
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}