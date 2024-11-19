#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countPoints(string rings) {
        int arr[10]['Z']={0},ans=0;
        for (int i = 0; i < rings.size(); i+=2) {
            arr[rings[i+1]-48][rings[i]]=1;
        }
        for (int i = 0; i < 10; ++i) {
            if (arr[i]['R']&&arr[i]['G']&&arr[i]['B'])
                ans++;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}