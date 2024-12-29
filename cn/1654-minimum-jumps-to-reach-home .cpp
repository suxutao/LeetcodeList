#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        int cnt=0,up;
        if (a>b){
            up=x+b;
        }else if (a==b){
            up=x;
        }else{
            up=max(ranges::max(forbidden)+a+b,x);
        }
        unordered_map<int,bool>vis;
        unordered_set<int>s(forbidden.begin(),forbidden.end());
        queue<pair<int,bool>>q;
        q.push({0,0});vis[0]=1;
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                auto[t,back]=q.front();
                q.pop();
                if (t==x){
                    return cnt;
                }
                if (t>up)
                    continue;
                if (!back&&t-b>0&&!vis[t-b]&&!s.contains(t-b)){
                    vis[t-b]=1;
                    q.push({t-b,1});
                }
                if (!vis[t+a]&&!s.contains(t+a)){
                    vis[t+a]=1;
                    q.push({t+a,0});
                }
            }
            cnt++;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}