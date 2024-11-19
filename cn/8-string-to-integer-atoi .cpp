#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int myAtoi(string s) {
        bool zhengshu= true;
        bool ji= false;
        int jiajian=0;
        long long ans=0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i]==' ') {
                if (ji)
                    break;
                bool quan= true;
                for (int j = 0; j < i; ++j) {
                    if (s[j]!=' '){
                        quan= false;
                        break;
                    }
                }
                if (!quan)
                    break;
            }
            else if (s[i]=='+') {
                if (ji)
                    break;
                if (jiajian>0)
                    return 0;
                jiajian++;
            }
            else if (s[i]=='-') {
                if (ji)
                    break;
                zhengshu = false;
                if (jiajian>0)
                    return 0;
                jiajian++;
            }
            else if (s[i]>='0'&&s[i]<='9'){
                ji= true;
                if (ans>INT_MAX||-ans<INT_MIN)
                    break;
                ans*=10;
                ans+=s[i]-48;
            }else{
                break;
            }
        }
        if (zhengshu&&ans>INT_MAX)
            return INT_MAX;
        else if (!zhengshu&&-ans<INT_MIN)
            return INT_MIN;
        return zhengshu?ans:-ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}