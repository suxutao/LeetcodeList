#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size(),ans=0,r=0;
        vector<int>v(arr);
        unordered_map<int,pair<int,vector<int>>>m;
        ranges::sort(v);
        for (int i = 0; i < n; ++i) {
            if (!m.contains(v[i])){
                m[v[i]]={0,{i}};
            }else{
                m[v[i]].second.push_back(i);
            }
        }
        for (int i = 0; i < n; ++i) {
            auto&[ptr,vec]=m[arr[i]];
            r= max(r,vec[ptr++]);
            if (r==i){
                ans++;
                r=i+1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v{2,1,3,4,4};
    Solution().maxChunksToSorted(v);
    return 0;
}