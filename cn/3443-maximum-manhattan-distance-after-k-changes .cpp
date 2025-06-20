#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxDistance(string s, int k) {
        int ans=0,x=0,y=0;
        unordered_map<char,int>m;
        for (auto &i: s){
            ++m[i];
            if (i=='N'){
                x++;
            }else if (i=='S'){
                x--;
            }else if (i=='W'){
                y--;
            }else{
                y++;
            }
            if (x==0){
                if (y==0){
                    ans= max(ans,min(k,m['N']+m['W'])*2);
                }else if (y<0){
                    ans= max(ans,-y+min(k,m['N']+m['E'])*2);
                }else{
                    ans= max(ans,y+min(k,m['N']+m['W'])*2);
                }
            }else if (x<0){
                if (y==0){
                    ans= max(ans,-x+min(k,m['N']+m['W'])*2);
                }else if (y<0){
                    ans= max(ans,-x-y+min(k,m['N']+m['E'])*2);
                }else{
                    ans= max(ans,-x+y+min(k,m['N']+m['W'])*2);
                }
            }else{
                if (y==0){
                    ans= max(ans,x+min(k,m['S']+m['W'])*2);
                }else if (y<0){
                    ans= max(ans,x-y+min(k,m['S']+m['E'])*2);
                }else{
                    ans= max(ans,x+y+min(k,m['S']+m['W'])*2);
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