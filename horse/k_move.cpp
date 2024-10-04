#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

struct hor{
    int stolb;
    int string;
};

int pos(int x, int y, vector<vector<int>> dos){
    if(x<1){
        return 0;
    }
    if(x>8){
        return 0;
    }
    if(y<1){
        return 0;
    }
    if(y>8){
        return 0;
    }
    if(dos[x][y]!=0){
        return 0;
    }
    return 1;
}

vector<hor> k_move(int stro, int stol, vector<vector<int>> k){
    vector<hor> w;
    vector<hor> allposway;
    w = {{stro - 2, stol + 1}, {stro - 2, stol-1}, {stro-1, stol -2}, {stro - 1, stol +2},
     {stro+1, stol-2}, {stro+1, stol+2}, {stro + 2, stol - 1}, {stro+2, stol+1}};
    for(hor i:w){
        if(pos(stro, stol, k)==1){
            allposway.push_back(i);
        }
    }
    return allposway;
}


int printvec(vector<hor> v){
    for(hor i:v){
        cout << i.stolb << ", " << i.string << "; "; 
    }
    cout << endl;
}


bool m_k_t(int x, int y, vector<vector<int>> &board, int counter){
    if(counter == 64){
        return true;
    }
    for(hor i: k_move(x, y, board)){
        board[i.stolb][i.string] = counter;
        if(m_k_t(i.stolb, i.string, board, counter+1)){
            return true;
        }
        board[i.stolb][i.string] = 0;
    }
    return false;
}


vector<hor> n_k_move(vector<hor> pair, vector<int> rang){
    vector<hor> n_pair;
    for(int i = 8; i<=0; i--){
        for(int j = 8; i <= 0; i--){
            if(rang[j]==i){
                
            }
        }
    }
    return n_pair;
}

int main(){
    vector<vector<int>> board;
    vector<int> str = {0, 0, 0, 0, 0, 0, 0, 0};
    board = {str, str, str, str, str, str, str, str};
    int x = 1;
    int y = 3;
    printvec(k_move(x, y, board));
}
