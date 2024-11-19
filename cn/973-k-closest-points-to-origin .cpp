#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>v;
        priority_queue<int,vector<int>,greater<>>q;
        map<int,vector<vector<int>>>m;
        for (auto &i: points){
            int temp=i[0]*i[0]+i[1]*i[1];
            q.push(temp);
            m[temp].push_back({i[0],i[1]});
        }
        for (int i = 0; v.size() < k; ++i) {
            int fr=q.top();q.pop();
            v.insert(v.end(),m[fr].begin(),m[fr].end());
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}