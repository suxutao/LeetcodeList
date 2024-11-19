#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int>v;
        int n=arr.size(),sum=0,ans=0;
        for (int i = 0; i < n; ++i) {
            ++m[arr[i]];
        }
        for (auto &item: m){
            v.push_back(item.second);
        }
        sort(v.begin(), v.end(),greater<>());
        while (sum<n/2){
            sum+=v[ans++];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}