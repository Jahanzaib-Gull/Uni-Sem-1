#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

// function prototypes
void main_header();
void separation();
char main_menu();
void admin_login();
char admin_menu();
void add_tour();
void save_tours_to_file();
void load_tours_from_file();
void view_tours();
void view_tour_orderly();
void view_users();
void dlt_tour();
void dlt_user();
void user_signup();
void user_login();
void save_users_to_file();
void load_users_from_file();
string user_menu();
void view_profile();
void view_tour_by_category();
void update_user_info();
void change_user_name();
void change_password();
void change_user_email();
void change_user_phone();
void change_user_full_name();
void tour_discrription();
void clear_screen();
void give_feedback();
void view_your_feedback();
void view_feedbacks();
void about_us();
void green();
void book_tour_no_of_people_by_user();
void user_booking_details();
void view_all_users_booking_details();

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
int user_total_priceA[MAX_USERS];
string user_booked_tour_nameA[MAX_USERS];

int user_count = 0;

string admin_Name, admin_Password;
string logined_user_name, loggedin_user_password;
bool login_user = false; 
// main function
main()
{
    green();
    char main_option = ' ';
    while (true)
    {
        system("CLS");
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
                    view_all_users_booking_details();
                }
                else if (admin_option == '7')
                {
                    dlt_tour();
                }
                else if (admin_option == '8')
                {
                    dlt_user();
                }
                else if (admin_option == '9')
                {
                    cout << "Exiting..." << endl;
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
            main_header();
            user_signup();
        }
        else if (main_option == '3')
        {
            system("CLS");
            main_header();
            user_login();
            string user_option = " ";
            if (login_user == false)
            {
                cout << "User Login failed..." << endl;
                cout << "Please try again." << endl;

                continue;
            }
            while (true)
            {
                system("CLS");
                main_header();
                user_option = user_menu();
                system("CLS");
                main_header();
                if (user_option == "1")
                {
                    view_profile();
                }
                else if (user_option == "2")
                {
                    update_user_info();
                }
                else if (user_option == "3")
                {
                    view_tours();
                }
                else if (user_option == "4")
                {
                    view_tour_orderly();
                }
                else if (user_option == "5")
                {
                    view_tour_by_category();
                }
                else if (user_option == "6")
                {
                    tour_discrription();
                }
                else if (user_option == "7")
                {
                    book_tour_no_of_people_by_user();
                }
                else if (user_option == "8")
                {
                    user_booking_details();
                }
                else if (user_option == "9")
                {
                    give_feedback();
                }
                else if (user_option == "10")
                {
                    view_your_feedback();
                }
                else if (user_option == "11")
                {
                    about_us();
                }
                else if (user_option == "12")
                {
                    cout << "Exiting..." << endl;
                    login_user = false;
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

// other functions

void main_header()
{
    cout << "******************************************************************" << endl;
    cout << "*                    TOUR MANAGEMENT SYSTEM                      *" << endl;
    cout << "******************************************************************" << endl;
    cout << "*                      PRESTIGE  PATHWAYS                        *" << endl;
    cout << "******************************************************************" << endl;

    cout << endl;
}
void separation()
{
    cout << "------------------------------------------------------------------" << endl;
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
    while (true)
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
            break;
        }
        else
        {
            cout << "Invalid credentials. Please try again." << endl;
        }
    }
}
char admin_menu()
{
    cout << "Admin Menu -->" << endl;
    separation();
    cout << "1- Add Tour" << endl;
    cout << "2- View Tours" << endl;
    cout << "3- View Tour Orderly" << endl;
    cout << "4- View Users" << endl;
    cout << "5- View Feedbacks" << endl;
    cout << "6- View All Users Booking Details" << endl;
    cout << "7- Delete Tour" << endl;
    cout << "8- Delete User" << endl;
    cout << "9- Exit" << endl;
    cout << " Your Option---";
    char option;
    cin >> option;
    return option;
}
void add_tour()
{
    load_tours_from_file();
    if (tour_count >= MAX_TOURS)
    {
        cout << "Tour limit reached. Cannot add more tours." << endl;
        return;
    }
    cout << "Add Tour -->" << endl;
    separation();
    cout << "Enter Tour Name: ";
    cin.ignore();
    getline(cin, tour_nameA[tour_count]);
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_nameA[i] == tour_nameA[tour_count])
        {
            cout << "Tour name already exists." << endl;
            return;
        }
    }
    cout << "Enter Tour Destination: ";
    getline(cin, tour_destinationA[tour_count]);
    cout << "Enter Tour Pickup Point: ";
    getline(cin, tour_pickupA[tour_count]);
    cout << "Enter Tour Duration: ";
    getline(cin, tour_durationA[tour_count]);
    cout << "Enter Tour Price: ";
    cin >> tour_priceA[tour_count];
    cout << "Enter Tour Description: ";
    cin.ignore();
    getline(cin, tour_discriptionA[tour_count]);
    cout << "Enter Tour Category: ";
    getline(cin, tour_categoryA[tour_count]);
    tour_count++;
    cout << "Tour added successfully." << endl;
    save_tours_to_file();
}
void save_tours_to_file()
{
    fstream file("tours.txt", ios::out);
    if (!file)
    {
        cout << "Error opening file." << endl;
        return;
    }
    for (int i = 0; i < tour_count; i++)
    {
        file << tour_nameA[i] << ',' << tour_destinationA[i] << ',' << tour_pickupA[i] << ','
             << tour_durationA[i] << ',' << tour_discriptionA[i] << ',' << tour_categoryA[i]
             << ',' << tour_priceA[i] << endl;
    }
    file.close();
}
string getField(string record, int field)
{
    int commaCount = 1;
    string item;
    for (int x = 0; x < record.length(); x++)
    {
        if (record[x] == ',')
        {
            commaCount = commaCount + 1;
        }
        else if (commaCount == field)
        {
            item = item + record[x];
        }
    }
    return item;
}
void load_tours_from_file()
{
    tour_count = 0;
    fstream file("tours.txt", ios::in);
    string record;
    while (getline(file, record))
    {
        tour_nameA[tour_count] = getField(record, 1);
        tour_destinationA[tour_count] = getField(record, 2);
        tour_pickupA[tour_count] = getField(record, 3);
        tour_durationA[tour_count] = getField(record, 4);
        tour_discriptionA[tour_count] = getField(record, 5);
        tour_categoryA[tour_count] = getField(record, 6);
        tour_priceA[tour_count] = stoi(getField(record, 7));
        tour_count++;
        if (tour_count >= MAX_TOURS)
        {
            break;
        }
    }
    file.close();
}
void view_tours()
{
    load_tours_from_file();
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
    cout << "-----------All Tours-----------" << endl;
    cout << "Tour Name\tTour Price\tTour Duration\tTour Pickup\tTour destination\tTour Category" << endl;
    for (int i = 0; i < tour_count; i++)
    {
        cout << tour_nameA[i] << "\t\t" << tour_priceA[i] << "\t\t" << tour_durationA[i] << "\t\t" << tour_pickupA[i] << "\t\t" << tour_destinationA[i] << "\t\t" << tour_categoryA[i] << endl;
    }
}
void view_tour_orderly()
{
    load_tours_from_file();
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
    // higher to lower
    cout << "-----------Tours in order of price-----------" << endl;
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
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
    for (int i = tour_count - 1; i >= 0; i--)
    {
        cout << tour_nameA[i] << "\t\t" << tour_priceA[i] << "\t\t" << tour_durationA[i] << "\t\t" << tour_pickupA[i] << "\t\t" << tour_destinationA[i] << "\t\t" << tour_categoryA[i] << endl;
    }
    save_tours_to_file();
}
void view_users()
{
    load_users_from_file();
    if (user_count == 0)
    {
        cout << "No users available." << endl;
        return;
    }
    cout << "-----------All Users-----------" << endl;
    cout << "Username\tPassword\tEmail\t\t\t\tPhone Number\t\tFull Name" << endl;
    for (int i = 0; i < user_count; i++)
    {
        cout << user_nameA[i] << "\t\t" << user_passwordA[i] << "\t\t" << user_emailA[i] << "\t\t" << user_phoneA[i] << "\t\t" << user_full_nameA[i] << endl;
    }
}
void save_users_to_file()
{
    fstream file("users.txt", ios::out);
    if (!file)
    {
        cout << "Error opening file." << endl;
        return;
    }
    for (int i = 0; i < user_count; i++)
    {
        file << user_nameA[i] << ',' << user_passwordA[i] << ',' << user_emailA[i] << ','
             << user_phoneA[i] << ',' << user_full_nameA[i] << ',' << user_feedbackA[i]
             << ',' << user_feedback_starsA[i] << ',' << user_total_priceA[i] << ',' << user_booked_tour_nameA[i] << endl;
    }
    file.close();
}
void load_users_from_file()
{
    user_count = 0;
    fstream file("users.txt", ios::in);
    if (!file)
    {
        cout << "Error opening file." << endl;
        return;
    }
    string record;
    while (getline(file, record))

    {
        user_nameA[user_count] = getField(record, 1);
        user_passwordA[user_count] = getField(record, 2);
        user_emailA[user_count] = getField(record, 3);
        user_phoneA[user_count] = getField(record, 4);
        user_full_nameA[user_count] = getField(record, 5);
        user_feedbackA[user_count] = getField(record, 6);
        user_feedback_starsA[user_count] = getField(record, 7);
        user_total_priceA[user_count] = stoi(getField(record, 8));
        user_booked_tour_nameA[user_count] = getField(record, 9);
        user_count++;
        if (user_count >= MAX_USERS)
        {
            break;
        }
    }
    file.close();
}
void dlt_tour()
{
    load_users_from_file();
    load_tours_from_file();
    if (tour_count == 0)
    {
        cout << "No tours available to delete." << endl;
        return;
    }
    cout << "Delete Tour -->" << endl;
    separation();
    string tour_name;
    cout << "Enter Tour Name to delete: ";
    cin.ignore();
    getline(cin, tour_name);
    for (int i = 0; i < user_count; i++)
    {
        if (user_booked_tour_nameA[i] == tour_name)
        {
            user_booked_tour_nameA[i] = "";
            user_total_priceA[i] = 0;
        }
    }
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_nameA[i] == tour_name)
        {

            for (int j = i; j < tour_count - 1; j++)
            {
                tour_nameA[j] = tour_nameA[j + 1];
                tour_priceA[j] = tour_priceA[j + 1];
                tour_durationA[j] = tour_durationA[j + 1];
                tour_pickupA[j] = tour_pickupA[j + 1];
                tour_destinationA[j] = tour_destinationA[j + 1];
                tour_categoryA[j] = tour_categoryA[j + 1];
                tour_discriptionA[j] = tour_discriptionA[j + 1];
            }
            tour_count--;
            cout << "Tour deleted successfully." << endl;
            save_tours_to_file();
            save_users_to_file();
            return;
        }
    }
}

