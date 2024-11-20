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

int main(){
    int n = 3;
    vector<vector<int>> vm = vvod(n);
    vivod(vm, n);
    return 0;
}