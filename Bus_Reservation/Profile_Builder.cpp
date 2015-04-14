//
//  Profile_Builder.cpp
//  Bus_Reservation
//
//  Created by Kumar Divya  Rajat on 11/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class profile {
    string firstName, lastName, emailID, password, mobileNumber;
    
public:
    profile() {
        
    }
    
    profile(string firstName, string lastName, string emailID, string password, string mobileNumber) {
       
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailID = emailID;
        this->password = password;
        this->mobileNumber = mobileNumber;
    }
    
    void update_name(string newFirstName, string newLastName) {
        firstName = newFirstName;
        lastName = newLastName;
    }
    
    void update_email(string newEmailID) {
        emailID = newEmailID;
    }
    
    void update_password(string newPassword)
    {
    
    here: cout<<"Enter existing password"<<endl;
        
        string temp;
        int check = 0;
        
        if(temp == password) {
            password = newPassword;
        } else {
            if(check < 3) {
                cout<<"Incorrect password. Please try again."<<endl;
                check ++;
                goto here;
            } else {
               cout<<"Too many incorrect trials.";
            }
            
        }
    }
    
};