void dlt_user()
{
    load_users_from_file();
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
                user_total_priceA[j] = user_total_priceA[j + 1];
                user_booked_tour_nameA[j] = user_booked_tour_nameA[j + 1];
            }
            user_count--;
            cout << "User deleted successfully." << endl;
            save_users_to_file();
            return;
        }
    }
}
void user_signup()
{
    load_users_from_file();
    if (user_count >= MAX_USERS)
    {
        cout << "User limit reached." << endl;
        return;
    }
    cout << "User Sign Up -->" << endl;
    separation();
    cout << "Enter UserName: ";
    cin.ignore();
    getline(cin, user_nameA[user_count]);
    cout << "Enter User Password: ";
    getline(cin, user_passwordA[user_count]);
    cout << "Enter User Full Name: ";
    getline(cin, user_full_nameA[user_count]);
    cout << "Enter User Email: ";
    getline(cin, user_emailA[user_count]);
    cout << "Enter User Phone Number: ";
    getline(cin, user_phoneA[user_count]);
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == user_nameA[user_count])
        {
            cout << "User name already exists." << endl;
            cout << "User Sign Up failed..." << endl;
            cout << "Please choose a different user name." << endl;
            return;
        }
    }
    user_feedbackA[user_count] = " ";
    user_feedback_starsA[user_count] = " ";
    user_total_priceA[user_count] = 0;
    user_booked_tour_nameA[user_count] = "";
    user_count++;
    cout << "User signed up successfully." << endl;
    save_users_to_file();
}
void user_login()
{
    load_users_from_file();
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
            login_user = true;
            return;
        }
    }
}
string user_menu()
{
    cout << "User Menu -->" << endl;
    separation();
    cout << "1- View Profile" << endl;
    cout << "2- Update Profile" << endl;
    cout << "3- View Tours" << endl;
    cout << "4- View Tour Orderly" << endl;
    cout << "5- View Tour by Category" << endl;
    cout << "6- View Tour Description" << endl;
    cout << "7- Book a Tour" << endl;
    cout << "8- View Booking Details" << endl;
    cout << "9- Give Feedback" << endl;
    cout << "10- View Your Feedback" << endl;
    cout << "11- About us " << endl;
    cout << "12- Exit" << endl;
    cout << " Your Option---";
    string option;
    cin >> option;
    return option;
}
void view_profile()
{
    load_users_from_file();
    cout << "User Profile -->" << endl;
    separation();
    cout << "User Name: " << logined_user_name << endl;
    cout << "User Password: " << loggedin_user_password << endl;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            cout << "User Email: " << user_emailA[i] << endl;
            cout << "User Phone Number: " << user_phoneA[i] << endl;
            cout << "User Full Name: " << user_full_nameA[i] << endl;
            break;
        }
    }
}
void view_tour_by_category()
{
    load_tours_from_file();
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
    cout << "View Tours by Category -->" << endl;
    separation();
    string category;
    cout << "Enter Tour Category: ";
    cin.ignore();
    getline(cin, category);
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
void update_user_info()
{
    load_users_from_file();
    cout << "Update User Info -->" << endl;
    separation();
    char option;
    cout << "1- Update UserName" << endl;
    cout << "2- Update User Password" << endl;
    cout << "3- Update User Email" << endl;
    cout << "4- Update User Phone Number" << endl;
    cout << "5- Update Full Name" << endl;
    cout << "6- Exit" << endl;
    cout << " Your Option---";
    cin >> option;

    if (option == '1')
    {
        change_user_name();
    }
    else if (option == '2')
    {
        change_password();
    }
    else if (option == '3')
    {
        change_user_email();
    }
    else if (option == '4')
    {
        change_user_phone();
    }
    else if (option == '5')
    {
        change_user_full_name();
    }
    else if (option == '6')
    {
        cout << "Exiting..." << endl;
        return;
    }
    else
    {
        cout << "Invalid option. Please try again." << endl;
    }
    save_users_to_file();
}
void change_password()
{
    cout << "--------Change User Password--------" << endl;
    string new_user_password;
    cout << "Enter New User Password: ";
    cin.ignore();
    getline(cin, new_user_password);
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_passwordA[i] = new_user_password;
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
    cin.ignore();
    getline(cin, new_user_name);
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_nameA[i] = new_user_name;
            logined_user_name = user_nameA[i];
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
    cin.ignore();
    getline(cin, new_user_email);
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
void change_user_phone()
{
    cout << "--------Change User Phone Number--------" << endl;
    string new_user_phone_number;
    cout << "Enter New User Phone Number: ";
    cin.ignore();
    getline(cin, new_user_phone_number);
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
void tour_discrription()
{
    load_tours_from_file();
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
    string tour_name;
    cout << "Enter Tour Name to view description: ";
    cin.ignore();
    getline(cin, tour_name);
    cout << "--------Tour Discription--------" << endl;
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_nameA[i] == tour_name)
        {
            cout << "Tour Name: " << tour_nameA[i] << endl;
            cout << "Tour Price: " << tour_priceA[i] << endl;
            cout << "Tour Duration: " << tour_durationA[i] << endl;
            cout << "Tour Pickup Point: " << tour_pickupA[i] << endl;
            cout << "Tour Destination: " << tour_destinationA[i] << endl;
            cout << "Tour Category: " << tour_categoryA[i] << endl;
            cout << "Tour Description: " << endl
                 << "\t" << tour_discriptionA[i] << endl;
            return;
        }
    }
    cout << "Tour not found." << endl;
}
void clear_screen()
{
    cout << "Press any key to continue" << endl;
    getch();
    system("CLS");
}
void give_feedback()
{
    cout << "--------Feedback--------" << endl;
    cout << "Enter your feedback stars (1-5): ";
    cin.ignore();
    string feedback_stars;
    getline(cin, feedback_stars);
    cout << "Enter your feedback: ";
    string feedback;
    getline(cin, feedback);
    if (feedback_stars.empty() || feedback.empty())
    {
        cout << "All fields are required." << endl;
        return;
    }
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_feedback_starsA[i] = feedback_stars;
            user_feedbackA[i] = feedback;

            cout << "Feedback added successfully." << endl;
            save_users_to_file();
            return;
        }
    }
}
void view_your_feedback()
{
    load_users_from_file();
    cout << "--------Your Feedback--------" << endl;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name && user_feedbackA[i] != " ")
        {
            cout << "User Name: " << user_nameA[i] << endl;
            cout << "Feedback Stars: " << user_feedback_starsA[i] << endl;
            cout << "Feedback: " << endl
                 << "\t" << user_feedbackA[i] << endl;
        }
    }
}
void view_feedbacks()
{
    load_users_from_file();
    cout << "--------All Feedbacks--------" << endl;
    for (int i = 0; i < user_count; i++)
    {
        if (user_feedbackA[i] == " ")
        {
            continue;
        }
        cout << "User Name: " << user_nameA[i] << endl;
        cout << "Feedback Stars: " << user_feedback_starsA[i] << endl;
        cout << "Feedback: " << endl
             << "\t" << user_feedbackA[i] << endl;
        cout << "----------------------------------------" << endl;
    }
}
void about_us()
{
    cout << "--------About Us--------" << endl;
    cout << "We are a travel agency that provides the best tours and travel experiences." << endl;
    cout << "Our mission is to make your travel dreams come true." << endl;
    cout << "Contact us for more information." << endl;
}
void book_tour_no_of_people_by_user()
{
    load_tours_from_file();
    if (tour_count == 0)
    {
        cout << "No tours available." << endl;
        return;
    }
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name && user_total_priceA[i] != 0)
        {
            cout << "You have already booked a tour." << endl;
            cout << "if you want to book another tour by changing the previous one,so enter yes or no" << endl;
            string option;
            cin >> option;
            if (option == "yes")
            {
                user_total_priceA[i] = 0;
                cout << "You can book a new tour now." << endl;
            }
            else
            {
                cout << "You can continue with your previous booking." << endl;
                return;
            }
        }
    }

    cout << "--------Tour Booking--------" << endl;
    cout << "Enter Tour Name to book: ";
    string user_book_tour_name;
    cin.ignore();
    getline(cin, user_book_tour_name);
    cout << "Enter number of people: ";
    int number_of_people;
    cin >> number_of_people;
    if (number_of_people <= 0)
    {
        cout << "Invalid number of people." << endl;
        return;
    }
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name)
        {
            user_booked_tour_nameA[i] = user_book_tour_name;
            break;
        }
    }
    for (int i = 0; i < tour_count; i++)
    {
        if (tour_nameA[i] == user_book_tour_name)
        {
            system("CLS");
            main_header();
            cout << "--------Tour Booking--------" << endl;
            user_book_tour_name = tour_nameA[i];
            cout << "tour name: " << tour_nameA[i] << endl;
            cout << "Tour Price per person: " << tour_priceA[i] << endl;
            cout << "Tour Duration: " << tour_durationA[i] << endl;
            cout << "Tour Pickup Point: " << tour_pickupA[i] << endl;
            cout << "Tour Destination: " << tour_destinationA[i] << endl;
            cout << "Tour Category: " << tour_categoryA[i] << endl;
            cout << "Tour Description: " << tour_discriptionA[i] << endl;
            cout << "Number of People: " << number_of_people << endl;
            for (int j = 0; j < user_count; j++)
            {
                if (user_nameA[j] == logined_user_name)
                {
                    user_nameA[j] = logined_user_name;
                    user_total_priceA[j] = tour_priceA[i] * number_of_people;
                    cout << "Total Price: " << user_total_priceA[j] << endl;
                }
            }
            cout << "Tour booked successfully." << endl;
            cout << "Thank you for booking with us!" << endl;
            save_users_to_file();
            return;
        }
    }
    cout << "Tour not found." << endl;
    cout << "Please check the tour name and try again." << endl;
}
void green()
{
    system("color 02");
}

