#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n=people.size(),p=0,sum=0;
        vector<int>v(n);
        vector<pair<int,int>>pe(n);
        map<int,int>m;
        for (int i = 0; i < n; ++i) {
            pe[i]={people[i],i};
        }
        ranges::sort(pe);
        for (auto &i: flowers){
            ++m[i[0]-1];
            --m[i[1]];
        }
        for (auto &[a,b]: m){
            for (; p < n && pe[p].first<=a; ++p) {
                v[pe[p].second]=sum;
            }
            sum+=b;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}