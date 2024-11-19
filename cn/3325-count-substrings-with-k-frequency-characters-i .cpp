#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m;
    bool check(int k){
        for (int i = 'a'; i <= 'z'; ++i) {
            if (m[i]>=k)
                return true;
        }
        return false;
    }
    int numberOfSubstrings(string s, int k) {
        int n=s.size(),r=0,l=0,ans=0;
        while (r<n){
            ++m[s[r]];
            while (check(k)){
                --m[s[l++]];
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