#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int edgeScore(vector<int>& edges) {
        long long n=edges.size(),ans=0,MAX=0;
        vector<long long>v(n);
        for (int i = 0; i < n; ++i) {
            v[edges[i]]+=i;
        }
        for (int i = 0; i < n; ++i) {
            if (v[i]>MAX){
                MAX=v[i];
                ans=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}