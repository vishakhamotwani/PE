//
//  main.cpp
//  test
//
//  Created by Vishakha Motwani on 10/31/13.
//  Copyright (c) 2013 Vishakha Motwani. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "assert.h"
using namespace std;
int anagram(string);
int mod(int);


int stringAnagram() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int cases = 0;
    cin >> cases;
    assert(1 <= cases && 1 <= 100);
    string* input = new string[cases];
    int* anags = new int[cases];
    for (int i = 0; i < cases; i++) {
        cin >> input[i];
        anags[i] = anagram(input[i]);
    }
    for (int i = 0; i < cases; i++) {
        cout << anags[i] << endl;
    }
    return 0;
}

int anagram(string input){
    unsigned long length = input.length();
    assert(1 <= length && length <= 10000);
    int count[26];
    for (int j = 0; j < 26; j++) {
        count[j] = 0;
    }
    if (input.length() % 2 == 0) {
        for (int i = 0; i<length/2; i++) {
            count[int(input[i]) - int('a')]++;
        }
        for (int i = (int) length/2; i < length; i++) {
            count[int(input[i]) - int('a')]--;
        }
        int sum = 0;
        for (int j = 0; j < 26; j++) {
            sum = sum + mod(count[j]);
        }
        return sum/2;
    } else
        return -1;
}

int mod(int a){
    if(a < 0)
        return (-1 * a);
    else
        return a;
}
