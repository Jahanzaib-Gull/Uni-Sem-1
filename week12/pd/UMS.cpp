#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

// funtions protypes start

void header();
string login();
char admin_menu();
void add_student();
void sub_header();
void add_std_record(string name, float matric, float fsc, float ecat, string p1, string p2, string p3);
void view_students();
void ordered_record();
float calculate_merit(float matric, float fsc, float ecat);
void generate_merit();
void add_new_user();
void add_user(string id, string username, string password);
int seat_management_menu();
void seat_management();
char student_menu();
void view_info();
void admission_status();
void change_password();
void clear_screen();

// funtions protypes end


// Globatl variables

const int TOTAL_USERS = 10;
string UsernameA[TOTAL_USERS];
string PasswordA[TOTAL_USERS];
string Student_idA[TOTAL_USERS];
int user_count = 0;

const int TOTAL_STUDENTS = 20;
string student_nameA[TOTAL_STUDENTS];
string pref1A[TOTAL_STUDENTS];
string pref2A[TOTAL_STUDENTS];
string pref3A[TOTAL_STUDENTS];
float matricA[TOTAL_STUDENTS];
float fscA[TOTAL_STUDENTS];
float ecatA[TOTAL_STUDENTS];
int student_count = 0;
float meritA[TOTAL_STUDENTS];

string departmentA[] = {"CS", "CE", "EE"};
int seatsA[] = {0, 0, 0};

bool announce_result = false;
string login_username = " ";


// main function satrt

main()
{
    add_user("123", "ADMIN", "123");
    add_user("456", "STUDENT", "456");
    while (true)
    {
        system("CLS");

        string w = login();
        if (w == "ADMIN")
        {
            system("CLS");
            char admin_option = ' ';
            while (true)
            {
                admin_option = admin_menu();
                if (admin_option == '1')
                {
                    add_student();
                }
                else if (admin_option == '2')
                {
                    view_students();
                }
                else if (admin_option == '3')
                {
                    ordered_record();
                }
                else if (admin_option == '4')
                {
                    generate_merit();
                }
                else if (admin_option == '5')
                {
                    add_new_user();
                }
                else if (admin_option == '6')
                {
                    seat_management();
                }
                else if (admin_option == '7')
                {
                    cout << "Press 2 to announce the result" << endl;
                    char result;
                    cin >> result;
                    if (result == '2')
                    {
                        announce_result = true;
                    }
                    clear_screen();
                }
                else if (admin_option == '8')
                {
                    break;
                }
                else
                {
                    cout << "Wrong Input. Try Again!";
                }
            }
            clear_screen();
        }
        else if (w == "STUDENT")
        {
            system("CLS");
            char student_option = ' ';
            while (true)
            {
                student_option = student_menu();
                if (student_option == '1')
                {
                    view_info();
                }
                else if (student_option == '2')
                {
                    admission_status();
                }
                else if (student_option == '3')
                {
                    change_password();
                }
                else if (student_option == '4')
                {
                    break;
                }
                else
                {
                    cout << "You choose wrong option.";
                }
            }
            clear_screen();
        }
        else if (w == "wrong")
        {
            cout << "Invalid username or password. Please try again." << endl;
            clear_screen();
        }
    }
}

// main function end


void header()
{
    cout << "--------------------------------------------------" << endl;
    cout << "----------University Management System------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << endl;
}


string login()
{
    header();
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < TOTAL_USERS; i++)
    {
        if (UsernameA[i] == username && PasswordA[i] == password)
        {
            login_username = username;
            return login_username;
        }
    }
    login_username = " ";
    return "wrong";
}


void add_user(string id, string username, string password)
{
    if (user_count < TOTAL_USERS)
    {
        UsernameA[user_count] = username;
        PasswordA[user_count] = password;
        Student_idA[user_count] = id;
        user_count++;
    }
    else
    {
        cout << "Student limit reached." << endl;
    }
}


