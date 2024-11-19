#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int l=0,r=plants.size()-1,a=capacityA,b=capacityB,ans=0;
        while (l<=r){
            if (l==r){
                if (max(capacityA,capacityB)<plants[l])
                    ans++;
                break;
            }
            if (capacityA>=plants[l]){
                capacityA-=plants[l];
            }else{
                capacityA=a-plants[l];
                ans++;
            }
            if (capacityB>=plants[r]){
                capacityB-=plants[r];
            }else{
                capacityB=b-plants[r];
                ans++;
            }
            l++;r--;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}