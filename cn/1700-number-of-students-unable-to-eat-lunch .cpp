#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int>q(students.begin(),students.end());
        std::reverse(sandwiches.begin(), sandwiches.end());
        int cnt=0,n=students.size();
        while (!q.empty()&&cnt<=n){
            if (q.front()==sandwiches.back()){
                q.pop_front();
                sandwiches.pop_back();
                cnt=0;
            }else{
                cnt++;
                q.push_back(q.front());
                q.pop_front();
            }
        }
        return q.size();
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}