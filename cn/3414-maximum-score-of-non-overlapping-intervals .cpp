#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();
        struct tuple { int l, r, weight, i; };
        vector<tuple> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = {intervals[i][0], intervals[i][1], intervals[i][2], i};
        }
        ranges::sort(a, {}, &tuple::r);

        vector<array<pair<long long, vector<int>>, 5>> f(n + 1);
        for (int i = 0; i < n; i++) {
            auto [l, r, weight, idx] = a[i];
            int k = lower_bound(a.begin(), a.begin() + i, l, [](tuple& t, int val) { return t.r < val; }) - a.begin();
            for (int j = 1; j < 5; j++) {
                long long s1 = f[i][j].first;
                long long s2 = f[k][j - 1].first + weight;
                if (s1 > s2) {
                    f[i + 1][j] = f[i][j];
                    continue;
                }
                vector<int> new_id = f[k][j - 1].second;
                new_id.push_back(idx);
                ranges::sort(new_id);
                if (s1 == s2 && f[i][j].second < new_id) {
                    new_id = f[i][j].second;
                }
                f[i + 1][j] = {s2, new_id};
            }
        }
        return f[n][4].second;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}