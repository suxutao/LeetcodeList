#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        for (int i = 'a'; i <= 'z'; ++i) {
            auto d=s.find(i);
            if (d!=string::npos){
                auto e=s.find(i,d+1);
                if (e-d!=distance[i-'a']+1){
                    return false;
                }
            }
        }
        return true;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    string s="abaccb";
    vector<int>v={1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    Solution().checkDistances(s,v);
    return 0;
}