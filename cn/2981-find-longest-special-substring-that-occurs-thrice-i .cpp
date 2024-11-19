#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    struct com{
        bool operator()(string a,string b)const{
            if (a.length()==b.length())
                return a<b;
            return a.length()>b.length();
        }
    };
    bool f(string s){
        char c=s[0];
        for (int i = 1; i < s.size(); ++i) {
            if (s[i]!=c)
                return false;
        }
        return true;
    }
    map<string,int,com>m;
    int maximumLength(string s) {
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i+1; j <= s.size(); ++j) {
                m[s.substr(i,j-i)]++;
            }
        }
        for (auto &item: m){
            if (item.second>=3&&f(item.first))
                return item.first.length();
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().maximumLength("cccerrrecdcdccedecdcccddeeeddcdcddedccdceeedccecde");
    return 0;
}