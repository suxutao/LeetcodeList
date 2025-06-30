#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[3][3]{};
    int pan(){
        for (int i = 0; i < 3; ++i) {
            if (arr[i][0]==1&&arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]){
                return 1;
            }
            if (arr[i][0]==2&&arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]){
                return 2;
            }
            if (arr[0][i]==1&&arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]){
                return 1;
            }
            if (arr[0][i]==2&&arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]){
                return 2;
            }
        }
        if (arr[0][0]==1&&arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]){
            return 1;
        }
        if (arr[0][0]==2&&arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]){
            return 2;
        }
        if (arr[2][0]==1&&arr[2][0]==arr[1][1]&&arr[1][1]==arr[0][2]){
            return 1;
        }
        if (arr[2][0]==2&&arr[2][0]==arr[1][1]&&arr[1][1]==arr[0][2]){
            return 2;
        }
        return 0;
    }
    string tictactoe(vector<vector<int>>& moves) {
        for (int i = 0; i < moves.size(); ++i) {
            int x=moves[i][0],y=moves[i][1];
            if (i%2==0){
                arr[x][y]=1;
            }else{
                arr[x][y]=2;
            }
            int f=pan();
            if (f==1){
                return "A";
            }else if (f==2){
                return "B";
            }
        }
        return moves.size()<9?"Pending":"Draw";
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}