#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[100005];
    int query(int x){
        return x==arr[x]?x:arr[x]= query(arr[x]);
    }
    void merge(int x,int y){
        x= query(x);
        y= query(y);
        if (x!=y){
            if (x<y) {
                arr[y] = x;
            }else {
                arr[x] = y;
            }
        }
    }
    unordered_map<int,int>m;
    int makeConnected(int n, vector<vector<int>>& connections) {
        int xian=connections.size();
        if (xian<n-1)
            return -1;
        for (int i = 0; i < n; ++i) {
            arr[i]=i;
        }
        for (auto &i: connections){
            merge(i[0],i[1]);
        }
        for (int i = 0; i < n; ++i) {
            int temp= query(i);
            m[temp]++;
        }
        return m.size()-1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}