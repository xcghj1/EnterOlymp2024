#include <iostream>
#include <vector>
#include <map>

using std::pair;
using std::map;
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


void vivod(vector<vector<bool>> vm, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << vm[i][j] << "\t";
        }
        cout << endl;
    }
}


map<pair<int, int>, int> edd(vector<vector<int>> v, int n){
    map<pair<int, int>, int> edges; 
    pair<int, int> be;
    int len;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            be.first = i;
            be.second = j;
            edges[be] = v[i][j];
        }
    }
    return edges;
}


vector<int> optway(map<pair<int, int>, int> edges, int n, int s){
    vector<int> sw = {};
    for(int i = 0; i < n; i++){
        sw.push_back(1000*1000);
    }
    sw[s] = 0;
    for(int i = 0; i < n; i++){
        for(auto edge : edges){
            pair<int, int> e = edge.first;
            if(sw[e.first] + edge.second < sw[e.second]){
                sw[e.second] = sw[e.first] + edge.second;
            }
        }
    }
    return sw;
}


bool cycle(map<pair<int, int>, int> edges, int n, int s){
    vector<int> sw = {};
    for(int i = 0; i < n; i++){
        sw.push_back(1000*1000);
    }
    sw[s] = 0;
    for(int i = 0; i < n*n; i++){
        for(auto edge : edges){
            pair<int, int> e = edge.first;
            if(sw[e.first] + edge.second <= sw[e.second]){
                sw[e.second] = sw[e.first] + edge.second;
                return 1;
            }
        }
        return 0;
    }
}


bool negway(map<pair<int, int>, int> edges, int n, int s){
    vector<int> sw = {};
    for(int i = 0; i < n; i++){
        sw.push_back(1000*1000);
    }
    sw[s] = 0;
    for(int i = 0; i < n; i++){
        for(auto edge : edges){
            pair<int, int> e = edge.first;
            if(sw[e.first] + edge.second <= sw[e.second]){
                sw[e.second] = sw[e.first] + edge.second;
            }
        }
    }
    return 0;
}


vector<vector<bool>> get(vector<vector<int>> vm, int n){
    vector<vector<bool>> f;
    for(int i = 0; i < n; i++){
        vector<bool> k;
        for(int j = 0; j < n; j++){
            k.push_back(0);
        }
        f.push_back(k);
    }
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((vm[i][j] > 0)&&(vm[i][j]<1000*1000)){
                f[i][j] = 1;
            }
            else{ 
                f[i][j] = 0;
            }
        }
    }
    return f;
}


vector<int> deep_first_step_search(vector<vector<bool>> vm, vector<int>& vis, int s = 0){
    vis[s] = 1; 
    for(int i = 0; i < vm.size(); i++){
        if((vis[i]==0)&&(vm[s][i]==1)){
            deep_first_step_search(vm, vis, i);
        }
    }

    // for(int i = 0; i < n; i++){
    //     cout << vis[i] << " ";
    // }
    // cout << endl;
    return vis;
}

void print_vector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 4;
    int s;
    vector<vector<int>> vm = {{0, 1000*1000, 1, 7}, {1, 0, 2, 1000*1000}, {5, 13, 0, 41}, {1, 3, 1, 0}};
    vector<int> vis;
    for(int i = 0; i < vm.size(); i++){
        vis.push_back(0);
    }
    vector<vector<bool>> f = get(vm, n);
    deep_first_step_search(f, vis, s);
    print_vector(vis);
}