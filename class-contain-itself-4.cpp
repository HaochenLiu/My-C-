/*
这是可以编译通过的。
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

class ListNodeHash;
class ListNode;

class ListNodeHash {
public:
    int operator()(const ListNode & node) const;
};

class ListNode {
public:
    int val;
    unordered_set<ListNode, ListNodeHash> s;
};

int ListNodeHash::operator()(const ListNode & node) const {
    int hashVal = 0;
    return hashVal;
}

int main() {
    cout<<"test"<<endl;
    
    int wait = 0;
    cin>>wait;

    return 0; 
}
