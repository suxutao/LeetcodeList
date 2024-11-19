#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int nextGreaterElement(int n) {
        if (n<10)
            return -1;
        string s=to_string(n);
        int a=s.length()-2;
        while((a+1)&&s[a]>=s[a+1])a--;
        if (a==-1){
            return -1;
        }
        int b=s.length()-1;
        while (b>a&&s[b]<=s[a])b--;
        swap(s[a],s[b]);
        reverse(s.begin()+a+1,s.end());
        long long ll= stoll(s);
        if (ll>INT_MAX)
            return -1;
        else
            return ll;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}