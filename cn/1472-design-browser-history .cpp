#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class BrowserHistory {
public:
    vector<string>v;
    int p=0;
    BrowserHistory(string homepage) {
        v.push_back(homepage);
    }
    
    void visit(string url) {
        if (v.begin()+p+1!=v.end())
            v.erase(v.begin()+p+1,v.end());
        v.push_back(url);
        ++p;
    }
    
    string back(int steps) {
        p= max(0,p-steps);
        return v[p];
    }
    
    string forward(int steps) {
        p= min<int>(v.size()-1,p+steps);
        return v[p];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}