#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int l=0,r=0,n=answerKey.size(),ans=0,cnt=0;
        while (r<n){
            cnt+=answerKey[r]=='T';
            while (cnt>k){
                cnt-=answerKey[l++]=='T';
            }
            ans= max(ans,r-l+1);
            ++r;
        }
        l=r=cnt=0;
        while (r<n){
            cnt+=answerKey[r]=='F';
            while (cnt>k){
                cnt-=answerKey[l++]=='F';
            }
            ans= max(ans,r-l+1);
            ++r;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}