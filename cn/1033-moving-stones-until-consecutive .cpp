#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int>ans(2),v(3);
        v[0]=a;v[1]=b;v[2]=c;
        sort(v.begin(), v.end());
        a=v[0];b=v[1];c=v[2];
        if (b-a==2||c-b==2)
            ans[0]=1;
        else{
            ans[0]+=b>a+1;
            ans[0]+=c>b+1;
        }
        ans[1]+=b-a-1;
        ans[1]+=c-b-1;
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}