#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>q;
        for (int i = 0; i < 3; ++i) {
            if (amount[i])
                q.push(amount[i]);
        }
        if (q.empty())
            return 0;
        else if (q.size()==1)
            return q.top();
        int ans=0,a,b;
        while (q.size()>2){
            a=q.top();q.pop();
            b=q.top();q.pop();
            ++ans;--a;--b;
            if (a)q.push(a);
            if (b)q.push(b);
        }
        a=q.top();q.pop();
        ans+= max(a,q.top());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}