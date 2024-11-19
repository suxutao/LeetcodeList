#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0,size=height.size()-1,temp1,temp2,MIN;
        bool fan;
        vector<pair<int,int>>s;
        for (int i = size; i >= 0; --i) {
            temp1=1;temp2=ans;fan= true;
            if (s.size()>1)
                fan= false;
            while (!s.empty()&&s.back().first<height[i]){
                MIN= min(height[i]-s.back().first,s.front().first-s.back().first);
                ans+=MIN*s.back().second;
                temp1+=s.back().second;
                s.pop_back();
            }
            if (fan&&s.empty())
                ans=temp2;
            s.emplace_back(height[i],temp1);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};
    Solution().trap(v);
    return 0;
}