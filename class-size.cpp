#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <stack>
#include <sstream>
#include <string.h>
#include <utility>
#include <vector>

using namespace std;

class Json {
    vector<Json> v;
    int i;
};

class CA {
    int i;
};

class CB {
    vector<int> v;
};

int main() {
    int intA;
    cout<<"sizeof(int) = "<<sizeof(int)<<endl;
    cout<<"sizeof(intA) = "<<sizeof(intA)<<endl;

    vector<int> vA;
    cout<<"sizeof(vector<int>) = "<<sizeof(vector<int>)<<endl;
    cout<<"sizeof(vA) = "<<sizeof(vA)<<endl;

    vector<vector<int>> vvA;
    cout<<"sizeof(vector<vector<int>>) = "<<sizeof(vector<vector<int>>)<<endl;
    cout<<"sizeof(vvA) = "<<sizeof(vvA)<<endl;

    unordered_map<int, int> umA;
    cout<<"sizeof(unordered_map<int, int>) = "<<sizeof(unordered_map<int, int>)<<endl;
    cout<<"sizeof(umA) = "<<sizeof(umA)<<endl;

    unordered_set<int> usA;
    cout<<"sizeof(unordered_set<int>) = "<<sizeof(unordered_set<int>)<<endl;
    cout<<"sizeof(usA) = "<<sizeof(usA)<<endl;

    CA cA;
    cout<<"sizeof(CA) = "<<sizeof(CA)<<endl;
    cout<<"sizeof(cA) = "<<sizeof(cA)<<endl;

    CB cB;
    cout<<"sizeof(CB) = "<<sizeof(CB)<<endl;
    cout<<"sizeof(cB) = "<<sizeof(cB)<<endl;

    Json json;
    cout<<"sizeof(Json) = "<<sizeof(Json)<<endl;
    cout<<"sizeof(json) = "<<sizeof(json)<<endl;

    int wait = 0;
    cin>>wait;

    return 0; 
}
