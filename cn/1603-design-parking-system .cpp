#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class ParkingSystem {
public:
    int a,b,c,num_a,num_b,num_c;
    ParkingSystem(int big, int medium, int small) {
        num_a=num_b=num_c=0;
        a=big;
        b=medium;
        c=small;
    }
    
    bool addCar(int carType) {
        if (carType==1)
            return num_a++<a;
        else if (carType==2)
            return num_b++<b;
        else
            return num_c++<c;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}