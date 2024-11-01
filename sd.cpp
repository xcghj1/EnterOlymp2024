#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::list;

int main(){
    list<int> l = {2, 3, 4, 5};
    auto lbegin = l.begin();
    auto lend = l.end();
    int s;
    s = *lbegin;
    s += *lend;
    s += *--lend;
    s+= *--lend;
    cout << s << endl;
}
