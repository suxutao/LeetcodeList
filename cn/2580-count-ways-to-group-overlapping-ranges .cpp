#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    const int N=1e9+7;
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(), ranges.end());
        long long ans=0;int right=ranges[0][1];
        for (int i = 0; i < ranges.size(); ++i) {
            if (ranges[i][0]<=right){
                right= max(right,ranges[i][1]);
            }else{
                ans++;
                right=ranges[i][1];
            }
        }
        ++ans;
        long long temp=1,di=2;
        while (ans){
            if (ans&1){
                temp=(temp*di)%N;
            }
            di=(di*di)%N;
            ans>>=1;
        }
        return temp;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}