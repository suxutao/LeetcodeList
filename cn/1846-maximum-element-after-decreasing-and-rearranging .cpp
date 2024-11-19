#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        arr[0]=1;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i]-arr[i-1]>1){
                arr[i]=arr[i-1]+1;
            }
        }
        return arr.back();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}