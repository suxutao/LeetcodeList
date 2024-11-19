#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        vector<pair<int,int>>v(positions.size());
        vector<pair<int,int>>ans;vector<int>t;
        unordered_map<int,int>p;
        for (int i = 0; i < v.size(); ++i) {
            v[i]={positions[i],healths[i]*(directions[i]=='L'?-1:1)};
            p[positions[i]]=i;
        }
        sort(v.begin(), v.end());
        for (auto &[pos,health]: v){
            if (ans.empty()||ans.back().first<0||health>0){
                ans.push_back({health,pos});
            }else{
                bool jia=true;
                while (!ans.empty()&&ans.back().first>0){
                    if (ans.back().first==-health){
                        ans.pop_back();
                        jia= false;
                        break;
                    }else if (ans.back().first<-health){
                        ++health;
                        ans.pop_back();
                    }else{
                        ans.back().first--;
                        jia= false;
                        break;
                    }
                }
                if (jia)
                    ans.push_back({health,pos});
            }
        }
        t.resize(v.size(),-1);
        for (int i = 0; i < ans.size(); ++i) {
            t[p[ans[i].second]]= abs(ans[i].first);
        }
        t.erase(remove(t.begin(), t.end(),-1),t.end());
        return t;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}