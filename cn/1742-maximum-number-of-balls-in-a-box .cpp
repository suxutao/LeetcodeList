#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<int,int>m;
    int countBalls(int lowLimit, int highLimit) {
        for (int i = lowLimit; i <= highLimit; ++i) {
            int temp=0,j=i;
            while (j){
                temp+=j%10;
                j/=10;
            }
            m[temp]++;
        }
        return max_element(m.begin(), m.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second<b.second;
        })->second;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}