#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string>vs;
    unordered_set<string>se;
    string ip;
    int duan;
    void hui(string s,int pos){
        if (duan==4&&pos==s.length()){
            se.insert(ip);
            return;
        }else if (duan==4&&pos!=s.length()){
            return;
        }
        if (s.length()<pos+4-duan)
            return;
        if (s.length()>pos+3*(4-duan))
            return;
        for (int i = pos; i < s.length(); ++i) {
            for (int j = 1; j <= 3; ++j) {
                if (s[pos]=='0'&&j>1)
                    break;
                if (j==3&&s.substr(pos,j)>"255")
                    break;
                int a=ip.length();
                if (ip.empty())
                    ip=s.substr(pos,j);
                else{
                    ip+='.';
                    ip+=s.substr(pos,j);
                }
                duan++;
                hui(s,pos+j);
                duan--;
                ip.erase(a);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if (s.length()<4||s.length()>12)
            return {};
        duan=0;
        hui(s,0);
        vs.assign(se.begin(),se.end());
        return vs;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}