#include <iostream>
#include <unordered_set>
#include <vector>

using std::unordered_set;
using std::cout;
using std::endl;
using std::vector;


bool summ(vector<int> vec, int v){
    int a = vec.size()-1;
    int b = 0;
    while(a>b){
        if(vec[a]+vec[b]>v){
            a--;
        }
        if(vec[a]+vec[b]<v){
            b++;
        }
        if(vec[a]+vec[b]==v){
            return 1;
        }
    }
    return 0;
}

int main(){
    int v = 5;
    vector<int> vec = {1, 4, 8, 9};
    cout << summ(vec, v) << endl;
}