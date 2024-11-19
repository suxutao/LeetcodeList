#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string pathEncryption(string path) {
        for (int i = 0; i < path.size(); ++i) {
            if (path[i]=='.')
                path[i]=' ';
        }
        return path;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}