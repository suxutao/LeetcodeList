#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[100010]={0},k=0;
    string ss;
    void build_arr(string&s){
        ss.resize(s.size()*2+3);
        ss[k++]='$';
        for (int i = 0; i < s.size(); ++i) {
            ss[k++]='#';
            ss[k++]=s[i];
        }
        ss[k++]='&';
        int R=0,id=0;
        for (int i = 1; i < k; ++i) {
            if (i<R){
                arr[i]= min(R-i,arr[2*id-i]);
            }else{
                arr[i]=1;
            }
            while (ss[i+arr[i]]==ss[i-arr[i]])
                arr[i]++;
            if (i+arr[i]>R){
                R=i+arr[i];
                id=i;
            }
        }
    }
    bool pan(string&s){
        int l=0,r=s.size()-1;
        while (l<r){
            if (s[l]!=s[r]){
                return false;
            }
            l++;r--;
        }
        return true;
    }
    string shortestPalindrome(string s) {
        if (s.empty())
            return "";
        if (pan(s))
            return s;
        int pos,MAX=0,pos_i=-1;
        build_arr(s);
        for (int i = 1; i < k; ++i) {
            if (arr[i]+i==k||arr[i]==i){
                if (arr[i]*2-1>=MAX){
                    pos_i=i;
                    MAX=arr[i]*2-1;
                }
            }
        }
        if (ss[pos_i]=='#')
            pos=pos_i/2;
        else
            pos=pos_i/2-1;
        if (~pos){
            if (arr[pos_i]==pos_i&&ss[pos_i]=='#'){
                string S=s.substr(pos,s.size()-pos);
                reverse(S.begin(), S.end());
                S+=s.substr(pos,s.size()-pos);
                return S;
            }else{
                string S=s.substr(pos+1,s.size()-pos-1);
                reverse(S.begin(), S.end());
                S+=s.substr(pos,s.size()-pos);
                return S;
            }
        }else{
            string S=s.substr(1,s.size()-1);
            reverse(S.begin(), S.end());
            S+=s;
            return S;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}