#include <iostream>
#include <vector>
#include <map>

using std::pair;
using std::map;
using std::vector;
using std::cin;
using std::cout;
using std::endl;


void vivod(vector<vector<int>> vm, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << vm[i][j] << "\t";
        }
        cout << endl;
    }
}


int allfr(vector<vector<int>> vm, int n, int a){
    int counter = 0;
    vector<int> first;
    for(int i = 0; i < n; i++){
        if(vm[a][i] == 1){
            counter++;
            first.push_back(i);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j:first){
            if((vm[j][i]==1)&&(vm[a][i]==0)&&(i!=a)){
                vm[a][i] = 1;
                vm[i][a] = 1;
                counter++;
            }
        }
    }
    return counter;
}


int main(){
    int n = 5;
    int a = 4;
    vector<vector<int>> vm = {{0, 1, 0, 0, 0}, 
                              {1, 0, 1, 1, 0}, 
                              {0, 1, 0, 0, 1}, 
                              {0, 1, 0, 0, 1},
                              {0, 0, 1, 1, 0}};
    cout << allfr(vm, n, a) << endl;
}