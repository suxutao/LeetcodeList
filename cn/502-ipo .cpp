#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    using pii=pair<int,int>;
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pii>v(profits.size());
        priority_queue<int>q;
        for (int i = 0; i < v.size(); ++i) {
            v[i]={profits[i],capital[i]};
        }
        sort(v.begin(), v.end(),[&](pii&a,pii&b){
            return a.second<b.second;
        });
        int pos=v.size();
        for (int i = 0; i < v.size(); ++i) {
            if (w>=v[i].second) {
                q.push(v[i].first);
            }else {
                pos=i;
                break;
            }
        }
        for (int i = 0; i < k&&!q.empty(); ++i) {
            w+=q.top();
            q.pop();
            while (pos<v.size()&&w>=v[pos].second){
                q.push(v[pos++].first);
            }
        }
        return w;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}