char admin_menu()
{
    header();
    cout << "Admin Main Menu >" << endl;
    cout << "1- Add New Student" << endl;
    cout << "2- View All Student" << endl;
    cout << "3- Print the record in merit order" << endl;
    cout << "4- Generate Merit" << endl;
    cout << "5- Add Users" << endl;
    cout << "6- Seat Management" << endl;
    cout << "7- Announce Result" << endl;
    cout << "8- Logout" << endl;
    cout << "Choose your option:" << endl;
    char option;
    cin >> option;
    return option;
}


char student_menu()
{
    header();
    cout << "Student Main Menu >" << endl;
    cout << "1- View yor Profile" << endl;
    cout << "2- Check Admission Status " << endl;
    cout << "3- Change Password" << endl;
    cout << "4- Logout " << endl;
    cout << "Choose Your Option:" << endl;
    char option;
    cin >> option;
    return option;
}


void clear_screen()
{
    cout << "Press any key to continue" << endl;
    getch();
    system("CLS");
}


void add_student()
{
    string name;
    float matric, fsc, ecat;
    string pref1, pref2, pref3;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter Matric Marks: ";
    cin >> matric;
    cout << "Enter FSC Marks: ";
    cin >> fsc;
    cout << "Enter ECAT Marks: ";
    cin >> ecat;
    sub_header();
    cout << endl;
    cout << "Enter 1st Preference name: ";
    cin >> pref1;
    cout << "Enter 2nd Preference name: ";
    cin >> pref2;
    cout << "Enter 3rd Preference name: ";
    cin >> pref3;
    add_std_record(name, matric, fsc, ecat, pref1, pref2, pref3);
    clear_screen();
}


void sub_header()
{
    cout << "     Enter the Name for preferences    " << endl;
    cout << "-------------------------------------------";
    cout << "Choose between these disciplines" << endl;
    cout << "1- CS for Computer Science" << endl;
    cout << "2- CE for Computer Engineering" << endl;
    cout << "3- EE for Electrical Engineering" << endl;
    cout << "-------------------------------------------";
}


void add_std_record(string name, float matric, float fsc, float ecat, string p1, string p2, string p3)
{
    student_nameA[student_count] = name;
    matricA[student_count] = matric;
    fscA[student_count] = fsc;
    ecatA[student_count] = ecat;
    pref1A[student_count] = p1;
    pref2A[student_count] = p2;
    pref3A[student_count] = p3;
    student_count++;
}


int seat_management_menu()
{
    header();
    cout << "Seat Management Menu >" << endl;
    cout << "1- Edit CS Capacity" << endl;
    cout << "2- Edit CE Capacity" << endl;
    cout << "3- Edit EE Capacity" << endl;
    cout << "4- View Seats Details" << endl;
    cout << "5- Back" << endl;
    int option;
    cin >> option;
    return option;
}


void seat_management()
{
    int seat_option = 0;
    system("CLS");
    while (true)
    {
        seat_option = seat_management_menu();
        if (seat_option == 1 || seat_option == 2 || seat_option == 3)
        {
            cout << "enter your seats for " << departmentA[seat_option - 1];
            int seats;
            cin >> seats;
            seatsA[seat_option - 1] = seats;
        }
        else if (seat_option == 4)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << departmentA[i] << " Seats are " << seatsA[i] << endl;
            }
        }
        else if (seat_option == 5)
        {
            break;
        }
        else
        {
            cout << "You entered wrong option" << endl;
        }
        clear_screen();
    }
}


void view_students()
{
    cout << "Name\tMatric\tFSC\tECAT\t1st Pref\t2nd Pref\t3rd Pref" << endl;
    for (int i = 0; i < student_count; i++)
    {
        cout << student_nameA[i] << "\t" << matricA[i] << "\t" << fscA[i] << "\t" << ecatA[i] << "\t" << pref1A[i] << "\t" << pref2A[i] << "\t" << pref3A[i] << endl;
    }
    clear_screen();
}


void add_new_user()
{
    cout << "Enter username: " << endl;
    string username;
    cin >> username;
    cout << "Enter Password: " << endl;
    string password;
    cin >> password;

    cout << "Enter Role(ADMIN/STUDENT) in capital letters";
    string role;
    cin >> role;

    add_user(role, username, password);

    clear_screen();
}


