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

struct kolvoway{
    hor way;
    vector<int> contway;
};

int pos(int x, int y, vector<vector<int>> board){
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
    if(board[x][y]!=0){
        return 0;
    }
    return 1;
}

vector<hor> allways(int stro, int stol){
    vector<hor> w = {{stro - 2, stol + 1}, {stro - 2, stol-1}, {stro-1, stol -2}, {stro - 1, stol +2},
    {stro+1, stol-2}, {stro+1, stol+2}, {stro + 2, stol - 1}, {stro+2, stol+1}};
    return w;
}

vector<hor> sort_k_move(vector<hor> pair, vector<int> rang){
    vector<hor> n_pair;
    for(int j = 8; j>=0; j--){
        for(int i = pair.size()-1; i>=0; i--){
            if(rang[i]==j){
                n_pair.push_back(pair[i]);
            }
        }
    }
    return n_pair;
}

vector<hor> k_move(int stro, int stol, vector<vector<int>> board){
    vector<hor> w;
    vector<hor> allposway;
    vector<int> rang;
    int count = 0;
    w = allways(stro, stol);
    for(hor i:w){
        if(pos(i.string, i.stolb, board)==1){
            allposway.push_back(i);
        }
    }
    for(hor i:allposway){
        vector<hor> w = allways(i.string, i.stolb);
        for(hor j:w){
            if(pos(j.string, j.stolb, board)==1){
                count++;
            }

        }
        rang.push_back(count);
        count = 0;
    }
    allposway = sort_k_move(allposway, rang);
    return allposway;
}

vector<int> allmoves(vector<hor> allposway, vector<vector<int>> board)
{
    vector<int> ways;
    for (hor i : allposway)
    {
        ways.push_back(k_move(i.string, i.stolb, board).size()-1);
    } 
    return ways;
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


int main(){
    vector<vector<int>> board;
    vector<int> str = {0, 0, 0, 0, 0, 0, 0, 0};
    board = {str, str, str, str, str, str, str, str};
    vector<hor> pair = {{3, 5}, {5, 7}, {1, 7}};
    vector<int> rang = {3,1, 5};
    int x = 3;
    int y = 4;
    printvec(k_move(x, y, board));
}
