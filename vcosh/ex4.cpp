#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    long long int n;
    cin >> n;
    if(n%10==0){
        cout << n/10*2 << endl;
    }
    else{
        cout << (n/10*2)+1 << endl;
    }
}