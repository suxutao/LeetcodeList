#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if (arr.size()==1)
            return {-1};
        int n=arr.size(),MAX=arr.back();
        arr[n-1]=-1;
        for (int i=n-2;i>=0;--i){
            int temp=arr[i];
            arr[i]=MAX;
            MAX= max(MAX,temp);
        }
        return arr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}