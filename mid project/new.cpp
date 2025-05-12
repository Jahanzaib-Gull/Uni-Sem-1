#include <iostream>
using namespace std;

main()
{
    string tour_Name[2], tour_Price[2], tour_Duration[2], tour_Location[2];
    string user_Name[2], user_Password[2];
    string feedback[2];
    string admin_Name, admin_Password, user__Name, user__Password;
    int tour_Count = -1, MAX_TOURS = 1;
    int user_Count = -1, MAX_USERS = 1;
    int feedback_count = -1, MAX_FEEDBACK = 1;

    int option = 0;
    while (option != 4)
    {
        cout << "******************************************************************" << endl;
        cout << "*                    TOUR MANAGEMENT SYSTEM                      *" << endl;
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
            if (admin_Name == "admin" && admin_Password == "admin123")
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
                    cout << "6- Delete Tour" << endl;
                    cout << "7- Delete User" << endl;
                    cout << "8- Exit" << endl;
                    cout << " Your Option---";
                    cin >> option;

                    cout << endl;

                    if (option == 1)
                    {
                        char continue_tour = 'y';

                        while (continue_tour == 'y' || continue_tour == 'Y')
                        {
                            tour_Count++;
                            cout << "(Add New Tour)" << endl;
                            cout << "Enter Tour Name: ";
                            cin >> tour_Name[tour_Count];
                            cout << "Enter Tour Price: ";
                            cin >> tour_Price[tour_Count];
                            cout << "Enter Tour Duration: ";
                            cin >> tour_Duration[tour_Count];
                            cout << "Enter tour Location: ";
                            cin >> tour_Location[tour_Count];
                            cout << "Tour Added Successfully" << endl;

                            cout << "Do you want to add another tour? (y/n): ";
                            cin >> continue_tour;

                            if (tour_Count >= MAX_TOURS)
                            {
                                cout << "Maximum number of tours reached." << endl;
                                break;
                            }
                        }
                        cout << "Tour adding process finished." << endl;
                    }

                    else if (option == 2)
                    {
                        cout << "(View All Tours)" << endl;

                        if (tour_Count == -1)
                        {
                            cout << "No tours have been added yet." << endl;
                        }
                        else
                        {
                            cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;

                            for (int i = 0; i <= tour_Count; i++)
                            {
                                cout << tour_Name[i] << "\t \t" << tour_Price[i] << "\t \t" << tour_Duration[i] << "\t \t" << tour_Location[i] << endl;
                            }
                        }
                    }
                    else if (option == 3)
                    {
                        cout << "(Tours highest to lower price)" << endl;
                        if (tour_Count == -1)
                        {
                            cout << "No tours have been added yet." << endl;
                        }
                        else if (tour_Count == 0)
                        {
                            cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;
                            cout << tour_Name[0] << "\t \t" << tour_Price[0] << "\t \t" << tour_Duration[0] << "\t \t" << tour_Location[0] << endl;
                        }
                        else if (tour_Count == 1)
                        {
                            cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;
                            if (tour_Price[0] > tour_Price[1])
                            {
                                cout << tour_Name[0] << "\t \t" << tour_Price[0] << "\t \t" << tour_Duration[0] << "\t \t" << tour_Location[0] << endl;
                                cout << tour_Name[1] << "\t \t" << tour_Price[1] << "\t \t" << tour_Duration[1] << "\t \t" << tour_Location[1] << endl;
                            }
                            else
                            {
                                cout << tour_Name[1] << "\t \t" << tour_Price[1] << "\t \t" << tour_Duration[1] << "\t \t" << tour_Location[1] << endl;
                                cout << tour_Name[0] << "\t \t" << tour_Price[0] << "\t \t" << tour_Duration[0] << "\t \t" << tour_Location[0] << endl;
                            }
                        }
                    }
                    else if (option == 4)
                    {
                        cout << "(View All Users)" << endl;
                        if (user_Count == -1)
                        {
                            cout << "No users have signed up yet." << endl;
                        }
                        for (int i = 0; i <= user_Count; i++)
                        {
                            cout << "User Name: " << user_Name[i] << endl;
                            cout << "User Password: " << user_Password[i] << endl;
                            cout << endl;
                        }
                    }
                    else if (option == 5)
                    {
                        cout << "(View All Feedbacks)" << endl;
                        if (feedback_count == -1)
                        {
                            cout << "No feedbacks have been submitted yet." << endl;
                            break;
                        }
                        for (int i = 0; i <= feedback_count; i++)
                        {
                            cout << i + 1 << "- Feedback: " << feedback[i] << "/10" << endl;
                            cout << endl;
                        }
                    }

                    else if (option == 6)
                    {
                        cout << "(Delete Tour)" << endl;
                        if (tour_Count == -1)
                        {
                            cout << "No tours have been added yet." << endl;
                            break;
                        }
                        cout << "Select a Tour to Delete" << endl;
                        for (int i = 0; i <= tour_Count; i++)
                        {
                            cout << i + 1 << "- " << tour_Name[i] << endl;
                        }
                        cout << " Your Option---";
                        cin >> option;

                        if (option == 1)
                        {
                            tour_Duration[0] = "";
                            tour_Location[0] = "";
                            tour_Name[0] = "";
                            tour_Price[0] = "";
                            cout << "Tour Deleted Successfully" << endl;
                            tour_Count--;
                        }
                        else if (option == 2)
                        {
                            tour_Duration[1] = "";
                            tour_Location[1] = "";
                            tour_Name[1] = "";
                            tour_Price[1] = "";
                            cout << "Tour Deleted Successfully" << endl;
                            tour_Count--;
                        }
                        else
                        {
                            cout << "Invalid Option" << endl;
                        }
                    }
                    else if (option == 7)
                    {
                        cout << "(Delete User)" << endl;
                        if (user_Count == -1)
                        {
                            cout << "No users have signed up yet." << endl;
                            break;
                        }
                        cout << "Select a User to Delete" << endl;
                        for (int i = 0; i <= user_Count; i++)
                        {
                            cout << i + 1 << "- " << user_Name[i] << endl;
                        }
                        cout << " Your Option---";
                        cin >> option;

                        if (option == 1)
                        {
                            user_Name[0] = "";
                            user_Password[0] = "";
                            cout << "User Deleted Successfully" << endl;
                            user_Count--;
                        }
                        else if (option == 2)
                        {
                            user_Name[1] = "";
                            user_Password[1] = "";
                            cout << "User Deleted Successfully" << endl;
                            user_Count--;
                        }
                        else
                        {
                            cout << "Invalid Option" << endl;
                        }
                    }
                    else if (option == 8)
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
            char continue_signup = 'y';

            while (continue_signup == 'y' || continue_signup == 'Y')
            {
                user_Count++;
                cout << "(User Sign Up)" << endl;
                cout << "Enter User Name: ";
                cin >> user_Name[user_Count];
                cout << "Enter User Password: ";
                cin >> user_Password[user_Count];
                cout << "User Sign Up Successfully" << endl;

                cout << "Do you want to sign up another user? (y/n): ";
                cin >> continue_signup;

                if (user_Count >= MAX_USERS)
                {
                    cout << "Maximum number of users reached." << endl;
                    break;
                }
            }
            cout << "Sign up process finished." << endl;
        }
        else if (option == 3)
        {
            cout << "(User Login)" << endl;
            cout << "Enter User Name: ";
            cin >> user__Name;
            cout << "Enter User Password: ";
            cin >> user__Password;

            bool user_found = false;
            for (int i = 0; i <= user_Count; i++)
            {
                if (user_Name[i] == user__Name && user_Password[i] == user__Password)
                {
                    user_found = true;
                    break;
                }
            }
            if (user_found)
            {
                while (option != 4)
                {
                    cout << "Welcome " << user__Name << endl;
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
                        if (tour_Count == -1)
                        {
                            cout << "No tours have been added yet." << endl;
                        }
                        else if (tour_Count == 0)
                        {
                            cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;
                            cout << tour_Name[0] << "\t \t" << tour_Price[0] << "\t \t" << tour_Duration[0] << "\t \t" << tour_Location[0] << endl;
                        }
                        else if (tour_Count == 1)
                        {
                            cout << "Tour Name\tTour Price\tTour Duration\tTour Location" << endl;
                            if (tour_Price[0] > tour_Price[1])
                            {
                                cout << tour_Name[0] << "\t \t" << tour_Price[0] << "\t \t" << tour_Duration[0] << "\t \t" << tour_Location[0] << endl;
                                cout << tour_Name[1] << "\t \t" << tour_Price[1] << "\t \t" << tour_Duration[1] << "\t \t" << tour_Location[1] << endl;
                            }
                            else
                            {
                                cout << tour_Name[1] << "\t \t" << tour_Price[1] << "\t \t" << tour_Duration[1] << "\t \t" << tour_Location[1] << endl;
                                cout << tour_Name[0] << "\t \t" << tour_Price[0] << "\t \t" << tour_Duration[0] << "\t \t" << tour_Location[0] << endl;
                            }
                        }
                    }
                    else if (option == 2)
                    {

                        while (option != 3)
                        {
                            cout << "(Book a Tour)" << endl;
                            if (tour_Count == -1)
                            {
                                cout << "No tours have been added yet." << endl;
                                break;
                            }
                            cout << "Select a Tour to Book" << endl;
                            for (int i = 0; i <= tour_Count; i++)
                            {
                                cout << i + 1 << "- " << tour_Name[i] << endl;
                            }
                            cout << "3- Exit" << endl;
                            cout << " Your Option---";
                            cin >> option;
                            cout << endl;

                            if (option == 1)
                            {
                                cout << "Tour Name: " << tour_Name[0] << endl;
                                cout << "Tour Price: " << tour_Price[0] << endl;
                                cout << "Tour Duration: " << tour_Duration[0] << endl;
                                cout << "Tour Location: " << tour_Location[0] << endl;
                                cout << "Booking Successful" << endl;
                            }
                            else if (option == 2)
                            {
                                cout << "Tour Name: " << tour_Name[1] << endl;
                                cout << "Tour Price: " << tour_Price[1] << endl;
                                cout << "Tour Duration: " << tour_Duration[1] << endl;
                                cout << "Tour Location: " << tour_Location[1] << endl;
                                cout << "Booking Successful" << endl;
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
                    }
                    else if (option == 3)
                    {
                        cout << "(Give Feedback)" << endl;
                        cout << "Enter your feedback out of 10: ";
                        cin >> feedback[0];
                        cout << "Feedback submitted successfully" << endl;
                        feedback_count++;
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
            }
            else
            {
                cout << "Invalid User Name or Password" << endl;
            }
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
}
