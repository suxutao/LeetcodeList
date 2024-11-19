#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int temperatureTrend(vector<int>& temperatureA, vector<int>& temperatureB) {
        int n=temperatureA.size()-1;
        vector<int>a(n),b(n);
        for (int i = 0; i < n; ++i) {
            if(temperatureA[i+1]>temperatureA[i])
                a[i]=1;
            else if (temperatureA[i+1]<temperatureA[i])
                a[i]=-1;
            if(temperatureB[i+1]>temperatureB[i])
                b[i]=1;
            else if (temperatureB[i+1]<temperatureB[i])
                b[i]=-1;
        }
        int ans=0,temp=0;
        for (int i = 0; i < n; ++i) {
            if (a[i]==b[i]){
                temp++;
            }else{
                temp=0;
            }
            ans= max(ans,temp);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}