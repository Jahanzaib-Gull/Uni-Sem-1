#include <iostream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

// funtion ptototypes
void main_header();
char main_menu();
void admin_login();
char admin_menu();
void add_tour();
void add_tour_record(string tour_name, string tour_destination, string tour_pickup, string tour_duration, string tour_discription, string tour_category, int tour_price);
void view_tours();
void view_tour_orderly();
void view_users();
void dlt_tour();
void dlt_user();
void user_signup();
void user_login();
void add_user(string user_name, string user_password, string email, string phone_number, string full_name);
char user_menu();
void view_profile();
void view_tour_by_category();
void book_tour();
void view_tour_discription();
void change_password();
void clear_screen();
void separation();
void give_feedback();
void add_feedback(string feedback, string feedback_stars);
void view_your_feedback();
void view_feedbacks();
void change_user_name();
void change_user_email();
void change_user_phone_number();
void change_user_full_name();
char update_user_info_menu();
void red();
void green();
void blue();
void yellow();

// data structures
const int MAX_TOURS = 20;
string tour_nameA[MAX_TOURS];
string tour_destinationA[MAX_TOURS];
string tour_pickupA[MAX_TOURS];
string tour_durationA[MAX_TOURS];
string tour_discriptionA[MAX_TOURS];
string tour_categoryA[MAX_TOURS];
int tour_priceA[MAX_TOURS];
int tour_count = 0;

const int MAX_USERS = 20;
string user_nameA[MAX_USERS];
string user_passwordA[MAX_USERS];
string user_emailA[MAX_USERS];
string user_phoneA[MAX_USERS];
string user_full_nameA[MAX_USERS];
string user_feedbackA[MAX_USERS];
string user_feedback_starsA[MAX_USERS];
int user_count = 0;

string admin_Name, admin_Password;
string logined_user_name, loggedin_user_password;

// main funtion
main()
{
    char main_option = ' ';
    while (true)
    {
        system("CLS");
        green();
        main_header();
        main_option = main_menu();
        if (main_option == '1')
        {
            system("CLS");
            main_header();
            admin_login();
            char admin_option = ' ';
            while (true)
            {
                system("CLS");
                red();
                main_header();
                admin_option = admin_menu();
                system("CLS");
                main_header();
                if (admin_option == '1')
                {
                    add_tour();
                }
                else if (admin_option == '2')
                {
                    view_tours();
                }
                else if (admin_option == '3')
                {
                    view_tour_orderly();
                }
                else if (admin_option == '4')
                {
                    view_users();
                }
                else if (admin_option == '5')
                {
                    view_feedbacks();
                }
                else if (admin_option == '6')
                {
                    dlt_tour();
                }
                else if (admin_option == '7')
                {
                    dlt_user();
                }
                else if (admin_option == '8')
                {
                    break;
                }
                else
                {
                    cout << "Invalid option. Please try again." << endl;
                }
                clear_screen();
            }
        }
        else if (main_option == '2')
        {
            system("CLS");
            yellow();
            main_header();
            user_signup();
            clear_screen();
        }
        else if (main_option == '3')
        {
            system("CLS");
            main_header();
            user_login();
            char user_option = ' ';
            while (true)
            {
                system("CLS");
                blue();
                main_header();
                user_option = user_menu();
                system("CLS");
                main_header();
                if (user_option == '1')
                {
                    view_profile();
                }
                else if (user_option == '2')
                {
                    view_tour_orderly();
                }
                else if (user_option == '3')
                {
                    view_tour_by_category();
                }
                else if (user_option == '4')
                {
                    view_tour_discription();
                }
                else if (user_option == '5')
                {
                    book_tour();
                }
                else if (user_option == '6')
                {
                    char update_option = ' ';
                    while (true)
                    {
                        system("CLS");
                        main_header();
                        update_option = update_user_info_menu();
                        if (update_option == '1')
                        {
                            change_user_name();
                        }
                        else if (update_option == '2')
                        {
                            change_password();
                        }
                        else if (update_option == '3')
                        {
                            change_user_email();
                        }
                        else if (update_option == '4')
                        {
                            change_user_phone_number();
                        }
                        else if (update_option == '5')
                        {
                            change_user_full_name();
                        }
                        else if (update_option == '6')
                        {
                            break;
                        }
                        else
                        {
                            cout << "Invalid option. Please try again." << endl;
                        }
                        clear_screen();
                    }
                }
                else if (user_option == '7')
                {
                    give_feedback();
                }
                else if (user_option == '8')
                {
                    view_your_feedback();
                }
                else if (user_option == '9')
                {
                    break;
                }
                else
                {
                    cout << "Invalid option. Please try again." << endl;
                }
                clear_screen();
            }
        }
        else if (main_option == '4')
        {
            cout << "Thank you for using the Tour Management System." << endl;
            break;
        }
        else
        {
            cout << "Invalid option. Please try again." << endl;
            clear_screen();
        }
    }
}

