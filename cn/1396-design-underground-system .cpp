#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>>m;
    unordered_map<string,unordered_map<string,pair<double,int>>>startAndEnd;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        m[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto[station,time]=m[id];
        startAndEnd[station][stationName].first+=t-time;
        startAndEnd[station][stationName].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto v=startAndEnd[startStation][endStation];
        return v.first/v.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}