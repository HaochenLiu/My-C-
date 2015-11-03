/*
这是无法编译通过的。
一个类不能包含自己。
如果能包含自己的话，让sizeof情何以堪。
*/

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

class ListNode {
    int val;
    set<ListNode> s;
    map<string, ListNode> m;
};

int main() {
    ListNode node;
    cout<<"test"<<endl;
    
    int wait = 0;
    cin>>wait;

    return 0; 
}
