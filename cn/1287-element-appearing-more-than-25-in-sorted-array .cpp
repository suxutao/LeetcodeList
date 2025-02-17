#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size(),cnt=1;
        for (int i = 1; i < n; ++i) {
            if (arr[i]==arr[i-1]){
                cnt++;
                if (cnt*4>n)
                    return arr[i];
            }else{
                cnt=1;
            }
        }
        return arr[0];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}