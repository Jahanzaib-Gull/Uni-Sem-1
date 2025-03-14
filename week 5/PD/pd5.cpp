#include<iostream>
using namespace std;

main(){
    char service, time;
    float minutes, remain;
    cout<<"Enter which type of service you want to avail(press r for regular or p for premium): ";
    cin>>service;

    cout<<"Enter the number of minutes you used the service: ";
    cin>>minutes;
    
    if(service=='r'||service=='R') {
        if(minutes<=50){
        cout<<"Your bill is "<<10<<"$";
        }
        else if(minutes>50){
            remain=minutes-50;
            cout<<"Your bill is "<<10+(remain*0.2)<<"$";
        }
    }

    else if(service=='p'||service=='P'){
        cout<<"Enter the time of the day you used the service(press d for day or n for night): ";
        cin>>time;
   
        if((time=='d'||time=='D') && minutes<=75){
            cout<<"Your bill is "<<25<<"$";
        }

        else if((time=='d'||time=='D') && minutes>75){
            remain=minutes-75;
            cout<<"Your bill is "<<25+(remain*0.1)<<"$";
        }

        else if((time=='n'||time=='N') && minutes<=100){
            cout<<"Your bill is "<<25<<"$";
        }

        else if((time=='n'||time=='N') && minutes>100){
            remain=minutes-100;
            cout<<"Your bill is "<<25+(remain*0.05)<<"$";
        }

        else{
            cout<<"Invalid input";
        }
    }
    else{
        cout<<"Invalid input";
    }
}
    
        

