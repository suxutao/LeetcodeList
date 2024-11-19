#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s=="")
            return 0;
        int arr[CHAR_MAX]={0};
        int ans=0,left=0,right=0;
        while (right<s.length()){
            while (right<s.length()&&arr[s[right]]==0) {
                arr[s[right]]=1;
                right++;
            }
            ans= max(ans,right-left);
            arr[s[left++]]=0;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}