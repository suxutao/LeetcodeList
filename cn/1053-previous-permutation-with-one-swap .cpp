#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int pos=-1;
        for (int i = arr.size()-2; i >= 0; --i) {
            if (arr[i]>arr[i+1]){
                pos=i;
                break;
            }
        }
        if (~pos){
            for (int i = arr.size()-1; i > pos; --i) {
                if (arr[pos]>arr[i]&&arr[i-1]!=arr[i]){
                    swap(arr[pos],arr[i]);
                    break;
                }
            }
        }
        return arr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}