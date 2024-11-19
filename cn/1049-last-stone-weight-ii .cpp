#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0;
        for (int i = 0; i < stones.size(); ++i) {
            sum+=stones[i];
        }
        int size=sum>>1;
        int arr[stones.size()+1][size+1];
        for (int i = 0; i <= size; ++i) {
            arr[0][i]=0;
        }
        for (int i = 0; i <= stones.size(); ++i) {
            arr[i][0]=0;
        }
        for (int i = 1; i <= stones.size(); ++i) {
            for (int j = 1; j <= size; ++j) {
                if (j<stones[i-1])
                    arr[i][j]=arr[i-1][j];
                else
                    arr[i][j]= max(arr[i-1][j],stones[i-1]+arr[i-1][j-stones[i-1]]);
            }
        }
        return sum-2*arr[stones.size()][size];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}