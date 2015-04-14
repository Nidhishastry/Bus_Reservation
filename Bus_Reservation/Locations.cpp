//
//  Locations.cpp
//  Bus_Reservation
//
//  Created by Kumar Divya  Rajat on 11/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>


#define SIZE 10;

using namespace std;

class location {
public:
    string cities[10] = {
        /* 1. */  "BANGALORE",
        /* 2. */  "MANGALORE",
        /* 3. */  "MYSORE",
        /* 4. */  "HUBLI",
        /* 5. */  "MADIKERI",
        /* 6. */  "MANDWA",
        /* 7. */  "SHIRDI",
        /* 8. */  "MUMBAI",
        /* 9. */  "JAIPUR",
        /* 10. */  "CHENNAI"
        
    };
    
    int size = SIZE;
    
    void display_source() {
        for(int i = 0; i<size; i++) {
            cout<<i+1<<". "<<cities[i]<<"."<<endl;
        }
    }
    
    void display_destination(int j) {
        for(int i = 0; i<j; i++) {
            cout<<i+1<<". "<<cities[i]<<"."<<endl;
        }
        for(int i = j+1; i<size; i++) {
            cout<<i<<". "<<cities[i]<<"."<<endl;
        }
        
    }
    
    void distance() {
        
    }
};
