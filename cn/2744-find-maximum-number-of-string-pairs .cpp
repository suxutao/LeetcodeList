#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool pan(string&s){
        char c=s[0];
        for (int i = 1; i < s.length(); ++i) {
            if (c!=s[i])
                return true;
        }
        return false;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int>m;
        vector<string>v(words.begin(),words.end());
        int ans=0;
        for (auto &item: v){
            reverse(item.begin(), item.end());
        }
        for (int i = 0; i < words.size(); ++i) {
            if (pan(words[i]))
                m[words[i]]=1;
        }
        for (int i = 0; i < words.size(); ++i) {
            if (m[v[i]])
                ans++;
        }
        return ans/2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}