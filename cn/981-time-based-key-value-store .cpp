#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>m;
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto t=lower_bound(m[key].rbegin(), m[key].rend(), (pair<int,string>){timestamp+1,""},greater<>());
        if (t!=m[key].rend())
            return (*t).second;
        else
            return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}