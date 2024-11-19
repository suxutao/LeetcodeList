#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string maxValue(string n, int x) {
        x+='0';
        if (n[0]=='-'){
            n.push_back('9'+1);
            for (int i = 1; i < n.size(); ++i) {
                if (x<n[i]){
                    n.insert(n.begin()+i,x);
                    break;
                }
            }
        }else{
            n.push_back('0'-1);
            for (int i = 0; i < n.size(); ++i) {
                if (x>n[i]){
                    n.insert(n.begin()+i,x);
                    break;
                }
            }
        }
        n.pop_back();
        return n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}