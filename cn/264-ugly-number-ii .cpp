#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<int,int>m;
    priority_queue<int,vector<int>,greater<>>q;
    int nthUglyNumber(int n) {
        int ans;
        q.push(1);
        for (int i = 0; i < n; ++i) {
            ans=q.top();q.pop();
            if (ans<INT_MAX/2&&!m[ans*2]){
                m[ans*2]=1;
                q.emplace(ans*2);
            }if (ans<INT_MAX/3&&!m[ans*3]){
                m[ans*3]=1;
                q.emplace(ans*3);
            }if (ans<INT_MAX/5&&!m[ans*5]){
                m[ans*5]=1;
                q.emplace(ans*5);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}