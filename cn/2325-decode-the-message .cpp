#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m;
    string decodeMessage(string key, string message) {
        char k='a';m[' ']=' ';
        for (char i:key) {
            if (!m[i])
                m[i]=k++;
        }
        for (char&i:message) {
            i=m[i];
        }
        return message;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}