#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    map<pair<string,int>,vector<string>>m;
    unordered_map<string,pair<string,int>>fa;
    vector<vector<string>>v;
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        sort(accounts.begin(), accounts.end());
        for (int i = 0; i < accounts.size(); ++i) {
            auto acc=accounts[i];
            pair<string,int>si;
            for (int j = 1; j < acc.size(); ++j) {
                if (fa[acc[j]]!=(pair<string,int>){"",0}){
                    si=fa[acc[j]];
                    break;
                }
            }
            if (si!=(pair<string,int>){"",0}){
                for (int j = 1; j < acc.size(); ++j) {
                    fa[acc[j]]=si;
                    m[si].push_back(acc[j]);
                }
            }else{
                auto pa= make_pair(acc[0],i);
                for (int j = 1; j < acc.size(); ++j) {
                    fa[acc[j]]={acc[0],i};
                    m[pa].push_back(acc[j]);
                }
            }
        }
        for (auto &i: m){
            v.push_back({i.first.first});
            set<string>s(i.second.begin(),i.second.end());
            v.back().insert(v.back().end(),s.begin(),s.end());
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<string>>v={{"John", "johnsmith@mail.com", "john00@mail.com"}, {"John", "johnnybravo@mail.com"}, {"John", "johnsmith@mail.com", "john_newyork@mail.com"}, {"Mary", "mary@mail.com"}};
    Solution().accountsMerge(v);
    return 0;
}