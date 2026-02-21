#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class RideSharingSystem {
public:
    unordered_set<int>s;
    queue<int>rider,driver;
    RideSharingSystem() {
        
    }
    
    void addRider(int riderId) {
        s.insert(riderId);
        rider.push(riderId);
    }
    
    void addDriver(int driverId) {
        driver.push(driverId);
    }
    
    vector<int> matchDriverWithRider() {
        while (!rider.empty()&&!s.contains(rider.front())){
            rider.pop();
        }
        if (rider.empty()||driver.empty()){
            return {-1,-1};
        }else{
            int r=rider.front(),d=driver.front();
            rider.pop();
            driver.pop();
            s.erase(r);
            return {d,r};
        }
    }
    
    void cancelRider(int riderId) {
        s.erase(riderId);
    }
};

/**
 * Your RideSharingSystem object will be instantiated and called as such:
 * RideSharingSystem* obj = new RideSharingSystem();
 * obj->addRider(riderId);
 * obj->addDriver(driverId);
 * vector<int> param_3 = obj->matchDriverWithRider();
 * obj->cancelRider(riderId);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}