#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int nl=languages.size(),ans=nl;
        vector<unordered_set<int>>v(nl+1);
        vector<vector<int>>friends;
        for (int i = 0; i < nl; ++i) {
            v[i+1]=unordered_set<int>(languages[i].begin(),languages[i].end());
        }
        for (auto &f: friendships){
            bool b= false;
            for (int i = 1; i <= n; ++i) {
                if (v[f[0]].contains(i)&&v[f[1]].contains(i)){
                    b= true;
                    break;
                }
            }
            if (!b) friends.push_back(f);
        }
        for (int i = 1; i <= n; ++i) {
            vector<int>t;
            for (auto &f: friends){
                if (!v[f[0]].contains(i)){
                    v[f[0]].insert(i);
                    t.push_back(f[0]);
                }
                if (!v[f[1]].contains(i)){
                    v[f[1]].insert(i);
                    t.push_back(f[1]);
                }
            }
            ans= min<int>(ans,t.size());
            for (int j = 0; j < t.size(); ++j) {
                v[t[j]].erase(i);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}