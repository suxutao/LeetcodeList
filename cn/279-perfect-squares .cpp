#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int numSquares(int n) {
        if (n==1)
            return 1;
        int arr[101]={0};
        vector<int>v(n+1,0);
        for (int i = 1; i <= 100; ++i) {
            arr[i]=i*i;
        }
        v[1]=1;
        for (int i = 0; i <= 100; ++i) {
            for (int j = 0; j <= n; ++j) {
                if (arr[i]==j) {
                    v[j]=1;
                }
                else if (arr[i]<j&&v[j-arr[i]]!=0) {
                    if (v[j]==0)
                        v[j] = 1 + v[j - arr[i]];
                    else
                        v[j]= min(v[j],1 + v[j - arr[i]]);
                }
            }
        }
        return v[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}