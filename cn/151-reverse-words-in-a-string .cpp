#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reverseWords(string s) {
        if (s.length()==1)
            return s;
        int a=0,b,c=0,d=0;
        vector<int>v;
        for (b = 0; b < s.length(); ++b) {
            if (s[b]==' '&&s[b+1]==' ')
                continue;
            else{
                if (s[b]==' ')
                    v.push_back(a);
                s[a++]=s[b];
            }
        }
        s.resize(a);
        if (!v.empty()){
            for (int i = 0; i < v.size()-1; ++i) {
                reverse(s.begin()+v[i]+1,s.begin()+v[i+1]);
            }
            reverse(s.begin(),s.begin()+v[0]);
            reverse(s.begin()+v.back()+1,s.end());
            reverse(s.begin(), s.end());
        }
        if(s[a-1]==' ')d=1;
        if(s[0]==' ')c=1;
        if (c||d)
            s=s.substr(c,a-c-d);
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().reverseWords("   fffff ff gg ee");
    return 0;
}