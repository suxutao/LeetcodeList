#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(string&s,string&n){
        multiset<char>t;
        for (int i = 0; i < s.size(); ++i) {
            if (islower(s[i])|| isupper(s[i])){
                t.insert(tolower(s[i]));
            }
        }
        for (int i = 0; i < n.size(); ++i) {
            if (t.contains(n[i]))
                t.extract(n[i]);
        }
        return t.empty();
    }
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string ans(20,' ');
        for (auto &item: words){
            if (pan(licensePlate,item)&&item.size()<ans.size()){
                ans=item;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}