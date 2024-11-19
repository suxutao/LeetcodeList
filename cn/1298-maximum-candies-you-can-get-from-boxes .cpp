#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        vector<bool>k(status.size(),false);
        vector<bool>b(status.size(),false);
        vector<bool>v(status.size(),false);
        int ans=0;
        queue<int>q;
        for (const auto &item: initialBoxes){
            b[item]=true;
            if (status[item]){
                v[item]=true;
                q.push(item);
            }
        }
        while (!q.empty()){
            int a=q.front();
            for (const auto &item: keys[a]){
                k[item]=true;
                if (b[item]&&!v[item]) {
                    q.push(item);
                    v[item]=true;
                }
            }
            for (const auto &item: containedBoxes[a]){
                b[item]=true;
                if ((status[item]||k[item])&&!v[item]) {
                    q.push(item);
                    v[item]=true;
                }
            }
            ans+=candies[a];
            q.pop();
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}