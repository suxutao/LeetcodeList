#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int ans=(ax2-ax1)*(ay2-ay1)+(bx2-bx1)*(by2-by1);
        int chang,kuan;
        if (bx1>=ax2||bx2<=ax1){
            chang=0;
        }else if (ax1<=bx1&&bx1<ax2&&bx2>ax2){
            chang=ax2-bx1;
        }else if (ax1>=bx1&&ax1<bx2&&ax2>bx2){
            chang=bx2-ax1;
        }else{
            chang= min(ax2-ax1,bx2-bx1);
        }
        if (by1>=ay2||by2<=ay1){
            kuan=0;
        }else if (ay1<=by1&&by1<ay2&&by2>ay2){
            kuan=ay2-by1;
        }else if (ay1>=by1&&ay1<by2&&ay2>by2){
            kuan=by2-ay1;
        }else{
            kuan= min(ay2-ay1,by2-by1);
        }
        return ans-chang*kuan;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}