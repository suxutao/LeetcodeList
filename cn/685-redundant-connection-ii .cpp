#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int fa[1005],n;
    void init(){
        for (int i = 1; i <= n; ++i) {
            fa[i]=i;
        }
    }
    int find_set(int x){
        return x==fa[x]?x:fa[x]= find_set(fa[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b)
            fa[b]=a;
    }
    bool same(int a,int b){
        a= find_set(a);
        b= find_set(b);
        return a==b;
    }
    vector<int> removeEdge(vector<vector<int>>&e){
        init();
        for (auto &i: e){
            if (same(i[0],i[1]))
                return i;
            merge_set(i[0],i[1]);
        }
        return {};
    }
    bool istree(vector<vector<int>>&e,vector<int>remove){
        init();
        for (auto &i: e){
            if (i==remove)
                continue;
            if (same(i[0],i[1]))
                return false;
            merge_set(i[0],i[1]);
        }
        return true;
    }
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& edges) {
        n=edges.size();
        vector<int>in(n+1);
        vector<vector<int>>two;
        for (auto &i: edges){
            in[i[1]]++;
        }
        for (int i = n-1; i >= 0; --i) {
            if (in[edges[i][1]]==2)
                two.push_back(edges[i]);
        }
        if (!two.empty()){
            if (istree(edges,two[0]))
                return two[0];
            else
                return two[1];
        }
        return removeEdge(edges);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}