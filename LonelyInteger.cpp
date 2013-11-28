//
//  main.cpp
//  LonelyInteger
//
//  Created by Vishakha Motwani on 11/9/13.
//  Copyright (c) 2013 Vishakha Motwani. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
int lonelyinteger(vector < int > a) {
    std::vector<int>::size_type size = a.size();
    if (size == 1) {
        return a[0];
    }
    sort(a.begin(), a.end());
    for (unsigned i=0; i< size; i+=2){
        //cout << a[i];
        if (a[i] == a[i+1]) {
            
        }else{
            return a[i];
        }
    }
    
    return 0;
    
}
/* Tail starts here */
int lonely() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}

