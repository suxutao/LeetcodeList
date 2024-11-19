#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int i=1;
        vector<int>v(num_people,0);
        for (int j = 0; candies>=0; ++j) {
            j%=v.size();
            if (candies>=i){
                candies-=i;
                v[j]+=i;i++;
            }else{
                v[j]+=candies;
                break;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}