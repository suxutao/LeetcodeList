#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n=arr.size(),l=0,r=n-1;
        while (l<r){
            int mid=(l+r)>>1;
            if (arr[l]<arr[mid]){
                if (arr[l]<=target&&target<=arr[mid]){
                    r=mid;
                }else{
                    l=mid+1;
                }
            }else if (arr[l]>arr[mid]){
                if (arr[l]<=target||target<=arr[mid]){
                    r=mid;
                }else{
                    l=mid+1;
                }
            }else{
                if (arr[l]!=target){
                    l++;
                }else{
                    r=l;
                }
            }
        }
        return arr[l]==target;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}