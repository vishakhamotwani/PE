//
//  004_LargestPalindrome.cpp
//  PE
//
//  Created by Vishakha Motwani on 11/23/13.
//  Copyright (c) 2013 Vishakha Motwani. All rights reserved.
//

#include "004_LargestPalindrome.h"
using namespace std;
const int MIN= 99;
const int MAX= 999;

bool isPalindrome(int number){
    int reverse = 0, mod = 0, original = number;
    while (number) {
        mod = number%10;
        number = number/10;
        reverse = (reverse*10) + mod;
    }
    if (original == reverse) {
        return true;
    }
    return false;
}

int getLargestPalindrome(){
    int result = 0, count = 0;
    for (int i = MAX; i > MIN; i--) {
        for (int j = MAX; j >= i; j--) {
            count++;
            int product = i*j;
            if(product > result && isPalindrome(product)){
                cout << i << " * " << j << " = " << product << endl;
                result = product;
            }
        }
    }
    cout << "Count: " << count << endl;
    return result;
}
