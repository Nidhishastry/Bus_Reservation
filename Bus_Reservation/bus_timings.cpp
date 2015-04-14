//
//  bus_timings.cpp
//  Bus_Reservation
//
//  Created by Kumar Divya  Rajat on 14/04/15.
//  Copyright (c) 2015 Kumar Divya  Rajat. All rights reserved.
//

#include <iostream>
#include <unistd.h>
#include "tickets.cpp"

tickets t;

using namespace std;

class bus_timings {
    
    string source, destination;
    int time;
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

    
    string times[10] = {
      /* 1. */  "6.00 am",
      /* 2. */  "8.00 am",
      /* 3. */  "10.00 am",
      /* 4. */  "12.00 am",
      /* 5. */  "2.00 pm",
      /* 6. */  "4.00 pm",
      /* 7. */  "6.00 pm",
      /* 8. */  "7.00 pm",
      /* 9. */  "8.00 pm",
      /* 10. */ "10.00 pm"
    };
    
    int distance[10][10] = {
    /*Src/Dst*/  /* 0 */  /* 1 */  /* 2 */  /* 3 */  /* 4 */  /* 5 */  /* 6 */  /* 7 */  /* 8 */  /* 9 */
     
    /* 0 */        0,       364,     210,    285,      600,     400,    482,    127,      256,     310,
        
    /* 1 */       364,       0,      218,    128,      295,     312,    765,    324,      423,     243,
        
    /* 2 */       210,      218,       0,     65,      132,     265,    412,    178,      179,     1400,
        
    /* 3 */       285,      128,     65,       0,      213,     112,     245,    678,     128,     85,
        
    /* 4 */       600,      295,     132,     213,     0,       11,      98,     122,      967,    1098,
        
    /* 5 */       400,      312,     265,     112,     11,       0,      56,     11,       8,     104,
        
    /* 6 */       482,      765,     412,     245,     98,      56,       0,     89,      124,    236,
        
    /* 7 */       127,      324,     178,     678,     122,     11,      89,      0,       89,    110,
        
    /* 8 */       256,      423,     179,     128,     967,      8,      124,     89,       0,    190,
        
    /* 9 */       310,      243,     1400,    85,      1098,    104,     236,     110,     190,    0
        
    };

    
   /*
    
    */

    bus_timings() {
    
    };
    
    void get_bus_timings(string src , string dst) {
        source = src;
        destination = dst;
    }
    
    void display_timings() {
        cout<<"The buses run at the following times between "<<source<<" and "<< destination<<" .\n";
        
        if(source == cities[0] && destination == cities[1])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[1]<<" -> "<<distance[0][1]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[5]<<endl<<"2."<<times[7]<<endl<<"3."<<times[9]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[2])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[2]<<" -> "<<distance[0][2]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[3])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[3]<<" -> "<<distance[0][3]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[3]<<endl<<"2."<<times[5]<<endl<<"3."<<times[7]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[4])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[4]<<" -> "<<distance[0][4]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[5])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[5]<<" -> "<<distance[0][5]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[2]<<endl<<"2."<<times[4]<<endl<<"3."<<times[6]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[6])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[6]<<" -> "<<distance[0][6]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[1]<<endl<<"2."<<times[3]<<endl<<"3."<<times[5]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[7])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[7]<<" -> "<<distance[0][7]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[0]<<endl<<"2."<<times[2]<<endl<<"3."<<times[4]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[8])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[8]<<" -> "<<distance[0][8]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[0] && destination == cities[9])
        {
            cout<<"Distance between "<<cities[0]<<" and "<<cities[9]<<" -> "<<distance[0][1]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[2]<<endl<<"2."<<times[4]<<endl<<"3."<<times[6]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[0])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[0]<<" -> "<<distance[0][1]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[5]<<endl<<"2."<<times[7]<<endl<<"3."<<times[9]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[2])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[2]<<" -> "<<distance[1][2]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[3])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[3]<<" -> "<<distance[1][3]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[3]<<endl<<"2."<<times[5]<<endl<<"3."<<times[7]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[4])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[4]<<" -> "<<distance[1][4]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[5])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[5]<<" -> "<<distance[1][5]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[2]<<endl<<"2."<<times[4]<<endl<<"3."<<times[6]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[6])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[6]<<" -> "<<distance[1][6]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[1]<<endl<<"2."<<times[3]<<endl<<"3."<<times[5]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[7])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[7]<<" -> "<<distance[1][7]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[0]<<endl<<"2."<<times[2]<<endl<<"3."<<times[4]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[8])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[8]<<" -> "<<distance[1][8]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[1] && destination == cities[9])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[9]<<" -> "<<distance[1][9]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[2]<<endl<<"2."<<times[4]<<endl<<"3."<<times[6]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[2] && destination == cities[0])
        {
            cout<<"Distance between "<<cities[2]<<" and "<<cities[0]<<" -> "<<distance[2][0]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[2] && destination == cities[3])
        {
            cout<<"Distance between "<<cities[2]<<" and "<<cities[3]<<" -> "<<distance[2][3]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[3]<<endl<<"2."<<times[5]<<endl<<"3."<<times[7]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[2] && destination == cities[4])
        {
            cout<<"Distance between "<<cities[2]<<" and "<<cities[4]<<" -> "<<distance[2][4]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[2] && destination == cities[5])
        {
            cout<<"Distance between "<<cities[2]<<" and "<<cities[5]<<" -> "<<distance[2][5]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[2]<<endl<<"2."<<times[4]<<endl<<"3."<<times[6]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[2] && destination == cities[6])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[6]<<" -> "<<distance[1][6]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[1]<<endl<<"2."<<times[3]<<endl<<"3."<<times[5]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[2] && destination == cities[7])
        {
            cout<<"Distance between "<<cities[1]<<" and "<<cities[7]<<" -> "<<distance[1][7]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[0]<<endl<<"2."<<times[2]<<endl<<"3."<<times[4]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else if(source == cities[3] && destination == cities[2])
        {
            cout<<"Distance between "<<cities[3]<<" and "<<cities[2]<<" -> "<<distance[1][2]<<endl;
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"1."<<times[4]<<endl<<"2."<<times[6]<<endl<<"3."<<times[8]<<endl;
            cout<<"Please select your travel time: ";
            cin>>time;
            cout<<endl;
        }
        
        else {
           
            cout<<"Checking timings........."<<endl;
            sleep(3);
            cout<<"No buses found"<<endl;
        }


    }
    
    void display_ticket()
    {
    //    t.ticket_generator(source, destination, <#string time#>, <#string name_#>, <#string email#>, <#string mob#>);
    }
        
};
