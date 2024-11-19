#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool check(int i,string s,int h,int pos=0){
        if (h==i&&pos==s.size())
            return true;
        if (pos==s.size())
            return false;
        int sum=0;
        for (int j = pos; j < s.size(); ++j) {
            sum=sum*10+s[j]-48;
            if (sum+h>i)
                break;
            if (check(i,s,sum+h,j+1))
                return true;
        }
        return false;
    }
    int punishmentNumber(int n) {
        int ans=0;
        for (int i = 1; i <= n; ++i) {
            if (check(i,to_string(i*i),0))
                ans+=i*i;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}