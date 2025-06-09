#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<int>v(n);
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<>>q;
        priority_queue<int,vector<int>,greater<>>q2;
        ranges::sort(meetings);
        for (int i = 0; i < n; ++i) {
            q2.push(i);
        }
        for (auto &i: meetings){
            while (!q.empty()&&q.top().first<=i[0]){
                q2.push(q.top().second);
                q.pop();
            }
            if (q2.empty()){
                auto [x,y]=q.top();
                q.pop();
                v[y]++;
                q.emplace(i[1]-i[0]+x,y);
            }else{
                int y=q2.top();
                q2.pop();
                v[y]++;
                q.emplace(i[1],y);
            }
        }
        int ans=0,mx=0;
        for (int i = 0; i < n; ++i) {
            if (v[i]>mx){
                ans=i;
                mx=v[i];
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}