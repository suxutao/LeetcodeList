#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        if (cardPoints.size()==1)
            return cardPoints[0];
        int arr1[k+1],arr2[k+1],MAX=INT_MIN;
        arr1[0]=arr2[0]=0;
        arr1[1]=cardPoints[0];
        arr2[1]=cardPoints[cardPoints.size()-1];
        for (int i = 2; i <= k; ++i) {
            arr1[i]=arr1[i-1]+cardPoints[i-1];
        }
        for (int i = 2; i <= k; ++i) {
            arr2[i]=arr2[i-1]+cardPoints[cardPoints.size()-i];
        }
        for (int i = 0; i <= k; ++i) {
            MAX= max(MAX,arr1[i]+arr2[k-i]);
        }
        return MAX;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}