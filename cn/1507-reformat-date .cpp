#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string reformatDate(string date) {
        string ans="0000-00-00",temp;
        string arr[12]={"Jan","Feb","Mar","Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        stringstream ss(date);
        while (getline(ss,temp,' ')){
            if (isdigit(temp.back())){
                for (int i = 0; i < 4; ++i) {
                    ans[i]=temp[i];
                }
            }else if (isdigit(temp[0])){
                if (temp.size()==3){
                    ans[9]=temp[0];
                }else{
                    ans[8]=temp[0];
                    ans[9]=temp[1];
                }
            }else{
                string index= to_string(find(arr, arr+12,temp)-arr+1);
                if (index.size()==1){
                    ans[6]=index[0];
                }else{
                    ans[5]=index[0];
                    ans[6]=index[1];
                }
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}