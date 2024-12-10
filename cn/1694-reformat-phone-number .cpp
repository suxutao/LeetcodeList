#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reformatNumber(string number) {
        string temp,ans;
        for (auto &i: number){
            if (isdigit(i))
                temp.push_back(i);
        }
        int i;
        for (i = 0; i < temp.size(); i+=3) {
            if (temp.size()-i<=4)
                break;
            ans+=temp.substr(i,3)+"-";
        }
        if (temp.size()-i==2||temp.size()-i==3){
            ans+=temp.substr(i);
        }else{
            ans+=temp.substr(i,2)+"-"+temp.substr(i+2,2);
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){

    return 0;
}