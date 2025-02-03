#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
        int n=startTime.size(),ans=0;
        vector<int>v,vc;
        v.push_back(startTime[0]);
        for (int i = 0; i < n-1; ++i) {
            v.push_back(startTime[i+1]-endTime[i]);
        }
        v.push_back(eventTime-endTime[n-1]);
        vc=v;
        sort(vc.begin(), vc.end(),greater<>());
        for (int i = 0; i < n; ++i) {
            ans= max(ans,v[i]+v[i+1]);
            int cha=endTime[i]-startTime[i],l=v[i],r=v[i+1];
            bool a= false,b= false;
            if (l<r)
                swap(l,r);
            for (int j = 0; j < 3; ++j) {
                if (vc[j]>=cha){
                    if (vc[j]>l){
                        ans= max(ans,cha+l+r);
                        break;
                    }else if (vc[j]==l){
                        if (a){
                            if (vc[j]!=r){
                                ans= max(ans,cha+l+r);
                                break;
                            }else{
                                if (b){
                                    ans= max(ans,cha+l+r);
                                    break;
                                }else{
                                    b= true;
                                }
                            }
                        }else{
                            a= true;
                        }
                    }else{
                        if (vc[j]!=r){
                            ans= max(ans,cha+l+r);
                            break;
                        }else{
                            if (!b)
                                b= true;
                            else
                                ans= max(ans,cha+l+r);
                        }
                    }
                }else{
                    break;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v1{9,24,45,50,53},v2{15,26,50,53,54};
    Solution().maxFreeTime(54,v1,v2);
    return 0;
}