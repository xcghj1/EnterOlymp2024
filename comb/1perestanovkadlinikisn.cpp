#include <iostream>
#include <vector>


using std::vector;
using std::cin;
using std::cout;
using std::endl;


bool add(vector<int>& s, int n){
    int counter = 0;
    bool f = 1;
    bool of = 0;
    while(f==1){
        if(s[counter]+1<=n){
            s[counter]++;
            f = 0;
            if(of == 1){
                for(int i = 0; i < counter; i++){
                    s[i] = 1;
            of = 0;
                }
            }
        }
        else{
            of = 1;
            counter++;
            if(counter>=s.size()){
                return 0;
            }
        }
    }    
    return 1;
}


void printvec(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void printallser(int k, int n){
    vector<int> ser;
    for(int i = 0; i < k; i++){
        ser.push_back(1);
    }
    printvec(ser);
    while(add(ser, n)==1){
        printvec(ser);
    }
}



int main(){
    int n = 3;
    int k = 3;
    printallser(k, n);
}