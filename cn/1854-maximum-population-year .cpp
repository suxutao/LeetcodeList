#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int arr[105]{},t=0,pos;
        for (int i = 0; i < logs.size(); ++i) {
            int a=logs[i][0],b=logs[i][1];
            for (int j = a; j < b; ++j) {
                ++arr[j-1950];
            }
        }
        for (int i = 0; i <= 100; ++i) {
            if (arr[i]>t){
                t=arr[i];
                pos=i+1950;
            }
        }
        return pos;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}