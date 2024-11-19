#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool Zuo(string&s){
        int l=0,r=s.length()-1;
        bool zuo= false;
        while (l<=r){
            if (s[l]!=s[r]){
                if (!zuo) {
                    l++;
                    zuo= true;
                }else{
                    return false;
                }
            }else{
                l++;r--;
            }
        }
        return true;
    }
    bool You(string&s){
        int l=0,r=s.length()-1;
        bool zuo= false;
        while (l<=r){
            if (s[l]!=s[r]){
                if (!zuo) {
                    r--;
                    zuo= true;
                }else{
                    return false;
                }
            }else{
                l++;r--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        if (s.length()==1)
            return true;
        return Zuo(s)|| You(s);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}