#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    int find_set(int x){
        return v[x]==x?x:v[x]= find_set(v[x]);
    }
    void merge_set(int a,int b){
        a= find_set(a);
        b= find_set(b);
        if (a!=b)
            v[a]=v[b];
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        v.resize(n);
        for (int i = 0; i < n; ++i) {
            v[i]=i;
        }
        for (const auto &i: edges){
            merge_set(i[0],i[1]);
        }
        if (find_set(source)== find_set(destination))
            return true;
        else
            return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}