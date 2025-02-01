#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int findString(vector<string>& words, string s) {
        int n=words.size(),l=0,r=n;
        while (l<r){
            int mid=(l+r)>>1,temp=mid;
            while (temp>=l&&words[temp]=="")
                temp--;
            if (words[temp]>s){
                r=mid;
            }else if (words[temp]<s){
                l=mid+1;
            }else{
                return temp;
            }
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}