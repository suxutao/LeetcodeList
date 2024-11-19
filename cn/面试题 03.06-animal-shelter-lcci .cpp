#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class AnimalShelf {
public:
    queue<pair<int,int>>cat,dog;
    int n;
    AnimalShelf() {
        n=0;
    }
    
    void enqueue(vector<int> animal) {
        if (animal[1]==0)
            cat.emplace(n++,animal[0]);
        else
            dog.emplace(n++,animal[0]);
    }
    
    vector<int> dequeueAny() {
        if (cat.empty()&&dog.empty())
            return {-1,-1};
        else if (cat.empty()||dog.empty()){
            if (cat.empty()){
                return dequeueDog();
            }else{
                return dequeueCat();
            }
        }else{
            if (cat.front().first<dog.front().first)
                return dequeueCat();
            else
                return dequeueDog();
        }
    }
    
    vector<int> dequeueDog() {
        if (dog.empty())
            return {-1,-1};
        int hao=dog.front().second;
        dog.pop();
        return {hao,1};
    }
    
    vector<int> dequeueCat() {
        if (cat.empty())
            return {-1,-1};
        int hao=cat.front().second;
        cat.pop();
        return {hao,0};
    }
};

/**
 * Your AnimalShelf object will be instantiated and called as such:
 * AnimalShelf* obj = new AnimalShelf();
 * obj->enqueue(animal);
 * vector<int> param_2 = obj->dequeueAny();
 * vector<int> param_3 = obj->dequeueDog();
 * vector<int> param_4 = obj->dequeueCat();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}