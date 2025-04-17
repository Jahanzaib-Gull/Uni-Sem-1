#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

main()
{
    string user1_Name, user1_Password, user2_Name, user2_Password, user3_Name, user3_Password;
    string user_Name, user_Password;
    string tour1_Name, tour1_Location, tour1_Duration, tour2_Name, tour2_Location, tour2_Duration, tour3_Name, tour3_Location, tour3_Duration;
    int tour1_Price=0, tour2_Price=0, tour3_Price=0;
    int feedback, feedback1=0, feedback2=0, feedback3=0;

    
    void clearscreen();
    
    char option = '0';
    while (option != 4)
    {
        cout << "******************************************************************" << endl;
        cout << "*                   TOUR MANAGEMENT SYSTEM                       *" << endl;
        cout << "******************************************************************" << endl;
        cout << endl;
        cout << "Main Menu -->" << endl;
        cout << "1- Admin Login" << endl;
        cout << "2- User Sign Up" << endl;
        cout << "3- User Login" << endl;
        cout << "4- Exit" << endl;
        cout << " Your Option---";
        cin >> option;
       
       
       
       
       
        if (option == 1)
        {
            cout << "(Admin Login)" << endl;
            string adminName, adminPassword;
            cout << "Enter Admin Name: ";
            cin >> adminName;
            cout << "Enter Admin Password: ";
            cin >> adminPassword;
            if (adminName == "admin" && adminPassword == "admin")
            {
                option = '0';
                while (option != 5)
                {
                    cout << "Welcome " << adminName << endl;
                    cout << "1- Add New Tour" << endl;
                    cout << "2- View All Tours" << endl;
                    cout << "3- View All Users" << endl;
                    cout << "4- View All Feedbacks in order" << endl;
                    cout << "5- Exit" << endl;
                    cout << " Your Option---";
                    cin >> option;
                    if (option == 1)
                    {
                        int tour_count = 1;
                        if(tour_count == 1)
                        {
                            cout << "(Add New Tour)" << endl;
                            cout << "Enter Tour Name: ";
                            cin >> tour1_Name;
                            cout << "Enter Tour Price: ";
                            cin >> tour1_Price;
                            cout << "Enter Tour Duration: ";
                            cin >> tour1_Duration;
                            cout << "Enter Tour Location: ";
                            cin >> tour1_Location;
                            cout << "Tour Added Successfully" << endl;
                            tour_count++;
                        }
                        else if (tour_count == 2)
                        {
                            cout << "(Add New Tour)" << endl;
                            cout << "Enter Tour Name: ";
                            cin >> tour2_Name;
                            cout << "Enter Tour Price: ";
                            cin >> tour2_Price;
                            cout << "Enter Tour Duration: ";
                            cin >> tour2_Duration;
                            cout << "Enter Tour Location: ";
                            cin >> tour2_Location;
                            cout << "Tour Added Successfully" << endl;
                            tour_count++;
                        }
                        else if (tour_count == 3)
                        {
                            cout << "(Add New Tour)" << endl;
                            cout << "Enter Tour Name: ";
                            cin >> tour3_Name;
                            cout << "Enter Tour Price: ";
                            cin >> tour3_Price;
                            cout << "Enter Tour Duration: ";
                            cin >> tour3_Duration;
                            cout << "Enter Tour Location: ";
                            cin >> tour3_Location;
                            cout << "Tour Added Successfully" << endl;
                            tour_count++;
                        }
                        else
                        {
                            cout << "You can't add more tours" << endl;
                        }
                        clearscreen();

                    }
                    else if (option == 2)
                    {
                        cout << "(View All Tours)" << endl;
                        cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;
                        if(tour1_Price > tour2_Price && tour1_Price > tour3_Price)
                        {
                            cout << tour1_Name << "\t \t" << tour1_Price << "\t \t" << tour1_Duration << "\t \t" << tour1_Location << endl;
                            if(tour2_Price > tour3_Price)
                            {
                                cout << tour2_Name << "\t \t" << tour2_Price << "\t \t" << tour2_Duration << "\t \t" << tour2_Location << endl;
                                cout << tour3_Name << "\t \t" << tour3_Price << "\t \t" << tour3_Duration << "\t \t" << tour3_Location << endl;
                            }
                            else
                            {
                                cout << tour3_Name << "\t \t" << tour3_Price << "\t \t" << tour3_Duration << "\t \t" << tour3_Location << endl;
                                cout << tour2_Name << "\t \t" << tour2_Price << "\t \t" << tour2_Duration << "\t \t" << tour2_Location<< endl;
                            }
                        }
                        else if(tour2_Price > tour1_Price && tour2_Price > tour3_Price)
                        {
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                            if(tour1_Price > tour3_Price)
                            {
                                cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                                cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                            }
                            else
                            {
                                cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                                cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                            }
                        }
                        else if(tour3_Price > tour1_Price && tour3_Price > tour2_Price)
                        {
                            cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                            if(tour1_Price > tour2_Price)
                            {
                                cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                                cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                            }
                            else
                            {
                                cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                                cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                            }
                        }
                    }
                    else if (option == 3)
                    {
                        cout << "(View All Users)" << endl;
                        cout << "User Name\tUser Password" << endl;
                        cout << user1_Name << "\t \t" << user1_Password << endl;
                        cout << user2_Name << "\t \t" << user2_Password << endl;
                        cout << user3_Name << "\t \t" << user3_Password << endl;
                    }
                    else if (option == 4)
                    {
                        cout << "(View All Feedbacks)" << endl;
                        cout << "Feedbacks" << endl;
                        cout << feedback1 << endl;
                        cout << feedback2 << endl;  
                          cout << feedback3 << endl;
                    }
                    else if (option == 5)
                    {
                        exit(0);
                    }
                    else
                    {
                        cout << "Invalid Option. Please try again." << endl;
                    }
                    clearscreen();

                }
            }
        }
        
        
        
        
        
        else if (option == 2)
        {
            int user_count = 1;
            if (user_count = 1)
            {
                cout << "(User Sign Up)" << endl;
                cout << "Enter User Name: ";
                cin >> user1_Name;
                cout << "Enter User Password: ";
                cin >> user1_Password;
                user_count++;
                cout << "User Sign Up Successfully" << endl;
            }
            else if (user_count = 2)
            {
                cout << "(User Sign Up)" << endl;
                cout << "Enter User Name: ";
                cin >> user2_Name;
                cout << "Enter User Password: ";
                cin >> user2_Password;
                user_count++;
                cout << "User Sign Up Successfully" << endl;
            }
            else if (user_count = 3)
            {
                cout << "(User Sign Up)" << endl;
                cout << "Enter User Name: ";
                cin >> user3_Name;
                cout << "Enter User Password: ";
                cin >> user3_Password;
                user_count++;
                cout << "User Sign Up Successfully" << endl;
            }
            else
            {
                cout << "You can't add more users" << endl;
            }
            clearscreen();

        }
        
        
        
        
        
        else if (option == 3)
        {
            cout << "(User Login)" << endl;
            cout << "Enter User Name: ";
            cin >> user_Name;
            cout << "Enter User Password: ";
            cin >> user_Password;
            if ((user_Name == user1_Name && user_Password == user1_Password) || (user_Name == user2_Name && user_Password == user2_Password) || (user_Name == user3_Name && user_Password == user3_Password))
            {
                cout << "Welcome " << user_Name << endl;
                cout << "Select an option from the following:" << endl;
                cout << "1- View All Tours from highest to lowest price" << endl;
                cout << "2- Book a Tour" << endl;
                cout << "3- Give feedback out of 10" << endl;
                cout << "4- Exit" << endl;
                cout << " Your Option---";
                cin >> option;
                if (option == 1)
                {
                    cout << "(View All Tours)" << endl;
                    cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;
                    if (tour1_Price > tour2_Price && tour1_Price > tour3_Price)
                    {
                        cout << tour1_Name << "\t \t" << tour1_Price << "\t \t" << tour1_Duration << "\t \t" << tour1_Location << endl;
                        if (tour2_Price > tour3_Price)
                        {
                            cout << tour2_Name << "\t \t" << tour2_Price << "\t \t" << tour2_Duration << "\t \t" << tour2_Location << endl;
                            cout << tour3_Name << "\t \t" << tour3_Price << "\t \t" << tour3_Duration << "\t \t" << tour3_Location<< endl;
                        }
                        else
                        {
                            cout << tour3_Name << "\t \t" << tour3_Price << "\t \t" << tour3_Duration << "\t \t" << tour3_Location<< endl;
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        }
                    }
                    else if (tour2_Price > tour1_Price && tour2_Price > tour3_Price)
                    {
                        cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        if(tour1_Price > tour3_Price)
                        {
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                            cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        }
                        else
                        {
                            cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        }
                    }
                    else if (tour3_Price > tour1_Price && tour3_Price > tour2_Price)
                    {
                        cout<<tour3_Name<<"\t \t"<<tour3_Price<<"\t \t"<<tour3_Duration<<"\t \t"<<tour3_Location<<endl;
                        if(tour1_Price > tour2_Price)
                        {
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                        }
                        else
                        {
                            cout<<tour2_Name<<"\t \t"<<tour2_Price<<"\t \t"<<tour2_Duration<<"\t \t"<<tour2_Location<<endl;
                            cout<<tour1_Name<<"\t \t"<<tour1_Price<<"\t \t"<<tour1_Duration<<"\t \t"<<tour1_Location<<endl;
                        }
                    }
                }
                else if (option == 2)
                {
                    cout << "(Book a Tour)" << endl;
                    // Code to book a tour
                }
                else if (option == 3)
                {
                    int feedback_count = 1;
                    if(feedback_count == 1)
                    {
                        cout << "(Give Feedback)" << endl;
                        cout << "Enter your feedback out of 10: ";
                        cin >> feedback;
                        cout << "Feedback Submitted Successfully" << endl;
                        feedback_count++;
                    }
                    else if (feedback_count == 2)
                    {
                        cout << "(Give Feedback)" << endl;
                        cout << "Enter your feedback out of 10: ";
                        cin >> feedback;
                        cout << "Feedback Submitted Successfully" << endl;
                        feedback_count++;
                    }
                    else if (feedback_count == 3)
                    {
                        cout << "(Give Feedback)" << endl;
                        cout << "Enter your feedback out of 10: ";
                        cin >> feedback;
                        cout << "Feedback Submitted Successfully" << endl;
                        feedback_count++;
                    }
                    else
                    {
                        cout << "You can't give more feedbacks" << endl;
                    }
                }
            }
            else
            {
                cout << "Invalid User Name or Password" << endl;
            }
            clearscreen();

        }
        
        
        
        
        else if (option == 4)
        {
            cout << "Exiting the program..." << endl;
            system("cls");
        }
        
        
        
        
        else
        {
            cout << "Invalid Option. Please try again." << endl;
            clearscreen();

        }
    }
}
void clearscreen(){
    cout<<"Press any key to continue..."<<endl;
    getch();
    system("CLS");
 }