#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        vector<string>v;
        unordered_map<string,int>m;
        int n=watchedVideos.size();
        vector<bool>vis(n);vis[id]=1;
        queue<int>q;q.push(id);
        for (int i = 0; i < level&&!q.empty(); ++i) {
            int sz=q.size();
            for (int j = 0; j < sz; ++j) {
                int t=q.front();q.pop();
                for (auto &fi: friends[t]){
                    if (!vis[fi]){
                        vis[fi]=1;
                        q.push(fi);
                    }
                }
            }
        }
        while (!q.empty()){
            int t=q.front();q.pop();
            for (auto &item: watchedVideos[t]){
                m[item]++;
            }
        }
        for (auto &item: m){
            v.push_back(item.first);
        }
        sort(v.begin(), v.end(),[&](string&a,string&b){
            if (m[a]==m[b])
                return a<b;
            return m[a]<m[b];
        });
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}