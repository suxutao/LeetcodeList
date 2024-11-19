#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minLength(string s) {
        bool wan= true;
        while (wan){
            wan= false;
            for (int i = s.size()-1; i > 0; --i) {
                string temp=s.substr(i-1,2);
                if (temp=="AB"||temp=="CD"){
                    wan= true;
                    s.erase(i-1,2);
                }
            }
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}