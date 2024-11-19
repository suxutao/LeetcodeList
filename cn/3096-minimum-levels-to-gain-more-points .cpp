#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        if(possible[0]==0)
            possible[0]=-1;
        for (int i = 1; i < possible.size(); ++i) {
            if (possible[i]){
                possible[i]=1+possible[i-1];
            }else{
                possible[i]=possible[i-1]-1;
            }
        }
        for (int i = 0; i < possible.size()-1; ++i) {
            if (possible.back()-possible[i]<possible[i])
                return i+1;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}