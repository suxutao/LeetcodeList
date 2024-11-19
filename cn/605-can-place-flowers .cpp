#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cnt=0,t=1;
        flowerbed.push_back(0);
        for (int i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i]==0){
                ++t;
                if (t==3){
                    ++cnt;
                    t=1;
                }
            }else{
                t=0;
            }
        }
        return cnt>=n;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}