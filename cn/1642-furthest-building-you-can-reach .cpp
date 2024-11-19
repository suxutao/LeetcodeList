#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int l=0,r=heights.size(),mid;
        auto check=[&](int x){
            priority_queue<int>q;
            int sum=0;
            for (int i = 1; i <= x; ++i) {
                if (heights[i]>heights[i-1])
                    q.push(heights[i]-heights[i-1]);
            }
            for (int i = 0;!q.empty()&&i<ladders; ++i) {
                q.pop();
            }
            while (!q.empty()){
                sum+=q.top();
                q.pop();
            }
            return sum<=bricks;
        };
        while (l<r){
            mid=(l+r)>>1;
            if (check(mid))
                l=mid+1;
            else
                r=mid;
        }
        return l-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}