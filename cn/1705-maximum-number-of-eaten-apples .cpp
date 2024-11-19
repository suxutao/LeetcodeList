#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii = pair<int, int>;
    int eatenApples(vector<int>& apples, vector<int>& days) {
        priority_queue<pii,vector<pii>,greater<>>q;
        int day=0,ans=0;
        do{
            if (day<apples.size()&&apples[day])
                q.emplace(day + days[day], apples[day]);
            while (!q.empty()&&q.top().first<=day){
                q.pop();
            }
            if (!q.empty()){
                auto[a,b]=q.top();
                q.pop();
                if (b>1){
                    q.emplace(a,b-1);
                }
                ++ans;
            }
            day++;
        }while (!q.empty()||day<apples.size());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>a{1,2,3,5,2},b{3,2,1,4,2};
    Solution().eatenApples(a,b);
    return 0;
}