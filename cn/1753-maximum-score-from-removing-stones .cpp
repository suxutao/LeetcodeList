#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int>v={a,b,c};
        sort(v.begin(), v.end());
        if (v[2]>=v[0]+v[1])
            return v[0]+v[1];
        else
            return (v[0]+v[1]-v[2])/2+v[2];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}