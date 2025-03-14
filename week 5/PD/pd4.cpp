#include<iostream>
using namespace std;

main(){
    int day;
    string month;
    cout<<"Enter the day: ";
    cin>>day;
    cout<<endl;

    cout<<"Enter the month: ";
    cin>>month;
    cout<<endl;

    if((month=="march" && (day>=21 && day<=31)) || (month=="april" && (day>=1 && day<=19))){
        cout<<"Aries";
    }

    else if((month=="april" && (day>=20 && day<=30)) || (month=="may" && (day>=1 && day<=20))){
        cout<<"Taurus";
    }

    else if((month=="may" && (day>=21 && day<=31)) || (month=="june" && (day>=1 && day<=20))){
        cout<<"Gemini";
    }

    else if((month=="june" && (day>=21 && day<=30)) || (month=="july" && (day>=1 && day<=22))){
        cout<<"Cancer";
    }

    else if((month=="july" && (day>=23 && day<=31)) || (month=="august" && (day>=1 && day<=22))){
        cout<<"Leo";
    }

    else if((month=="august" && (day>=23 && day<=31)) || (month=="september" && (day>=1 && day<=22))){
        cout<<"Virgo";
    }

    else if((month=="september" && (day>=23 && day<=30)) || (month=="october" && (day>=1 && day<=22))){
        cout<<"Libra";
    }

    else if((month=="october" && (day>=23 && day<=31)) || (month=="november" && (day>=1 && day<=21))){
        cout<<"Scorpio";
    }

    else if((month=="november" && (day>=22 && day<=30)) || (month=="december" && (day>=1 && day<=21))){
        cout<<"Sagittarius";
    }

    else if((month=="december" && (day>=22 && day<=31)) || (month=="january" && (day>=1 && day<=19))){
        cout<<"Capricorn";
    }

    else if((month=="january" && (day>=20 && day<=31)) || (month=="february" && (day>=1 && day<=18))){
        cout<<"Aquarius";
    }

    else if((month=="february" && (day>=19 && day<=29)) || (month=="march" && (day>=1 && day<=20))){
        cout<<"Pisces";
    }
    
    else{
        cout<<"Invalid Input";
    }
}