#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        if (start==goal)
            return 0;
        int n=nums.size(),ans=1;
        queue<int>q;
        bool vis[1001]{};
        q.push(start);
        vis[start]=1;
        while (!q.empty()){
            int sz=q.size();
            for (int j = 0; j < sz; ++j) {
                int t=q.front();
                for (int i = 0; i < n; ++i) {
                    int a=t-nums[i],b=t+nums[i],c=t^nums[i];
                    if (a==goal||b==goal||c==goal)
                        return ans;
                    if (a>=0&&a<=1000&&!vis[a]){
                        q.push(a);
                        vis[a]=1;
                    }
                    if (b>=0&&b<=1000&&!vis[b]){
                        q.push(b);
                        vis[b]=1;
                    }
                    if (c>=0&&c<=1000&&!vis[c]){
                        q.push(c);
                        vis[c]=1;
                    }
                }
                q.pop();
            }
            ++ans;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}