//
//  tickets.cpp
//  Bus_Reservation
//
//  Created by Kumar Divya  Rajat on 14/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>

using namespace std;

class tickets {
    
    string source, destiation, time, name, emailid, mobile;
public:
    tickets() {};
    void ticket_generator(string src, string dst, string time, string name_, string email, string mob) {
        source = src;
        destiation = dst;
        this->time = time;
        name = name_;
        emailid = email;
        mobile = mob;
    }
    
    void print_tickets() {
        cout<<"Name:- "<< name<<endl;
        cout<<"Email ID:- "<<emailid<<endl;
        cout<<"Mobile Number:- "<<mobile<<endl;
        cout<<"Source City:- "<<source;
        cout<<"Destination:-"<<destiation<<endl;
        cout<<"Timings:-"<<time;
    }
};