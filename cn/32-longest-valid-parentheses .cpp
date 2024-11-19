#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestValidParentheses(string s) {
        if (s=="")
            return 0;
        int ans=0,left=0,right=0,l=0,r=0;
        while (r<s.size()){
            if (s[r]=='(')
                left++;
            else
                right++;
            if (left<right){
                left=right=0;
                l=r;
            }else if (left==right){
                ans= max(ans,r-l+1);
            }
            r++;
        }
        l=r=s.length()-1;
        left=right=0;
        while (l>=0){
            if (s[l]==')')
                right++;
            else
                left++;
            if (left>right){
                left=right=0;
                r=l;
            }else if (left==right){
                ans= max(ans,r-l+1);
            }
            l--;
        }
        return ans&1?ans-1:ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}