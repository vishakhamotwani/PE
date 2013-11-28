//
//  main.cpp
//  PE
//
//  Created by Vishakha Motwani on 11/20/13.
//  Copyright (c) 2013 Vishakha Motwani. All rights reserved.
//

#include <iostream>
using namespace std;

int largestPrime()
{

    unsigned long long BIG = 600851475143LL;
    unsigned long long count;
    
    for(count = 2; count < BIG/2; count++)
    {
        if(0 == BIG % count)
        {
            BIG /= count;
            cout << "Count: " << count << "\tBIG: " << BIG << endl;
        }
    }
    cout << "Biggest prime factor is " <<  BIG << endl;
    
    return 0;
}

