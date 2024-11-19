#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumPartition(string s, int k) {
        long long ans=1,val=0;
        for (int i = 0; i < s.size(); ++i) {
            long long temp=val*10+s[i]-'0';
            if (s[i]-'0'>k){
                return -1;
            }
            if (temp>k){
                ++ans;
                val=s[i]-'0';
            }else{
                val=temp;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}