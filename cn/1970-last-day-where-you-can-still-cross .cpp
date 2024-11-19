#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
    int latestDayToCross(int row, int col, vector<vector<int>>& cells) {
        int l=0,r=row*col,mid;
        vector<vector<int>>v(row,vector<int>(col));
        unordered_set<int>m;
        while (l<r){
            mid=(l+r)>>1;
            bool ck= false;
            queue<int>q;
            m.clear();
            for (int i = 0; i <= mid; ++i) {
                v[cells[i][0]-1][cells[i][1]-1]=1;
            }
            for (int i = mid+1; i < cells.size(); ++i) {
                v[cells[i][0]-1][cells[i][1]-1]=0;
            }
            for (int i = 0; i < col; ++i) {
                if (v[0][i]==0)
                    q.push(i),m.insert(i);
            }
            while (!q.empty()){
                int x=q.front()>>16,y=q.front()<<16>>16;
                q.pop();
                if (x==row-1){
                    ck=true;
                    break;
                }
                for (auto [a,b]: arr){
                    a+=x;b+=y;
                    if (a<0||b<0||a>=row||b>=col||v[a][b]||m.contains(a<<16|b))
                        continue;
                    q.push(a<<16|b);
                    m.insert(a<<16|b);
                }
            }
            if (ck)
                l=mid+1;
            else
                r=mid;
        }
        return l;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}