#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string s;int len=-1;
        set<string>se;
        unordered_map<int,string>m;
        for (int i = 1; i <= str1.size(); ++i) {
            if (str1.size()%i)
                continue;
            s=str1.substr(0,i);
            bool pan=true;
            for (int j = i; j < str1.size(); j+=i) {
                if (s!=str1.substr(j,i)){
                    pan= false;
                    break;
                }
            }
            if (pan){
                se.insert(s);
                m[s.size()]=s;
            }
        }
        if (se.empty())
            return "";
        for (auto &item: se){
            bool pan= true;
            if (str2.size()%item.size())
                continue;
            for (int i = 0; i < str2.size(); i+=item.size()) {
                if (str2.substr(i,item.size())!=item) {
                    pan= false;
                    break;
                }
            }
            if (pan)
                len= max<int>(len,item.size());
        }
        return len==-1?"":m[len];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}