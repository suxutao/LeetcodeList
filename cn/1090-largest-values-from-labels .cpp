#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n=values.size(),ans=0,cnt=0;
        vector<pair<int,int>>v(n);
        unordered_map<int,int>label;
        for (int i = 0; i < n; ++i) {
            v[i]={values[i],labels[i]};
        }
        sort(v.begin(), v.end(),greater<>());
        for (int i = 0; i < n && cnt < numWanted; ++i) {
            ++label[v[i].second];
            if (label[v[i].second]<=useLimit){
                ans+=v[i].first;
                cnt++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}