#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v;
    priority_queue<double>q;
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        double ans,sum=0;
        int n=quality.size();
        v.resize(n);
        for (int i = 0; i < n; ++i) {
            v[i]=i;
        }
        sort(v.begin(), v.end(),[&](const int&a,const int&b){
            return (double)quality[a]/wage[a]>(double)quality[b]/wage[b];
        });
        for (int i = 0; i < k; ++i) {
            sum+=quality[v[i]];
            q.push(quality[v[i]]);
        }
        ans=wage[v[k-1]]/(quality[v[k-1]]/sum);
        for (int i = k; i < n; ++i) {
            if (quality[v[i]]<q.top()){
                sum=sum-q.top()+quality[v[i]];
                q.pop();
                q.push(quality[v[i]]);
                ans= min(ans,(double)wage[v[i]]/(quality[v[i]]/sum));
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}