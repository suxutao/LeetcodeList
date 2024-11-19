#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    static bool ss(const char&c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string reverseVowels(string s) {
        if (s.length()==1)
            return s;
        int l=0,r=s.length()-1;
        while (l<=r){
            while(l<r&&!ss(s[l]))l++;
            while(l<r&&!ss(s[r]))r--;
            swap(s[l],s[r]);
            l++;r--;
        }
        return s;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    Solution().reverseVowels("hello");
    return 0;
}