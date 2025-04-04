#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size(),cnt2=0,cnt1=0,i=startIndex;
        while (target!=words[i]){
            i=(i+1)%n;
            cnt2++;
            if (cnt2>n)
                return -1;
        }
        i=startIndex;
        while (target!=words[i]){
            i=(i-1+n)%n;
            cnt1++;
        }
        return min(cnt2,cnt1);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}