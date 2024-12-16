#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> closestRoom(vector<vector<int>>& rooms, vector<vector<int>>& queries) {
        int n=rooms.size(),k=queries.size(),pt=0;
        vector<int>v(k,-1);
        set<int>s;
        sort(rooms.begin(), rooms.end(),[&](auto&a,auto&b){
            return a[1]>b[1];
        });
        for (int i = 0; i < k; ++i) {
            queries[i].push_back(i);
        }
        sort(queries.begin(), queries.end(),[&](auto&a,auto&b){
            return a[1]>b[1];
        });
        for (int i = 0; i < k; ++i) {
            while (pt<n&&rooms[pt][1]>=queries[i][1]){
                s.insert(rooms[pt++][0]);
            }
            int t=INT_MAX;
            auto it=s.lower_bound(queries[i][0]);
            if (it!=s.end()){
                t= abs(queries[i][0]-*it);
            }
            if (it!=s.begin()){
                auto pre= prev(it);
                if (abs(*pre-queries[i][0])<t||abs(*pre-queries[i][0])==t&&*pre<*it){
                    it=pre;
                    t=abs(*pre-queries[i][0]);
                }
            }
            if (t!=INT_MAX)
                v[queries[i][2]]=*it;
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v{{2,2},{1,2},{3,2}},q{{3,1},{3,3},{5,2}};
    Solution().closestRoom(v,q);
    return 0;
}