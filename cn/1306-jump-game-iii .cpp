#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<bool>vis(n);
        queue<int>q;
        q.push(start);
        vis[start]=1;
        while (!q.empty()){
            int p=q.front();q.pop();
            if (arr[p]==0)
                return true;
            if (p+arr[p]<n&&!vis[p+arr[p]])
                q.push(p+arr[p]),vis[p+arr[p]]=1;
            if (p-arr[p]>=0&&!vis[p-arr[p]])
                q.push(p-arr[p]),vis[p-arr[p]]=1;
        }
        return false;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}