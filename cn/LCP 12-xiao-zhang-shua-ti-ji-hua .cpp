#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minTime(vector<int>& time, int m) {
        int l=0,r=accumulate(time.begin(), time.end(),0)+1,mid;
        auto check=[&](int x){
            int sum=0,temp=1;
            priority_queue<int,vector<int>,greater<>>q;
            for (auto &i: time){
                q.push(i);
                if (q.size()>1){
                    if (sum+q.top()>x){
                        ++temp;
                        q.pop();q.pop();
                        q.push(i);
                        sum=0;
                    }else{
                        sum+=q.top();
                        q.pop();
                    }
                }
            }
            return temp>m;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}