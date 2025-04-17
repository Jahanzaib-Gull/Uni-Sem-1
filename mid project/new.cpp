#include <iostream>
using namespace std;

main()
{
    int option = 0;
    while (option != 4)
    {
        cout << "******************************************************************" << endl;
        cout << "*                   TOUR MANAGEMENT SYSTEM                       *" << endl;
        cout << "******************************************************************" << endl;

        cout << endl;
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
            cout << "Enter Admin Name: ";
            cin >> admin_Name;
            cout << "Enter Admin Password: ";
            cin >> admin_Password;
            if (admin_Name == "admin" && admin_Password == "admin")
            {
                cout << "Welcome " << admin_Name << endl;
                option = 0;
                while (option != 6)
                {
                    cout << "1- Add New Tour" << endl;
                    cout << "2- View All Tours" << endl;
                    cout << "3- Print the information of Tours highest price to lower price" << endl;
                    cout << "4- View All Users" << endl;
                    cout << "5- View All Feedbacks in order" << endl;
                    cout << "6- Exit" << endl;
                    cout << " Your Option---";
                    cin >> option;

                    if (option == 1)
                    {
                        for (int i = 0; i < 2; i++)
                        {
                            cout << "(Add New Tour)" << endl;
                            cout << "Enter Tour Name:";
                            cin >> tour_Name[i];
                            cout << "Enter Tour Price:";
                            cin >> tour_Price[i];
                            cout << "Enter Tour Duration:";
                            cin >> tour_Duration[i];
                            cout << "Enter tour Location:";
                            cin >> tour_Location[i];
                            cout << "Tour Added Successfully" << endl;
                        }
                    }
                    else if (option == 2)
                    {
                        cout << "(View All Tours)" << endl;
                        cout << "You don't have any tour record" << endl;
                    }
                    else if (option == 3)
                    {
                        cout << "(Print the information of Tours highest price to lower price)" << endl;
                        cout << "You don't have any tour record" << endl;
                    }
                    else if (option == 4)
                    {
                        cout << "(View All Users)" << endl;
                        cout << "You don't have any user record" << endl;
                    }
                    else if (option == 5)
                    {
                        cout << "(View All Feedbacks)" << endl;
                        cout << "You don't have any feedback record" << endl;
                    }
                    else if (option == 6)
                    {
                        cout << "Exit" << endl;
                    }
                    else
                    {
                        cout << "Invalid Option" << endl;
                    }
                }
            }
            else
            {
                cout << "Invalid Admin Name or Password" << endl;
            }
        }
        else if (option == 2)
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "(User Sign Up)" << endl;
                cout << "Enter User Name: ";
                cin >> user_Name[i];
                cout << "Enter User Password: ";
                cin >> user_Password[i];
                cout << "User Sign Up Successfully" << endl;
            }
        }
        else if (option == 3)
        {
            cout << "(User Login)" << endl;
            cout << "Enter User Name: ";
            cin >> user_Name;
            cout << "Enter User Password: ";
            cin >> user_Password;

            if (user_Name == user1_Name && user_Password == user1_Password)
            {
                cout << "Welcome " << user_Name << endl;
                cout << "Select an option from the following:" << endl;
                cout << "1- View All Tours from highest to lowest price" << endl;
                cout << "2- Book a Tour" << endl;
                cout << "3- give feedback out of 10" << endl;
                cout << "4- Exit" << endl;
                cout << " Your Option---";
                cin >> option;

                if (option == 1)
                {
                    cout << "(View All Tours)" << endl;
                    cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;
                    if (tour1_Price > tour2_Price)
                    {
                        cout << tour1_Name << "\t \t" << tour1_Price << "\t \t" << tour1_Duration << "\t \t" << tour1_Location << endl;
                        cout << tour2_Name << "\t \t" << tour2_Price << "\t \t" << tour2_Duration << "\t \t" << tour2_Location << endl;
                    }
                    else
                    {
                        cout << tour2_Name << "\t \t" << tour2_Price << "\t \t" << tour2_Duration << "\t \t" << tour2_Location << endl;
                        cout << tour1_Name << "\t \t" << tour1_Price << "\t \t" << tour1_Duration << "\t \t" << tour1_Location << endl;
                    }
                }
                else if (option == 2)
                {
                    cout << "(Book a Tour)" << endl;
                    cout << "Select a Tour to Book" << endl;
                    cout << "1- " << tour1_Name << endl;
                    cout << "2- " << tour2_Name << endl;
                    cout << "3- Exit" << endl;
                    cout << " Your Option---";
                    cin >> option;
                    if (option == 1)
                    {
                        cout << "Tour Booked Successfully" << endl;
                        cout << "Total Price: " << tour1_Price << endl;
                        cout << "Total Duration: " << tour1_Duration << endl;
                        cout << "Tour Location: " << tour1_Location << endl;
                    }
                    else if (option == 2)
                    {
                        cout << "Tour Booked Successfully" << endl;
                        cout << "Total Price: " << tour2_Price << endl;
                        cout << "Total Duration: " << tour2_Duration << endl;
                        cout << "Tour Location: " << tour2_Location << endl;
                    }

                    else if (option == 3)
                    {
                        cout << "Exit" << endl;
                    }
                    else
                    {
                        cout << "Invalid Option" << endl;
                    }
                }
                else if (option == 3)
                {
                    cout << "(Give feedback out of 10)" << endl;
                    cout << "Enter your feedback: ";
                    cin >> feedback2;
                    cout << "Feedback Submitted Successfully" << endl;
                }
                else if (option == 4)
                {
                    cout << "Exit" << endl;
                }
                else
                {
                    cout << "Invalid Option" << endl;
                }
            }
            else
            {
                cout << "Invalid User Name or Password" << endl;
            }
        }
    }
}
