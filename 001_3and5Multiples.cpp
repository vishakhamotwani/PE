//
//  PE1.cpp
//  digits
//
//  Created by Vishakha Motwani on 11/13/13.
//  Copyright (c) 2013 Vishakha Motwani. All rights reserved.
//

#include <iostream>
using namespace std;

const int MAX = 1000;

int multiples(int argc, const char * argv[])
{
    
    int total = 0;
    for(int i = 1; i < MAX; i++)
    {
        if (0 == i%3 || 0 == i%5)
        {
            total += i;
        }
    }
    cout << "\nGrand total is " << total << endl;
    
    return 0;
}
