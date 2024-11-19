#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n=arr.size(),m;
        vector<int>v(k);
        priority_queue<pair<int,int>>q;
        sort(arr.begin(), arr.end());
        m=arr[(n-1)/2];
        for (int i = 0; i < n; ++i) {
            q.emplace(abs(arr[i]-m),arr[i]);
        }
        for (int i = 0; i < k; ++i) {
            v[i]=q.top().second;
            q.pop();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}