// functions
void main_header()
{
    cout << "******************************************************************" << endl;
    cout << "*                    TOUR MANAGEMENT SYSTEM                      *" << endl;
    cout << "******************************************************************" << endl;
    cout << endl;
}
char main_menu()
{
    cout << "Main Menu -->" << endl;
    separation();
    cout << "1- Admin Login" << endl;
    cout << "2- User Sign Up" << endl;
    cout << "3- User Login" << endl;
    cout << "4- Exit" << endl;
    cout << " Your Option---";
    char option;
    cin >> option;
    return option;
}
void admin_login()
{
    cout << "Admin Login -->" << endl;
    separation();
    cout << "Enter Admin Name: ";
    cin >> admin_Name;
    cout << "Enter Admin Password: ";
    cin >> admin_Password;
    if (admin_Name == "admin" && admin_Password == "admin123")
    {
        cout << "Welcome " << admin_Name << endl;
    }
    else
    {
        cout << "Enter correct username or password..." << endl;
        clear_screen();
        main_header();
        admin_login();
    }
}
char admin_menu()
{
    cout << "Admin Menu -->" << endl;
    separation();
    cout << "1- Add New Tour" << endl;
    cout << "2- View All Tours" << endl;
    cout << "3- Print the record in price order" << endl;
    cout << "4- View All Users" << endl;
    cout << "5- View All Feedbacks in order" << endl;
    cout << "6- Delete Tour" << endl;
    cout << "7- Delete User" << endl;
    cout << "8- Exit" << endl;
    cout << " Your Option---";
    char option;
    cin >> option;
    return option;
}
void add_tour()
{
    if (tour_count >= MAX_TOURS)
    {
        cout << "Tour limit reached." << endl;
        return;
    }
    string tour_name, tour_destination, tour_pickup, tour_duration, tour_discription, tour_category;
    int tour_price;
    cout << "--------Add New Tour--------" << endl;
    cin.ignore();
    cout << "Enter Tour name: ";
    getline(cin, tour_name);
    cout << "Enter Tour destination: ";
    cin >> tour_destination;
    cout << "Enter Tour pickup point: ";
    cin >> tour_pickup;
    cin.ignore();
    cout << "Enter Tour duration: ";
    getline(cin, tour_duration);
    cout << "Enter Tour category: ";
    cin >> tour_category;
    cout << "Enter Tour price: ";
    cin >> tour_price;
    cin.ignore();
    cout << "Enter Tour discription: ";
    getline(cin, tour_discription);
    add_tour_record(tour_name, tour_destination, tour_pickup, tour_duration, tour_discription, tour_category, tour_price);
}
void add_tour_record(string tour_name, string tour_destination, string tour_pickup, string tour_duration, string tour_discription, string tour_category, int tour_price)
{
    tour_nameA[tour_count] = tour_name;
    tour_destinationA[tour_count] = tour_destination;
    tour_pickupA[tour_count] = tour_pickup;
    tour_durationA[tour_count] = tour_duration;
    tour_discriptionA[tour_count] = tour_discription;
    tour_categoryA[tour_count] = tour_category;
    tour_priceA[tour_count] = tour_price;
    tour_count++;
}
void view_tours()
{
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
    cout << "-----------All Tours-----------" << endl;
    cout << "Tour Name\tTour Price\tTour Duration\tTour Pickup\tTour destination\tTour Category" << endl;
    for (int i = 0; i < tour_count; i++)
    {
        cout << tour_nameA[i] << "\t \t" << tour_priceA[i] << "\t \t" << tour_durationA[i] << "\t \t" << tour_pickupA[i] << "\t \t" << tour_destinationA[i] << "\t \t" << tour_categoryA[i] << endl;
    }
}
void view_tour_orderly()
{
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
    // higher to lower
    cout << "-----------Tours in order of price-----------" << endl;
    cout << "Tour Name\tTour Price\tTour Duration\tTour Pickup\tTour destination\tTour Category" << endl;
    for (int i = 0; i < tour_count; i++)
    {
        for (int j = i + 1; j < tour_count; j++)
        {
            if (tour_priceA[i] > tour_priceA[j])
            {
                string temp_name = tour_nameA[i];
                tour_nameA[i] = tour_nameA[j];
                tour_nameA[j] = temp_name;

                int temp_price = tour_priceA[i];
                tour_priceA[i] = tour_priceA[j];
                tour_priceA[j] = temp_price;

                string temp_duration = tour_durationA[i];
                tour_durationA[i] = tour_durationA[j];
                tour_durationA[j] = temp_duration;

                string temp_pickup = tour_pickupA[i];
                tour_pickupA[i] = tour_pickupA[j];
                tour_pickupA[j] = temp_pickup;

                string temp_destination = tour_destinationA[i];
                tour_destinationA[i] = tour_destinationA[j];
                tour_destinationA[j] = temp_destination;

                string temp_category = tour_categoryA[i];
                tour_categoryA[i] = tour_categoryA[j];
                tour_categoryA[j] = temp_category;

                string temp_discription = tour_discriptionA[i];
                tour_discriptionA[i] = tour_discriptionA[j];
                tour_discriptionA[j] = temp_discription;
            }
        }
    }
    for (int i = tour_count-1; i>=0 ; i--)
    {
        cout << tour_nameA[i] << "\t \t" << tour_priceA[i] << "\t \t" << tour_durationA[i] << "\t \t" << tour_pickupA[i] << "\t \t" << tour_destinationA[i] << "\t \t" << tour_categoryA[i] << endl;
    }
}
void view_users()
{
    if (user_count == 0)
    {
        cout << "No users available." << endl;
        return;
    }
    cout << "-----------All Users-----------" << endl;
    cout << "User Name\tUser Password\tUser Email\tUser Phone Number\tUser Full Name" << endl;
    for (int i = 0; i < user_count; i++)
    {
        cout << user_nameA[i] << "\t \t" << user_passwordA[i] << "\t \t" << user_emailA[i] << "\t \t" << user_phoneA[i] << "\t \t" << user_full_nameA[i] << endl;
    }
}
void user_signup()
{
    if (user_count >= MAX_USERS)
    {
        cout << "User limit reached." << endl;
        return;
    }
    cout << "User Sign Up -->" << endl;
    separation();
    string user_name, user_password, full_name, email, phone_number;
    cin.ignore();
    cout << "Enter Full Name: ";
    getline(cin, full_name);
    cout << "Enter User Name: ";
    cin >> user_name;
    cout << "Enter User Password: ";
    cin >> user_password;
    cout << "Enter Email: ";
    cin >> email;
    cout << "Enter Phone Number: ";
    cin >> phone_number;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == user_name)
        {
            cout << "User name already exists. Please choose a different one." << endl;
            clear_screen();
            main_header();
            user_signup();
            return;
        }
    }
    cout << "User signed up successfully." << endl;
    add_user(user_name, user_password, email, phone_number, full_name);
}
void add_user(string user_name, string user_password, string email, string phone_number, string full_name)
{
    user_nameA[user_count] = user_name;
    user_passwordA[user_count] = user_password;
    user_emailA[user_count] = email;
    user_phoneA[user_count] = phone_number;
    user_full_nameA[user_count] = full_name;
    user_count++;
}
void user_login()
{
    cout << "User Login -->" << endl;
    separation();
    string user_name, user_password;
    cout << "Enter User Name: ";
    cin >> user_name;
    cout << "Enter User Password: ";
    cin >> user_password;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == user_name && user_passwordA[i] == user_password)
        {
            cout << "Welcome " << user_nameA[i] << endl;
            logined_user_name = user_nameA[i];
            loggedin_user_password = user_passwordA[i];
            user_feedback_starsA[i] = " ";
            return;
        }
    }
    cout << "Enter correct username or password." << endl;
    clear_screen();
    main_header();
    user_login();
}
void dlt_user()
{
    if (user_count == 0)
    {
        cout << "No users available to delete." << endl;
        return;
    }
    cout << "Delete User -->" << endl;
    separation();
    string user_name;
    cout << "Enter User Name to delete: ";
    cin >> user_name;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == user_name)
        {
            for (int j = i; j < user_count - 1; j++)
            {
                user_nameA[j] = user_nameA[j + 1];
                user_passwordA[j] = user_passwordA[j + 1];
                user_emailA[j] = user_emailA[j + 1];
                user_phoneA[j] = user_phoneA[j + 1];
                user_full_nameA[j] = user_full_nameA[j + 1];
                user_feedbackA[j] = user_feedbackA[j + 1];
                user_feedback_starsA[j] = user_feedback_starsA[j + 1];
            }
            user_count--;
            cout << "User deleted successfully." << endl;
            return;
        }
    }
    cout << "Enter correct username" << endl;
    clear_screen();
    main_header();
    dlt_user();
}
void dlt_tour()
{
    if (tour_count == 0)
    {
        cout << "No tours available to delete." << endl;
        return;
    }
    cout << "Delete Tour -->" << endl;
    separation();
    string tour_name;
    cout << "Enter Tour Name to delete: ";
    cin >> tour_name;
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_nameA[i] == tour_name)
        {
            for (int j = i; j < tour_count - 1; j++)
            {
                tour_nameA[j] = tour_nameA[j + 1];
                tour_destinationA[j] = tour_destinationA[j + 1];
                tour_pickupA[j] = tour_pickupA[j + 1];
                tour_durationA[j] = tour_durationA[j + 1];
                tour_discriptionA[j] = tour_discriptionA[j + 1];
                tour_categoryA[j] = tour_categoryA[j + 1];
                tour_priceA[j] = tour_priceA[j + 1];
            }
            tour_count--;
            cout << "Tour deleted successfully." << endl;
            return;
        }
    }
    cout << "Enter correct Tour name" << endl;
    clear_screen();
    main_header();
    dlt_tour();
}
char user_menu()
{
    cout << "User Menu -->" << endl;
    separation();
    cout << "1- view your profile" << endl;
    cout << "2- View tours orderly" << endl;
    cout << "3- View tours by category" << endl;
    cout << "4- View tour discription" << endl;
    cout << "5- Book a tour" << endl;
    cout << "6- Change password" << endl;
    cout << "7- Give feedback" << endl;
    cout << "8- View your feedback" << endl;
    cout << "9- Exit" << endl;
    cout << " Your Option---";
    char option;
    cin >> option;
    return option;
}
void view_profile()
{
    cout << "--------User Profile--------" << endl;
    cout << "User Name: " << logined_user_name << endl;
    cout << "User Password: " << loggedin_user_password << endl;
    cout << "User Email: " << user_emailA[user_count] << endl;
    cout << "User Phone Number: " << user_phoneA[user_count] << endl;
    cout << "User Full Name: " << user_full_nameA[user_count] << endl;
}
void view_tour_by_category()
{
    cout << "--------View Tours by Category--------" << endl;
    string category;
    cout << "Enter Tour Category: ";
    cin >> category;
    cout << "-----------Tours in " << category << " Category-----------" << endl;
    cout << "Tour Name\tTour Price\tTour Duration\tTour Pickup\tTour destination" << endl;
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_categoryA[i] == category)
        {
            cout << tour_nameA[i] << "\t \t" << tour_priceA[i] << "\t \t" << tour_durationA[i] << "\t \t" << tour_pickupA[i] << "\t \t" << tour_destinationA[i] << endl;
        }
    }
}
void book_tour()
{
    cout << "--------Book a Tour--------" << endl;
    string tour_name;
    cout << "Enter Tour Name to book: ";
    cin >> tour_name;
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_nameA[i] == tour_name)
        {
            cout << tour_name << "Tour booked successfully." << endl;
            return;
        }
    }
    cout << "Enter correct Tour name" << endl;
    clear_screen();
    main_header();
    book_tour();
}
void view_tour_discription()
{
    cout << "--------Tour Discription--------" << endl;
    string tour_name;
    cout << "Enter Tour Name to view discription: ";
    cin >> tour_name;
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_nameA[i] == tour_name)
        {
            cout << "Tour Discription: " << endl
                 << "\t" << tour_discriptionA[i] << endl;
            return;
        }
    }
    cout << "Enter correct Tour name" << endl;
    clear_screen();
    main_header();
    view_tour_discription();
}
char update_user_info_menu()
{
    cout << "Update User Info Menu -->" << endl;
    separation();
    cout << "1- Update User Name" << endl;
    cout << "2- Update User Password" << endl;
    cout << "3- Update User Email" << endl;
    cout << "4- Update User Phone Number" << endl;
    cout << "5- Update Full Name" << endl;
    cout << "6- Exit" << endl;
    cout << " Your Option---";
    char option;
    cin >> option;
    return option;
}
void change_password()
{
    cout << "--------Change Password--------" << endl;
    string new_password;
    cout << "Enter New Password: ";
    cin >> new_password;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_passwordA[i] = new_password;
            cout << "Password changed successfully." << endl;
            return;
        }
    }
}
void change_user_name()
{
    cout << "--------Change User Name--------" << endl;
    string new_user_name;
    cout << "Enter New User Name: ";
    cin >> new_user_name;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_nameA[i] = new_user_name;
            cout << "User name changed successfully." << endl;
            return;
        }
    }
}
void change_user_email()
{
    cout << "--------Change User Email--------" << endl;
    string new_user_email;
    cout << "Enter New User Email: ";
    cin >> new_user_email;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_emailA[i] = new_user_email;
            cout << "User email changed successfully." << endl;
            return;
        }
    }
}
void change_user_phone_number()
{
    cout << "--------Change User Phone Number--------" << endl;
    string new_user_phone_number;
    cout << "Enter New User Phone Number: ";
    cin >> new_user_phone_number;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_phoneA[i] = new_user_phone_number;
            cout << "User phone number changed successfully." << endl;
            return;
        }
    }
}
void change_user_full_name()
{
    cout << "--------Change User Full Name--------" << endl;
    string new_user_full_name;
    cout << "Enter New User Full Name: ";
    cin.ignore();
    getline(cin, new_user_full_name);
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_full_nameA[i] = new_user_full_name;
            cout << "User full name changed successfully." << endl;
            return;
        }
    }
}
void clear_screen()
{
    cout << "Press any key to continue" << endl;
    getch();
    system("CLS");
}
void separation()
{
    cout << "--------------------------------------------------" << endl;
}
void give_feedback()
{
    cout << "--------Feedback--------" << endl;
    string feedback, feedback_stars;
    cout << "Enter your feedback stars (1-5): ";
    cin >> feedback_stars;
    cout << "Enter your feedback: ";
    cin.ignore();
    getline(cin, feedback);
    add_feedback(feedback, feedback_stars);
}
void add_feedback(string feedback, string feedback_stars)
{
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_feedback_starsA[i] = feedback_stars;
            user_feedbackA[i] = feedback;
            cout << "Feedback added successfully." << endl;
            return;
        }
    }
}
void view_your_feedback()
{
    cout << "--------Your Feedback--------" << endl;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            cout << "Feedback Stars: " << user_feedback_starsA[i] << endl;
            cout << "Feedback: " << endl
                 << "\t" << user_feedbackA[i] << endl;
            return;
        }
    }
}
void view_feedbacks()
{
    cout << "--------All Feedbacks--------" << endl;
    for (int i = 0; i < user_count; i++)
    {
        if (user_feedback_starsA[i] == " ")
        {
            continue;
        }
        cout << "User Name: " << user_nameA[i] << endl;
        cout << "Feedback Stars: " << user_feedback_starsA[i] << endl;
        cout << "Feedback: " << endl
             << "\t" << user_feedbackA[i] << endl;
        separation();
    }
}
void green()
{
    system("color 02");
}
void red()
{
    system("color 04");
}
void blue()
{
    system("color 01");
}
void yellow()
{
    system("color 06");
}