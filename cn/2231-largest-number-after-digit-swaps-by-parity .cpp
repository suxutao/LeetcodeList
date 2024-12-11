#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        for (int i = 0; i < s.size(); ++i) {
            if (s[i]&1){
                for (int j = i+1; j < s.size(); ++j) {
                    if (s[j]&1&&s[j]>s[i]){
                        swap(s[j],s[i]);
                    }
                }
            }else{
                for (int j = i+1; j < s.size(); ++j) {
                    if (!(s[j]&1)&&s[j]>s[i]){
                        swap(s[j],s[i]);
                    }
                }
            }
        }
        return stoi(s);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}