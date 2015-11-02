/*
sizeof(ListNode*) = 4
sizeof(pnode) = 4
sizeof(ListNode) = 8
sizeof(node) = 8

指针有固定size，跟类型无关。
所以一个类可以含有一个指向自己的指针。参见ListNode。
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
    ListNode* next;
};

int main() {
    ListNode* pnode;
    cout<<"sizeof(ListNode*) = "<<sizeof(ListNode*)<<endl;
    cout<<"sizeof(pnode) = "<<sizeof(pnode)<<endl;

    ListNode node;
    cout<<"sizeof(ListNode) = "<<sizeof(ListNode)<<endl;
    cout<<"sizeof(node) = "<<sizeof(node)<<endl;

    int wait = 0;
    cin>>wait;

    return 0; 
}
