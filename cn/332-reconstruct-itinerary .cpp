#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<string,priority_queue<string,vector<string>,greater<>>>m;
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for (auto &i: tickets){
            m[i[0]].push(i[1]);
        }
        vector<string>ans;
        function<void(string&)> dfs=[&](string&s){
            while (!m[s].empty()){
                string temp=m[s].top();
                m[s].pop();
                dfs(temp);
            }
            ans.push_back(s);
        };
        string s="JFK";
        dfs(s);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}