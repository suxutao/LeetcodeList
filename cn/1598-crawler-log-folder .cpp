#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt=0;
        for (auto &i: logs){
            if (i[0]=='.'){
                if (i[1]=='.'&&cnt)
                    cnt--;
            }else{
                cnt++;
            }
        }
        return cnt;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}