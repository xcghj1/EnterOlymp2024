#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

vector<vector<int>> vvod(int n){
    vector<vector<int>> vm;
    int w;
    for(int i = 0; i < n; i++){
        vm.push_back({});
        for(int j = 0; j < n; j++){
            cin >> w;
            vm[i].push_back(w); 
        }
    }
    return vm;    
}

void vivod(vector<vector<int>> vm, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << vm[i][j] << "\t";
        }
        cout << endl;
    }
}

void bestway(vector<vector<int>> vm, int n){
    int prom = 0;
    int r;
    for(int f = 0; f < n; f++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                r = vm[i][j];
                prom = vm[f][j] + vm[i][f];
                if(prom <= r){
                    vm[i][j] = prom;
                }
                
            }
        }
    }
    vivod(vm, n);
}

int main(){
    int n = 4;
    vector<vector<int>> vm = vvod(n);
    bestway(vm, n);
}
