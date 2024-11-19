#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int i=1;
        while (memory1>=i||memory2>=i){
            if (memory1>=memory2){
                memory1-=i++;
            }else{
                memory2-=i++;
            }
        }
        return {i,memory1,memory2};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}