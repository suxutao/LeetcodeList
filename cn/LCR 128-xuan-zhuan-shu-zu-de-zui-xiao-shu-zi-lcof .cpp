#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int inventoryManagement(vector<int>& stock) {
        int n=stock.size(),l=0,r=n-1;
        while (l<r){
            int mid=(l+r)>>1;
            if (stock[mid]>stock[r]){
                l=mid+1;
            }else if (stock[mid]<stock[r]){
                r=mid;
            }else{
                --r;
            }
        }
        return stock[l];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}