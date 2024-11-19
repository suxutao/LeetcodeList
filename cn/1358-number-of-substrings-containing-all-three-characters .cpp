#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>m;
        int l=0,r=0,ans=0,n=s.size();
        while (r<n){
            ++m[s[r]];
            while (m.size()==3){
                --m[s[l++]];
                if (m[s[l-1]]==0)
                    m.erase(s[l-1]);
            }
            ans+=l;
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}