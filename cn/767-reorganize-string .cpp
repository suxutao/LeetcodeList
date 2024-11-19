#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reorganizeString(string s) {
        string ans;
        priority_queue<pair<int,char>>q;
        unordered_map<char,int>m;
        for (int i = 0; i < s.size(); ++i) {
            ++m[s[i]];
        }
        for (auto &[a,b]: m){
            q.push({b,a});
        }
        while (!q.empty()){
            if (ans.empty()||ans.back()!=q.top().second){
                ans.push_back(q.top().second);
                auto p=q.top();
                q.pop();
                if (p.first>1)
                    q.emplace(p.first-1,p.second);
            }else{
                auto p=q.top();q.pop();
                if (q.empty())
                    return "";
                auto t=q.top();q.pop();
                ans.push_back(t.second);
                q.push(p);
                if (t.first>1)
                    q.emplace(t.first-1,t.second);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}