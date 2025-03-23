#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n=s.size(),left=0,kong1=0,kong2=0,right=0;
        if (n&1)
            return false;
        for (int i = 0; i < n; ++i) {
            if (locked[i]=='1'){
                if (s[i]=='('){
                    left++;
                }else{
                    if (left){
                        --left;
                    }else if (kong1){
                        --kong1;
                    }else{
                        return false;
                    }
                }
            }else{
                ++kong1;
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (locked[i]=='1'){
                if (s[i]==')'){
                    right++;
                }else{
                    if (right){
                        --right;
                    }else if (kong2){
                        --kong2;
                    }else{
                        return false;
                    }
                }
            }else{
                ++kong2;
            }
        }
        return left<=kong1&&right<=kong2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}