#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Graph {
public:
    int n;
    vector<vector<int>>ju;
    Graph(int n, vector<vector<int>>& edges) {
        ju.assign(n,vector<int>(n,INT_MAX/3));
        for (int i = 0; i < n; ++i) {
            ju[i][i]=0;
        }
        Graph::n=n;
        for (auto &i: edges){
            ju[i[0]][i[1]]=i[2];
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    ju[j][k]= min(ju[j][k],ju[j][i]+ju[i][k]);
                }
            }
        }
    }
    
    void addEdge(vector<int> edge) {
        vector<int>&i=edge;
        if (i[2]<=ju[i[0]][i[1]]){
            ju[i[0]][i[1]]=i[2];
        }else{
            return;
        }
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                ju[j][k]= min(ju[j][k],ju[j][i[0]]+ju[i[0]][i[1]]+ju[i[1]][k]);
            }
        }
    }
    
    int shortestPath(int node1, int node2) {
        if(ju[node1][node2]>2e8)
            return -1;
        return ju[node1][node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}