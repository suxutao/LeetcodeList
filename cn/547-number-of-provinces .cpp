#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    unordered_set<int>s;
    int find_set(int x){
        return v[x]==x?x:v[x]= find_set(v[x]);
    }
    void merge_set(int x,int y){
        x= find_set(x);
        y= find_set(y);
        if (x!=y)
            v[x]=v[y];
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        v.resize(n);
        for (int i = 0; i < n; ++i) {
            v[i]=i;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (isConnected[i][j]==1)
                    merge_set(i,j);
            }
        }
        for (int i = 0; i < n; ++i) {
            s.insert(find_set(v[i]));
        }
        return s.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}