void view_info()
{
    if (login_username != " ")
    {
        for (int i = 0; i < student_count; i++)
        {
            if (student_nameA[i] == login_username)
            {
                cout << "Name: " << student_nameA[i] << endl;
                cout << "Matric Marks: " << matricA[i] << endl;
                cout << "FSC Marks: " << fscA[i] << endl;
                cout << "ECAT Marks: " << ecatA[i] << endl;
                cout << "1st Preference: " << pref1A[i] << endl;
                cout << "2nd Preference: " << pref2A[i] << endl;
                cout << "3rd Preference: " << pref3A[i] << endl;
                clear_screen();
                return;
            }
        }
        cout << "No student record found for username: " << login_username << endl;
        clear_screen();
    }
}


void ordered_record()
{
    if (student_count == 0)
    {
        cout << "No student records available to order." << endl;
        clear_screen();
        return;
    }

    generate_merit();
    header();

    for (int i = 0; i < student_count - 1; i++)
    {
        for (int j = 0; j < student_count - i - 1; j++)
        {
            if (meritA[j] < meritA[j + 1])
            {

                float tempMerit = meritA[j];
                meritA[j] = meritA[j + 1];
                meritA[j + 1] = tempMerit;

                string tempName = student_nameA[j];
                student_nameA[j] = student_nameA[j + 1];
                student_nameA[j + 1] = tempName;

                float tempMatric = matricA[j];
                matricA[j] = matricA[j + 1];
                matricA[j + 1] = tempMatric;

                float tempFsc = fscA[j];
                fscA[j] = fscA[j + 1];
                fscA[j + 1] = tempFsc;

                float tempEcat = ecatA[j];
                ecatA[j] = ecatA[j + 1];
                ecatA[j + 1] = tempEcat;

                string tempPref1 = pref1A[j];
                pref1A[j] = pref1A[j + 1];
                pref1A[j + 1] = tempPref1;

                string tempPref2 = pref2A[j];
                pref2A[j] = pref2A[j + 1];
                pref2A[j + 1] = tempPref2;

                string tempPref3 = pref3A[j];
                pref3A[j] = pref3A[j + 1];
                pref3A[j + 1] = tempPref3;
            }
        }
    }
    cout << "----------Orederd Merit----------" << endl;
    cout << "Name\t\tMerit" << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < student_count; i++)
    {
        cout << student_nameA[i] << "\t\t" << meritA[i] << "%" << endl;
    }
    clear_screen();
}


float calculate_merit(float matric, float fsc, float ecat)
{

    return (matric / 1100.0 * 30) + (fsc / 1100.0 * 30) + (ecat / 400.0 * 40);
}


void change_password()
{
    if (login_username != " ")
    {
        for (int i = 0; i < student_count; i++)
        {
            if (student_nameA[i] == login_username)
            {
                cout << "Enter new password..";
                cin >> PasswordA[i];
            }
        }
    }
    clear_screen();
}


void generate_merit()
{
    if (student_count == 0)
    {
        cout << "There is no student record." << endl;
        return;
        clear_screen();

    }
    cout << "-------Generating merit without order--------" << endl;
    cout << "Name\t\tMerit" << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < student_count; i++)
    {
        meritA[i] = calculate_merit(matricA[i], fscA[i], ecatA[i]);
        cout << student_nameA[i] << "\t\t" << meritA[i] << "%" << endl;
    }
    clear_screen();
}


void admission_status(){
    if (announce_result == true)
    {
        if (login_username != " ")
        {
            for (int i = 0; i < student_count; i++)
            {
                if (student_nameA[i] == login_username)
                {
                    cout<<"Your aggregate is "<<meritA[i]<<endl;
                    if(meritA[i]>85){
                        cout<<"You are selected for CS"<<endl;
                    }
                    else if(meritA[i]>75){
                        cout<<"You are selected for CE"<<endl;
                    }
                    else if(meritA[i]>65){
                        cout<<"You are selected for EE"<<endl;
                    }
                }
            }
        }
    }
    else
    {
        cout << "Your result is not announced yet...." << endl;
    }
    clear_screen();
}

