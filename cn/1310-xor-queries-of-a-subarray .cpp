#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>v(n+1),ans;
        for (int i = 0; i < n; ++i) {
            v[i+1]=v[i]^arr[i];
        }
        for (auto &i: queries){
            ans.push_back(v[i[0]]^v[i[1]+1]);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}