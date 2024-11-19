#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size()==1)
            return nums;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>p;
        unordered_map<int,int>u;
        vector<int>v(k);
        int b=0;
        for (int a:nums) {
            u[a]++;
        }
        for(auto i=u.begin();i!=u.end();i++,b++){
            if (b<k){
                p.push({i->second,i->first});
            }else{
                if (p.top().first<i->second){
                    p.pop();
                    p.push({i->second,i->first});
                }
            }
        }
        for (int i = k-1; i >= 0; --i) {
            v[i]=p.top().second;
            p.pop();
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,1,1,1,2,2,3};
    Solution().topKFrequent(v,2);
    return 0;
}