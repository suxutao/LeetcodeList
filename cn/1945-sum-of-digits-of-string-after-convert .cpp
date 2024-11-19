#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string int2int(string a){
        int ans=0;
        for (int i = 0; i < a.size(); ++i) {
            ans+=a[i]-'0';
        }
        return to_string(ans);
    }
    string str2str(string s){
        string ans;
        for (int i = 0; i < s.size(); ++i) {
            ans+=to_string(int(s[i]-'a'+1));
        }
        return ans;
    }
    int getLucky(string s, int k) {
        string ans= str2str(s);
        for (int i = 0; i < k; ++i) {
            ans= int2int(ans);
        }
        return stoi(ans);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}