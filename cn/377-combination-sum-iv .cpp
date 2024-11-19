#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>v(target+1,0);
        for (int i = 0; i <= target; ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (nums[j]==i)
                    v[i]++;
                if (nums[j]<i&&v[i]<INT_MAX-v[i-nums[j]])
                    v[i]+=v[i-nums[j]];
            }
        }
        return v[target];
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300,310,320,330,340,350,360,370,380,390,400,410,420,430,440,450,460,470,480,490,500,510,520,530,540,550,560,570,580,590,600,610,620,630,640,650,660,670,680,690,700,710,720,730,740,750,760,770,780,790,800,810,820,830,840,850,860,870,880,890,900,910,920,930,940,950,960,970,980,990,111};
    Solution().combinationSum4(v,999);
    return 0;
}