#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans=0;
        for (int i = 0; i < arr.size() - 2; ++i) {
            for (int j = i+1; j < arr.size() - 1; ++j) {
                for (int k = j+1; k < arr.size(); ++k) {
                    if (abs(arr[i]-arr[j])<=a&&abs(arr[k]-arr[j])<=b&&abs(arr[i]-arr[k])<=c)
                        ans++;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}