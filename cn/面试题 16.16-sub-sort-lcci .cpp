#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> subSort(vector<int>& array) {
        int n=array.size(),MIN=INT_MAX,MAX=INT_MIN;
        vector<int>ans{-1,-1};
        for (int i = 0; i < n; ++i) {
            if (array[i]>=MAX){
                MAX=array[i];
            }else{
                ans[1]=i;
            }
        }
        for (int i = n - 1; i >= 0; --i) {
            if (array[i]<=MIN){
                MIN=array[i];
            }else{
                ans[0]=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}