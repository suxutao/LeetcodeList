#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    bool leap_year(int year) {
        return ((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0));
    }
    int date_to_int(string date) {
        int year, month, day;
        sscanf(date.c_str(), "%d-%d-%d", &year, &month, &day);
        int month_length[] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
        int ans = 0;
        while (year != 1971 or month != 1 or day != 1) {
            ++ans;
            if (--day == 0)
                if (--month == 0)
                    --year;
            if (day == 0) {
                day = month_length[month];
                if (month == 2 && leap_year(year))
                    ++day;
            }
            if (month == 0)
                month = 12;
        }
        return ans;
    }
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(date_to_int(date1) - date_to_int(date2));
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}