/*
这是无法编译通过的。
一个类不能包含自己的unordered_set或者unordered_map。
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
    unordered_set<ListNode> s;
    unordered_map<string, ListNode> s;
};

int main() {
    ListNode node;

    int wait = 0;
    cin>>wait;

    return 0; 
}
