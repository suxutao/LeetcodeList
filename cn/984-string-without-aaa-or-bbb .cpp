#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans;
        char f=' ';int cnt=0;
        int sum=a+b;
        while (ans.size()!=sum){
            if (a>=b){
                if (cnt==2&&f=='a'){
                    ans.push_back('b');
                    --b;
                }else {
                    ans.push_back('a');
                    --a;
                }
            }else{
                if (cnt==2&&f=='b'){
                    ans.push_back('a');
                    --a;
                }else {
                    ans.push_back('b');
                    --b;
                }
            }
            if (f!=ans.back())
                cnt=1;
            else
                cnt++;
            f=ans.back();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}