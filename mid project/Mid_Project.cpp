#include<iostream>
#include<windows.h>
using namespace std;    

main(){
    int option, tour1_Price, tour2_Price, tour3_Price;
    string adminName, adminPassword,user_Name,user_Password, user1_Name, user1_Password, user2_Name, user2_Password, user3_Name, user3_Password;
    string tour1_Name, tour1_Location, tour1_Duration, tour2_Name, tour2_Location, tour2_Duration, tour3_Name, tour3_Location, tour3_Duration;
    int feedback1, feedback2, feedback3;

    
    cout<<"******************************************************************"<<endl;
    cout<<"*                   TOUR MANAGEMENT SYSTEM                       *"<<endl;
    cout<<"******************************************************************"<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"Main Menu >"<<endl;
    cout<<"Select an option from the following:"<<endl;
    cout<<"1- Admin Login"<<endl;
    cout<<"2- User Sign Up"<<endl;
    cout<<"3- User Login"<<endl;
    cout<<"4- Exit"<<endl;
    cout<<" Your Option---";
    cin>>option;

    

    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;

    if(option==1){
        cout<<"(Admin Login)"<<endl;
        cout<<"Enter Admin Name: ";
        cin>>adminName;
        cout<<"Enter Admin Password: ";
        cin>>adminPassword;
        if(adminName=="admin" && adminPassword=="admin"){
            cout<<"Welcome "<<adminName<<endl;
            cout<<"1- Add New Tour"<<endl;
            cout<<"2- View All Tours"<<endl;
            cout<<"3- Print the information of Tours highest price to lower price"<<endl;
            cout<<"4- View All Users"<<endl;
            cout<<"5- View All Feedbacks in order"<<endl;
            cout<<"6- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(Add New Tour)"<<endl;
                cout<<"Enter Tour Name:";
                cin>>tour1_Name;
                cout<<"Enter Tour Price:";
                cin>>tour1_Price;
                cout<<"Enter Tour Duration:";
                cin>>tour1_Duration;
                cout<<"Enter tour Location:";
                cin>>tour1_Location;
                cout<<"Tour Added Successfully"<<endl;
                
            }
            else if(option==2){
                cout<<"(View All Tours)"<<endl;
                cout<<"You don't have any tour record"<<endl;
            }
            else if(option==3){
                cout<<"(Print the information of Tours highest price to lower price)"<<endl;
                cout<<"You don't have any tour record"<<endl;
            }
            else if(option==4){
                cout<<"(View All Users)"<<endl;
                cout<<"You don't have any user record"<<endl;
            }
            else if(option==5){
                cout<<"(View All Feedbacks)"<<endl;
                cout<<"You don't have any feedback record"<<endl;
            }
            else if(option==6){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else{
            cout<<"Invalid Admin Name or Password"<<endl;
        }
    }
    else if(option==2){
        cout<<"(User Sign Up)"<<endl;
        cout<<"Enter User Name: ";
        cin>>user1_Name;
        cout<<"Enter User Password: ";
        cin>>user1_Password;
        cout<<"User Sign Up Successfully"<<endl;
    }
    else if(option==3){
        cout<<"(User Login)"<<endl;
        cout<<"You don't have any user record"<<endl;
    }
    else if(option==4){
        cout<<"Exit"<<endl;
    }
    else{
        cout<<"Invalid Option"<<endl;
    }

    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;

    
    cout<<"******************************************************************"<<endl;
    cout<<"*                   TOUR MANAGEMENT SYSTEM                       *"<<endl;
    cout<<"******************************************************************"<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"Main Menu >"<<endl;
    cout<<"Select an option from the following:"<<endl;
    cout<<"1- Admin Login"<<endl;
    cout<<"2- User Sign Up"<<endl;
    cout<<"3- User Login"<<endl;
    cout<<"4- Exit"<<endl;
    cout<<" Your Option---";
    cin>>option;



    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;

    if(option==1){
        cout<<"(Admin Login)"<<endl;
        cout<<"Enter Admin Name: ";
        cin>>adminName;
        cout<<"Enter Admin Password: ";
        cin>>adminPassword;
        if(adminName=="admin" && adminPassword=="admin"){
            cout<<"Welcome "<<adminName<<endl;
            cout<<"1- Add New Tour"<<endl;
            cout<<"2- View All Tours"<<endl;
            cout<<"3- Print the information of Tours highest price to lower price"<<endl;
            cout<<"4- View All Users"<<endl;
            cout<<"5- View All Feedbacks"<<endl;
            cout<<"6- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(Add New Tour)"<<endl;
                cout<<"Enter Tour Name:";
                cin>>tour2_Name;
                cout<<"Enter Tour Price:";
                cin>>tour2_Price;
                cout<<"Enter Tour Duration:";
                cin>>tour2_Duration;
                cout<<"Enter tour Location:";
                cin>>tour2_Location;
                cout<<"Tour Added Successfully"<<endl;
                
            }
            else if(option==2){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
            }
            else if(option==3){
                cout<<"(Print the information of Tours highest price to lower price)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
            }
            else if(option==4){
                cout<<"(View All Users)"<<endl;
                cout<<"User_Names"<<endl;
                cout<<user1_Name<<endl;
            }
            else if(option==5){
                cout<<"(View All Feedbacks)"<<endl;
                cout<<"You don't have any feedback record"<<endl;
            }
            else if(option==6){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else{
            cout<<"Invalid Admin Name or Password"<<endl;
        }
    }
    else if(option==2){
        cout<<"(User Sign Up)"<<endl;
        cout<<"Enter User Name: ";
        cin>>user2_Name;
        cout<<"Enter User Password: ";
        cin>>user2_Password;
        cout<<"User Sign Up Successfully"<<endl;
    }
    else if(option==3){
        cout<<"(User Login)"<<endl;
        cout<<"Enter User Name: ";
        cin>>user_Name;
        cout<<"Enter User Password: ";
        cin>>user_Password;

        if(user_Name==user1_Name && user_Password==user1_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours from highest to lowest price"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                cout<<tour1_Name<<"\t"<<tour1_Price<<"\t"<<tour1_Duration<<"\t"<<tour1_Location<<endl;
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
                }
                else if(option==2){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }
            
            }
            else if(option==3){
                cout<<"(give feedback out of 10)"<<endl;
                cout<<"Enter your feedback: ";
                cin>>feedback1;
                cout<<"Feedback Submitted Successfully"<<endl;
            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else{
            cout<<"Invalid User Name or Password"<<endl;
        }
    }
    else if(option==4){
        cout<<"Exit"<<endl;
    }
    else{
        cout<<"Invalid Option"<<endl;
    }


    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;


    
    cout<<"******************************************************************"<<endl;
    cout<<"*                   TOUR MANAGEMENT SYSTEM                       *"<<endl;
    cout<<"******************************************************************"<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"Main Menu >"<<endl;
    cout<<"Select an option from the following:"<<endl;
    cout<<"1- Admin Login"<<endl;
    cout<<"2- User Sign Up"<<endl;
    cout<<"3- User Login"<<endl;
    cout<<"4- Exit"<<endl;
    cout<<" Your Option---";
    cin>>option;

    
    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;

    if(option==1){
        cout<<"(Admin Login)"<<endl;
        cout<<"Enter Admin Name: ";
        cin>>adminName;
        cout<<"Enter Admin Password: ";
        cin>>adminPassword;
        if(adminName=="admin" && adminPassword=="admin"){
            cout<<"Welcome "<<adminName<<endl;
            cout<<"1- Add New Tour"<<endl;
            cout<<"2- View All Tours"<<endl;
            cout<<"3- Print the information of Tours highest price to lower price"<<endl;
            cout<<"4- View All Users"<<endl;
            cout<<"5- View All Feedbacks"<<endl;
            cout<<"6- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(Add New Tour)"<<endl;
                cout<<"Enter Tour Name:";
                cin>>tour3_Name;
                cout<<"Enter Tour Price:";
                cin>>tour3_Price;
                cout<<"Enter Tour Duration:";
                cin>>tour3_Duration;
                cout<<"Enter tour Location:";
                cin>>tour3_Location;
                cout<<"Tour Added Successfully"<<endl;
                
            }
            else if(option==2){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
            }
            else if(option==3){
                cout<<"(Print the information of Tours highest price to lower price)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                }
                else{
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                }
            }
            else if(option==4){
                cout<<"(View All Users)"<<endl;
                cout<<"User_Names"<<endl; 
                cout<<user1_Name<<endl;
                cout<<user2_Name<<endl;
            }
            else if(option==5){
                cout<<"(View All Feedbacks)"<<endl;
                cout<<"By user1: "<<feedback1<<"/10"<<endl;
            }
            else if(option==6){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else{
            cout<<"Invalid Admin Name or Password"<<endl;
        }
    }
    else if(option==2){
        cout<<"(User Sign Up)"<<endl;
        cout<<"Enter User Name: ";
        cin>>user3_Name;
        cout<<"Enter User Password: ";
        cin>>user3_Password;
        cout<<"User Sign Up Successfully"<<endl;
    }
    else if(option==3){
        cout<<"(User Login)"<<endl;
        cout<<"Enter User Name: ";
        cin>>user_Name;
        cout<<"Enter User Password: ";
        cin>>user_Password;

        if(user_Name==user1_Name && user_Password==user1_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours from highest to lowest price"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                }
                else{
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                }
            
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl; 
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"2- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }
                else if(option==3){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }
            
            }
            else if(option==3){
                cout<<"(give feedback out of 10)"<<endl;
                cout<<"Enter your feedback: ";
                cin>>feedback1;
                cout<<"Feedback Submitted Successfully"<<endl;
            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else if(user_Name==user2_Name && user_Password==user2_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours from highest to lowest price"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- Give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                }
                else{
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                }
            
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"3- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
        
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }

                else if(option==3){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }
            }
            else if(option==3){
                cout<<"(Give feedback out of 10)"<<endl;
                cout<<"Enter your feedback: ";
                cin>>feedback2;
                cout<<"Feedback Submitted Successfully"<<endl;
            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else{
            cout<<"Invalid User Name or Password"<<endl;
        }
    }
    else if(option==4){
        cout<<"Exit"<<endl;
    }
    else{
        cout<<"Invalid Option"<<endl;
    }

    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;


    
    cout<<"******************************************************************"<<endl;
    cout<<"*                   TOUR MANAGEMENT SYSTEM                       *"<<endl;
    cout<<"******************************************************************"<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"Main Menu >"<<endl;
    cout<<"Select an option from the following:"<<endl;
    cout<<"1- Admin Login"<<endl;
    cout<<"2- User Sign Up"<<endl;
    cout<<"3- User Login"<<endl;
    cout<<"4- Exit"<<endl;
    cout<<" Your Option---";
    cin>>option;

    

    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;

    if(option==1){
        cout<<"(Admin Login)"<<endl;
        cout<<"Enter Admin Name: ";
        cin>>adminName;
        cout<<"Enter Admin Password: ";
        cin>>adminPassword;
        if(adminName=="admin" && adminPassword=="admin"){
            cout<<"Welcome "<<adminName<<endl;
            cout<<"1- Add New Tour"<<endl;
            cout<<"2- View All Tours"<<endl;
            cout<<"3- Print the information of Tours highest price to lower price"<<endl;
            cout<<"4- View All Users"<<endl;
            cout<<"5- View All Feedbacks"<<endl;
            cout<<"6- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
                if(option==1){
                cout<<"(Add New Tour)"<<endl;
                cout<<"You can't add more tours"<<endl;
                
                }
                else if(option==2){
                    cout<<"(View All Tours)"<<endl;
                    cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                }
                else if(option==3){
                    cout<<"(Print the information of Tours highest price to lower price)"<<endl;
                    cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                    if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    if(tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    }
                    else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    if(tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour3_Name<<"\t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                    }  
                    else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    if(tour1_Price>tour2_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    else{
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                    }
                }
                else if(option==4){
                cout<<"(View All Users)"<<endl;
                cout<<"User_Names"<<endl;
                cout<<user1_Name<<endl;
                cout<<user2_Name<<endl;
                cout<<user3_Name<<endl;
                }
                else if(option==5){
                cout<<"(View All Feedbacks)"<<endl;
                if(feedback1>feedback2){
                    cout<<"By user1;"<<feedback1<<"/10"<<endl;
                    cout<<"By user2;"<<feedback2<<"/10"<<endl;
                }
                else{
                    cout<<"By user2;"<<feedback2<<"/10"<<endl;
                    cout<<"By user1;"<<feedback1<<"/10"<<endl;
                }
                
                }
                else if(option==6){
                cout<<"Exit"<<endl;
                }
                else{
                cout<<"Invalid Option"<<endl;
                }
            
            }
            else{
            cout<<"Invalid Admin Name or Password"<<endl;
            }
        }
    
    else if(option==2){
        cout<<"(User Sign Up)"<<endl;
        cout<<"You can't add more users"<<endl;
    }
    else if(option==3){
        cout<<"(User Login)"<<endl;
        cout<<"Enter User Name: ";
        cin>>user_Name;
        cout<<"Enter User Password: ";
        cin>>user_Password;
        if(user_Name==user2_Name && user_Password==user2_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- Give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    if(tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                }
                else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    if(tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
                else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    if(tour1_Price>tour2_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    else{
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"3- "<<tour3_Name<<endl;
                cout<<"4- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
        
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }
                else if(option==3){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour3_Price<<endl;
                    cout<<"Total Duration: "<<tour3_Duration<<endl;
                    cout<<"Tour Location: "<<tour3_Location<<endl;
                }
                else if(option==4){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }
                
            
            }
            else if(option==3){
                cout<<"(Give feedback out of 10)"<<endl;
                cout<<"Enter your feedback: ";
                cin>>feedback2;
                cout<<"Feedback Submitted Successfully"<<endl;
            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else if(user_Name==user3_Name && user_Password==user3_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- Give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    if(tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                }
                else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    if(tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
                else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    if(tour1_Price>tour2_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    else{
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"3- "<<tour3_Name<<endl;
                cout<<"4- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
        
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }
                else if(option==3){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour3_Price<<endl;
                    cout<<"Total Duration: "<<tour3_Duration<<endl;
                    cout<<"Tour Location: "<<tour3_Location<<endl;
                }
            
                else if(option==4){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }

            }
            else if(option==3){
                cout<<"(Give feedback out of 10)"<<endl;
                cout<<"Enter your feedback: ";
                cin>>feedback3;
                cout<<"Feedback Submitted Successfully"<<endl;

            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else if(user_Name==user1_Name&& user_Password==user1_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- Give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    if(tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                }
                else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    if(tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
                else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    if(tour1_Price>tour2_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    else{
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"3- "<<tour3_Name<<endl;
                cout<<"4- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
        
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }
                else if(option==3){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour3_Price<<endl;
                    cout<<"Total Duration: "<<tour3_Duration<<endl;
                    cout<<"Tour Location: "<<tour3_Location<<endl;
                }
            
                else if(option==4){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }

            }
            else if(option==3){
                cout<<"(Give feedback out of 10)"<<endl;
                cout<<"Enter your feedback: ";
                cin>>feedback1;
                cout<<"Feedback Submitted Successfully"<<endl;

            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else{
            cout<<"Invalid User Name or Password"<<endl;
        }
    }
    else if(option==4){
        cout<<"Exit"<<endl;
    }
    else{
        cout<<"Invalid Option"<<endl;
    }



    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;

  

    cout<<"******************************************************************"<<endl;
    cout<<"*                   TOUR MANAGEMENT SYSTEM                       *"<<endl;
    cout<<"******************************************************************"<<endl;

    cout<<endl;
    cout<<endl;

    cout<<"Main Menu >"<<endl;
    cout<<"Select an option from the following:"<<endl;
    cout<<"1- Admin Login"<<endl;
    cout<<"2- User Sign Up"<<endl;
    cout<<"3- User Login"<<endl;
    cout<<"4- Exit"<<endl;
    cout<<" Your Option---";
    cin>>option;


    cout<<endl;
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;

    if(option==1){
        cout<<"(Admin Login)"<<endl;
        cout<<"Enter Admin Name: ";
        cin>>adminName;
        cout<<"Enter Admin Password: ";
        cin>>adminPassword;
        if(adminName=="admin" && adminPassword=="admin"){
            cout<<"Welcome "<<adminName<<endl;
            cout<<"1- Add New Tour"<<endl;
            cout<<"2- View All Tours"<<endl;
            cout<<"3- Print the information of Tours highest price to lower price"<<endl;
            cout<<"4- View All Users"<<endl;
            cout<<"5- View All Feedbacks by users"<<endl;
            cout<<"6- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
                if(option==1){
                cout<<"(Add New Tour)"<<endl;
                cout<<"You can't add more tours"<<endl;
                
                }
                else if(option==2){
                    cout<<"(View All Tours)"<<endl;
                    cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                    cout<<tour1_Name<<"\t"<<tour1_Price<<"\t"<<tour1_Duration<<"\t"<<tour1_Location<<endl;
                    cout<<tour2_Name<<"\t"<<tour2_Price<<"\t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                    cout<<tour3_Name<<"\t"<<tour3_Price<<"\t"<<tour3_Duration<<"\t"<<tour3_Location<<endl;
                }
                else if(option==3){
                    cout<<"(Print the information of Tours highest price to lower price)"<<endl;
                    cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                    if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        if(tour2_Price>tour3_Price){
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                            cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        }
                        else{
                            cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        }
                    }
                    else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        if(tour1_Price>tour3_Price){
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                            cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        }
                        else{
                            cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        }
                    }
                    else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        if(tour1_Price>tour2_Price){
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        }
                        else{
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        }
                    }
                }
                else if(option==4){
                cout<<"(View All Users)"<<endl;
                cout<<"User_Names"<<endl;
                cout<<user1_Name<<endl;
                cout<<user2_Name<<endl;
                cout<<user3_Name<<endl;
                }
                else if(option==5){
                cout<<"(View All Feedbacks)"<<endl;
                if(feedback1>feedback2 && feedback1>feedback3){
                    cout<<"By user1;"<<feedback1<<"/10"<<endl;
                    if(feedback2>feedback3){
                        cout<<"By user2;"<<feedback2<<"/10"<<endl;
                        cout<<"By user3;"<<feedback3<<"/10"<<endl;
                    }
                    else{
                        cout<<"By user3;"<<feedback3<<"/10"<<endl;
                        cout<<"By user2;"<<feedback2<<"/10"<<endl;
                    }
                }
                else if(feedback2>feedback3 && feedback2>feedback1){
                    cout<<"By user2;"<<feedback2<<"/10"<<endl;
                    if(feedback1>feedback3){
                        cout<<"By user1;"<<feedback1<<"/10"<<endl;
                        cout<<"By user3;"<<feedback3<<"/10"<<endl;
                    }
                    else{
                        cout<<"By user3;"<<feedback3<<"/10"<<endl;
                        cout<<"By user1;"<<feedback1<<"/10"<<endl;
                    }
                }
                else if(feedback3>feedback1 && feedback3>feedback2){
                    cout<<"By user3;"<<feedback3<<"/10"<<endl;
                    if(feedback1>feedback2){
                        cout<<"By user1;"<<feedback1<<"/10"<<endl;
                        cout<<"By user2;"<<feedback2<<"/10"<<endl;
                    }
                    else{
                        cout<<"By user2;"<<feedback2<<"/10"<<endl;
                        cout<<"By user1;"<<feedback1<<"/10"<<endl;
                    }
                }
                }
                else if(option==6){
                cout<<"Exit"<<endl;
                }
                else{
                cout<<"Invalid Option"<<endl;
                }
            
            }
            else{
            cout<<"Invalid Admin Name or Password"<<endl;
            }
        }
    
    else if(option==2){
        cout<<"(User Sign Up)"<<endl;
        cout<<"You can't add more users"<<endl;
    }
    else if(option==3){
        cout<<"(User Login)"<<endl;
        cout<<"Enter User Name: ";
        cin>>user_Name;
        cout<<"Enter User Password: ";
        cin>>user_Password;
        if(user_Name==user2_Name && user_Password==user2_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- Give feedback ut of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    if(tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                }
                else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    if(tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
                else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    if(tour1_Price>tour2_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    else{
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"3- "<<tour3_Name<<endl;
                cout<<"4- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
        
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }
                else if(option==3){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour3_Price<<endl;
                    cout<<"Total Duration: "<<tour3_Duration<<endl;
                    cout<<"Tour Location: "<<tour3_Location<<endl;
                }

                else if(option==4){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }
                
            
            }
            else if(option==3){
                cout<<"(Give feedback)"<<endl;
                cout<<"You can't give feedback"<<endl;
            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else if(user_Name==user3_Name && user_Password==user3_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- Give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    if(tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                }
                else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    if(tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
                else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    if(tour1_Price>tour2_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    else{
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"3- "<<tour3_Name<<endl;
                cout<<"4- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
        
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }
                else if(option==3){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour3_Price<<endl;
                    cout<<"Total Duration: "<<tour3_Duration<<endl;
                    cout<<"Tour Location: "<<tour3_Location<<endl;
                }
            
                else if(option==4){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }

            }
            else if(option==3){
                cout<<"(Give feedback)"<<endl;
                cout<<"You can't give feedback"<<endl;

            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else if(user_Name==user1_Name && user_Password==user1_Password){
            cout<<"Welcome "<<user_Name<<endl;
            cout<<"Select an option from the following:"<<endl;
            cout<<"1- View All Tours"<<endl;
            cout<<"2- Book a Tour"<<endl;
            cout<<"3- Give feedback out of 10"<<endl;
            cout<<"4- Exit"<<endl;
            cout<<" Your Option---";
            cin>>option;
            if(option==1){
                cout<<"(View All Tours)"<<endl;
                cout<<"Tour Name\tTour Price\tTour Duration\tTour Location"<<endl;
                if(tour1_Price>tour2_Price && tour1_Price>tour3_Price){
                    cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    if(tour2_Price>tour3_Price){
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                }
                else if(tour2_Price>tour1_Price && tour2_Price>tour3_Price){
                    cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    if(tour1_Price>tour3_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    }
                    else{
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
                else if(tour3_Price>tour1_Price && tour3_Price>tour2_Price){
                    cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                    if(tour1_Price>tour2_Price){
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                    }
                    else{
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t"<<tour2_Location<<endl;
                        cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                    }
                }
            }
            else if(option==2){
                cout<<"(Book a Tour)"<<endl;
                cout<<"Select a Tour to Book"<<endl;
                cout<<"1- "<<tour1_Name<<endl;
                cout<<"2- "<<tour2_Name<<endl;
                cout<<"3- "<<tour3_Name<<endl;
                cout<<"4- Exit"<<endl;
                cout<<" Your Option---";
                cin>>option;
                if(option==1){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour1_Price<<endl;
                    cout<<"Total Duration: "<<tour1_Duration<<endl;
                    cout<<"Tour Location: "<<tour1_Location<<endl;
        
                }
                else if(option==2){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour2_Price<<endl;
                    cout<<"Total Duration: "<<tour2_Duration<<endl;
                    cout<<"Tour Location: "<<tour2_Location<<endl;
                }
                else if(option==3){
                    cout<<"Tour Booked Successfully"<<endl;
                    cout<<"Total Price: "<<tour3_Price<<endl;
                    cout<<"Total Duration: "<<tour3_Duration<<endl;
                    cout<<"Tour Location: "<<tour3_Location<<endl;
                }
            
                else if(option==4){
                    cout<<"Exit"<<endl;
                }
                else{
                    cout<<"Invalid Option"<<endl;
                }

            }
            else if(option==3){
                cout<<"(Give feedback)"<<endl;
                cout<<"You can't give feedback"<<endl;

            }
            else if(option==4){
                cout<<"Exit"<<endl;
            }
            else{
                cout<<"Invalid Option"<<endl;
            }
        }
        else{
            cout<<"Invalid User Name or Password"<<endl;
        }
    }
    else if(option==4){
        cout<<"Exit"<<endl;
    }
    else{
        cout<<"Invalid Option"<<endl;
    }
    
}