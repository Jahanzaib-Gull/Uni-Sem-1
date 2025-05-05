#include <iostream>
using namespace std;

int play_time(int holidays)
{
    int working_days = 365 - holidays;
    int time = working_days * 63 + holidays * 127; 
    return time;
}

main()
{
    int holidays,hours,minutes;
    int required_time = 30000; 
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    play_time(holidays);
    int time = play_time(holidays);
    if(time > required_time)
    {
        cout << "Tom will run away" << endl;
        hours= (time - required_time) / 60;
        minutes= (time - required_time) % 60;
        cout<<hours<<" hours "<<minutes<<" minutes for play"<<endl;

    }
    else
    {
        cout << "Tom sleeps well" << endl;
        hours= (required_time - time) / 60;
        minutes= (required_time - time) % 60;
        cout<<hours<<" hours "<<minutes<<" minutes less for play"<<endl;
    }
}