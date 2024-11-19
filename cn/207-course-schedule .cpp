#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    vector<vector<int>> edges;
    vector<int> in;
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        edges.resize(numCourses);
        in.resize(numCourses);
        for (auto& i: prerequisites) {
            edges[i[1]].push_back(i[0]);
            ++in[i[0]];
        }
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (in[i] == 0) {
                q.push(i);
            }
        }
        int visited = 0;
        while (!q.empty()) {
            ++visited;
            int u = q.front();
            q.pop();
            for (int v: edges[u]) {
                --in[v];
                if (in[v] == 0) {
                    q.push(v);
                }
            }
        }
        return visited == numCourses;
    }
};

//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}