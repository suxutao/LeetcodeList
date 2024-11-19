#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>G[105];
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>>ispre(numCourses,vector<bool>(numCourses));
        vector<int>in(numCourses);
        for (auto &i: prerequisites){
            in[i[1]]++;
            G[i[0]].push_back(i[1]);
        }
        queue<int>q;
        for (int i = 0; i < numCourses; ++i) {
            if (in[i]==0)
                q.push(i);
        }
        while (!q.empty()){
            int t=q.front();q.pop();
            for (auto &i: G[t]){
                ispre[t][i]=1;
                for (int j = 0; j < numCourses; ++j) {
                    ispre[j][i]=ispre[j][t]|ispre[j][i];
                }
                --in[i];
                if (in[i]==0)
                    q.push(i);
            }
        }
        vector<bool>ans;
        for (auto &i: queries){
            ans.push_back(ispre[i[0]][i[1]]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}