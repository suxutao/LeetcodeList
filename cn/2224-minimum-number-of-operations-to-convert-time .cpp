#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int convertTime(string current, string correct) {
        int time=60*(stoi(correct.substr(0,2))-stoi(current.substr(0,2)))+stoi(correct.substr(3))-stoi(current.substr(3));
        int ans=0;
        while (time>=60){
            ans++;
            time-=60;
        }
        while (time>=15){
            ans++;
            time-=15;
        }
        while (time>=5){
            ans++;
            time-=5;
        }
        return ans+time;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}