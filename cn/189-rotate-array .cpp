#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),temp1=nums[0],temp2,ci=0,yuan=0;
        for (int i = 0; i < n;) {
            do{
                temp2=nums[(ci+k)%n];
                nums[(ci+k)%n]=temp1;
                ci=(ci+k)%n;
                temp1=temp2;
                i++;
            } while (ci!=yuan);
            ci=(ci+1)%n;
            yuan=(yuan+1)%n;
            temp1=nums[ci];
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}