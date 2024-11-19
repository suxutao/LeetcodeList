#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int dayOfYear(string date) {
        int Month[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int year= stoi(date.substr(0, 4));
        int month= stoi(date.substr(5, 2));
        int day= stoi(date.substr(8, 2));
        if (year%400==0||year%4==0&&year%100!=0)
            Month[1]=29;
        for (int i = 0; i < month-1; ++i) {
            day+=Month[i];
        }
        return day;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}