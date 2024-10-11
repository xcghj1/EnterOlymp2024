#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

struct card{
    char nom;
    char mast;
};

vector<card> res(vector<card> koloda){
    char y = 0;
    int counter = 0;
    vector<card> twfv;
    for(int i = koloda.size()-1; i >=koloda.size()-26; i--){
        twfv.push_back(koloda[i]);
        koloda.pop_back();
    }
    char x = koloda[koloda.size()-1].nom;
    y = y + x;
    koloda.pop_back();
    for(int i = koloda.size()-1; koloda.size()-10 + x; i--){
        koloda.pop_back();
    }
    for(int i = twfv.size()-1; i>=0; i--){
        koloda.push_back(twfv[i]);
    }
    return koloda;
}


int main(){
    string cards;
    vector<card> desk;
    for(int i = 0; i < 52; i++){
        std::cin >> cards;
        desk.push_back(cards);
    }
    std::cout << desk[1].nom << endl;
}
