#include <iostream>
#include <vector>


using std::vector;
using std::cin;
using std::cout;
using std::endl;

struct dos{
    int stol;
    int stro;
};

int pos(int x, int y, vector<vector<int>> d){
    if(x<0){
        return 0;
    }
    if(y<0){
        return 0;
    }
    if(x>7){
        return 0;
    }
    if(y>7){
        return 0;
    }
    if(d[y][x]!=0){
        return 0;
    }
    return 1;
}

vector<dos> way(int stro, int stol, vector<vector<int>> k){
    vector<dos> all_m;
    dos rand;
    vector<int> str;
    vector<dos> hyp_move = {{stro + 2, stol + 1}, {stro + 2, stol - 1}, {stro + 1, stol +2}, {stro + 1, stol - 2},
    {stro -1, stol + 2}, {stro - 1, stol - 2}, {stro - 2, stol -1}, {stro-2, stol +1}};
    for(dos i:hyp_move){
        if(pos(i.stro, i.stol, k) == 1){
            all_m.push_back(i);
        }
    }
    return all_m;
}

int printvec(vector<int> v){
    for(int i:v){
        cout << i << ", "; 
    }
    cout << endl;
}

int main(){
    vector<vector<int>> board;
    vector<int> str;
    for(int i = 0; i < 8; i++){
        str[i] = 0;
    }
    for(int i = 0; i < 8; i++){
        board[i] = str;
    }
    cout << way()
}