#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>in(numCourses,0);
        vector<vector<int>>edge(numCourses);
        queue<int>q;
        vector<int>ans;
        for (const auto &i: prerequisites){
            edge[i[1]].push_back(i[0]);
            in[i[0]]++;
        }
        for (int i = 0; i < in.size(); ++i) {
            if (in[i]==0){
                q.push(i);
            }
        }
        while (!q.empty()){
            int a=q.front();
            ans.push_back(a);
            for (const auto &item: edge[a]){
                in[item]--;
                if (in[item]==0)
                    q.push(item);
            }
            q.pop();
        }
        if (ans.size()==numCourses)
            return ans;
        else
            return {};
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}