#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    int find_set(int x){
        return x==v[x]?x:v[x]= find_set(v[x]);
    }
    void merge_set(int x,int y){
        x= find_set(x);
        y= find_set(y);
        if (x!=y)
            v[x]=v[y];
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int ans=0,a,b;
        v.resize(edges.size()+1);
        for (int i = 0; i <= edges.size(); ++i) {
            v[i]=i;
        }
        for (int i = 0; i < edges.size(); ++i) {
            a=edges[i][0];b=edges[i][1];
            if (find_set(a)!= find_set(b)) {
                merge_set(a,b);
            }else{
                ans = i;
                break;
            }
        }
        return edges[ans];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}