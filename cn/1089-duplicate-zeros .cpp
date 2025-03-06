#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size(),p=0;
        vector<int>v(arr);
        for (int i = 0; i < n; ++i) {
            if (v[p]){
                arr[i]=v[p++];
            }else{
                arr[i++]=0;
                if (i<n)
                    arr[i]=0;
                ++p;
            }
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}