void user_booking_details()
{
    load_users_from_file();
    cout << "--------User Booking Details--------" << endl;
    for (int i = 0; i < user_count; i++)
    {
        if (user_nameA[i] == logined_user_name && user_total_priceA[i] != 0)
        {
            cout << "User Name: " << user_nameA[i] << endl;
            cout << "Tour Name: " << user_booked_tour_nameA[i] << endl;
            cout << "Total price: " << user_total_priceA[i] << endl;
            float discount_amount;
            if (user_total_priceA[i] > 2000000)
            {
                discount_amount = user_total_priceA[i] * 0.2;
            }
            else if (user_total_priceA[i] > 1000000)
            {
                discount_amount = user_total_priceA[i] * 0.15;
            }
            else if (user_total_priceA[i] > 500000)
            {
                discount_amount = user_total_priceA[i] * 0.1;
            }
            else if (user_total_priceA[i] > 100000)
            {
                discount_amount = user_total_priceA[i] * 0.05;
            }
            else
            {
                discount_amount = 0;
            }
            cout << "amount after discount: " << user_total_priceA[i] - discount_amount << endl;
            cout << "paid amount: " << user_total_priceA[i] - discount_amount << endl;
            return;
        }
    }
    cout << "No booking details found." << endl;
    cout << "Please book a tour first." << endl;
}
void view_all_users_booking_details()
{
    load_users_from_file();
    cout << "--------All Users Booking Details--------" << endl;
    for (int i = 0; i < user_count; i++)
    {
        if (user_total_priceA[i] != 0)
        {
            cout << "User Name: " << user_nameA[i] << endl;
            cout << "Tour Name: " << user_booked_tour_nameA[i] << endl;
            cout << "Total price: " << user_total_priceA[i] << endl;
            float discount_amount;
            if (user_total_priceA[i] > 2000000)
            {
                discount_amount = user_total_priceA[i] * 0.2;
            }
            else if (user_total_priceA[i] > 1000000)
            {
                discount_amount = user_total_priceA[i] * 0.15;
            }
            else if (user_total_priceA[i] > 500000)
            {
                discount_amount = user_total_priceA[i] * 0.1;
            }
            else if (user_total_priceA[i] > 100000)
            {
                discount_amount = user_total_priceA[i] * 0.05;
            }
            else
            {
                discount_amount = 0;
            }
            cout << "amount after discount: " << user_total_priceA[i] - discount_amount << endl;
            cout << "paid amount: " << user_total_priceA[i] - discount_amount << endl;
            cout << "----------------------------------------" << endl;
        }
    }
}