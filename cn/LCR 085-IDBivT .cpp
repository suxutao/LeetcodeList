#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>v;
    string s;
    void hui(int left,int right){
        if (left==0&&right==0){
            v.push_back(s);
            return;
        }
        if (left>0){
            s+='(';
            hui(left-1,right);
            s= s.substr(0,s.length()-1);
        }
        if (right>0&&right-1>=left){
            s+=')';
            hui(left,right-1);
            s= s.substr(0,s.length()-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        hui(n,n);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}