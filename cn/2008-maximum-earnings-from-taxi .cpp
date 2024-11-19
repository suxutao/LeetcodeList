#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        if (rides.size()==1)
            return rides[0][2]+rides[0][1]-rides[0][0];
        long long arr[n+1];
        memset(arr,0,sizeof(arr));
        vector<vector<pair<int,int>>> end(n+1);
        for(vector<int> x:rides)
        {
            pair<int,int> t={x[0],x[2]};
            end[x[1]].push_back(t);
        }
        for(int i=1;i<=n;i++)
        {
            arr[i]=arr[i-1];
            for(auto j:end[i])
                arr[i]=max(arr[i],arr[j.first]+j.second+i-j.first);
        }
        return arr[n];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}