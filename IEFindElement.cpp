//
//  IEFindElement.cpp
//  PE
//
//  Created by Vishakha Motwani on 11/25/13.
//  Copyright (c) 2013 Vishakha Motwani. All rights reserved.
//

#include "IEFindElement.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MIN = -1000;
const int MAX = 1000;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int searchItem, arraySize = 0;
    cin >> searchItem;
    cin >> arraySize;
    if(arraySize > 1 || arraySize < MAX){
        int *myArray = new int[arraySize];
        for(int i = 0; i < arraySize; i++)
            cin >> myArray[i];
        for(int i = 0; i < arraySize; i++){
            if(searchItem == myArray[i]){
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}