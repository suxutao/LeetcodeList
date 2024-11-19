#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int MAX=0,count=0;
        for (auto &i: rectangles){
            if (min(i[0],i[1])>MAX){
                count=1;
                MAX= min(i[0],i[1]);
            }else if (min(i[0],i[1])==MAX){
                count++;
            }
        }
        return count;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}