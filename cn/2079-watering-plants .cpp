#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans=0,temp=capacity;
        for (int i = 0; i < plants.size(); ++i) {
            if (capacity>=plants[i]){
                capacity-=plants[i];
                ans++;
            }else{
                capacity=temp-plants[i];
                ans+=2*(i+1)-1;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}