#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string rev(string&a){
        return string(1,a[1])+string(1,a[0]);
    }
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>m;
        int ans=0;
        for (auto &i: words){
            auto j= rev(i);
            if (m[j]){
                m[j]--;
                ans+=4;
            }else{
                m[i]++;
            }
        }
        for (auto &[a,_]: m){
            if (_&&a[0]==a[1]){
                ans+=2;
                break;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}