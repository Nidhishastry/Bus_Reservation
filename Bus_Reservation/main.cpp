//
//  main.cpp
//  Bus_Reservation
//
//  Created by Kumar Divya  Rajat on 11/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include "Profile_Builder.cpp"
#include "Locations.cpp"
#include "bus_timings.cpp"
#include <fstream>

int main(int argc, const char * argv[]) {
    
    ofstream file;
    file.open("Profiles.txt");
    string firstName, lastName, emailID, password, mobileNumber;
    profile rajat;
    location l;
    bus_timings b;
    int temp;
    
    while(1) {
       
        cout<<"1. Create profile\n2. Book a seat\nPress any other key to exit..... "<<endl;
        int choice;
        cout<<"Enter choice:";
        cin>>choice;
        cout<<endl;
        
        switch (choice) {
            case 1:
                cout<<"Enter your first name :";
                cin>>firstName;
                cout<<endl;
                cout<<"Enter your last name:";
                cin>>lastName;
                cout<<endl;
                cout<<"Enter your password:";
                cin>>password;
                cout<<endl;
                cout<<"Enter your last emailID:";
                cin>>emailID;
                cout<<endl;
                cout<<"Enter your last mobile Number:";
                cin>>mobileNumber;
                cout<<endl;
                

                rajat = *new profile(firstName,lastName,password,emailID,mobileNumber);
                file<<firstName;
                file<<lastName;
                file<<password<<emailID<<mobileNumber;
                file.close();
                break;
                
            case 2:
                //show the source city
                l.display_source();
                int src;
                cout<<"Please select your source city: ";
                cin>>src;
                cout<<endl;
                
                // show the detsination city
                int dst;
                temp = src;
                l.display_destination(temp -1);
                cout<<"Please select your destination city: ";
                cin>>dst;
                cout<<endl;
                
                //show timings
                
                b.get_bus_timings(l.cities[src-1], l.cities[dst-1]);
                b.display_timings();
                
                
                
                
                // Pass the source, dst and timings to the generate the ticket.
                
                
                break;
                
                
            default:
                exit(0);
        }
        
    }
    
    
}
