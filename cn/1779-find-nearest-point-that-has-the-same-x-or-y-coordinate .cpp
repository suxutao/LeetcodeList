#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=-1,mx=INT_MAX;
        for (int i = 0; i < points.size(); ++i) {
            if (points[i][0]==x||points[i][1]==y){
                int temp=abs(points[i][0]-x)+ abs(points[i][1]-y);
                if (temp<mx){
                    mx=temp;
                    ans=i;
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}