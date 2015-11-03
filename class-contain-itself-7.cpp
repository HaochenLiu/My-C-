/*
这是无法编译通过的。
unordered_map是基于pair的。pair是不支持的，所以unordered_map也是不支持的。
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
    unordered_map<string, ListNode> m;
};

int main() {
    ListNode node;
    cout<<"test"<<endl;
    
    int wait = 0;
    cin>>wait;

    return 0; 
}
