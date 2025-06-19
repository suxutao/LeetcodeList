#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int n=keysPressed.size(),arr['z'+1]{};
        arr[keysPressed[0]]=releaseTimes[0];
        for (int i = 1; i < n; ++i) {
            arr[keysPressed[i]]= max(arr[keysPressed[i]],releaseTimes[i]-releaseTimes[i-1]);
        }
        char ans='a';int mx=0;
        for (int i = 'a'; i <= 'z'; ++i) {
            if (arr[i]>=mx){
                mx=arr[i];
                ans=i;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}