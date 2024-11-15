#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::list;


int main(){
    int h;
    int g;
    int counter = 0;
    cin >> g;
    cin >> h;
        if((h%2==1)&&(g%2==1)){
            h=h-2;
            g++;
            counter++;
            h++;
            counter++;
        }
        if((h%2==0)&&(g%2==1)){
            h=h-2;
            g++;
            counter++;
        }
        if((h%2==1)&&(g%2==0)){
            h++;
            counter++;
        }
        if((h%2==0)&&(g%2==0)){
            if(h%4!=0){
                h=h+2;
                counter = counter+2;
            }
            cout << counter + h/2 + (g+(h/2))/2 << endl;
        }
}