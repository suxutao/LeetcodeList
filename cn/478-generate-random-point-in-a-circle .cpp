#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double r,x,y;
    Solution(double radius, double x_center, double y_center) {
        r=radius;
        x=x_center;
        y=y_center;
    }
    
    vector<double> randPoint() {
        double chang=sqrt((double)rand()/RAND_MAX*r*r);
        int jiao=rand()%360;
        return {x+chang*cos(jiao),y+chang*sin(jiao)};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}