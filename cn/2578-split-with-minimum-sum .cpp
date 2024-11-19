#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num);
        std::sort(s.begin(), s.end());
        int a=0,b=0,ans=INT_MAX;
        if (s.size()&1){
            for (int i = 0; i < s.size(); i+=2) {
                a*=10;
                a+=s[i]-'0';
                if (i+1<s.size()){
                    b*=10;
                    b+=s[i+1]-'0';
                }
            }
            ans=a+b;
        }else{
            for (int i = 0; i < s.size(); i+=2) {
                a*=10;b*=10;
                a+=s[i]-'0';b+=s[i+1]-'0';
            }
            ans=a+b;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}