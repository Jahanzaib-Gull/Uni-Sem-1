#include<iostream>
using namespace std;
main(){
    int s_hours, s_minutes, a_hours, a_minutes, exam_time, arrival_time, diff, hours, minutes, differ;
    cout<<"Exam strartng time (hours): ";
    cin>>s_hours;
    cout<<"Exam starting time (minutes): ";
    cin>>s_minutes;
    cout<<"Student arrival time (hours): ";
    cin>>a_hours;
    cout<<"Student arrival time (minutes): ";
    cin>>a_minutes;


    exam_time = s_hours*60 + s_minutes;
    arrival_time = a_hours*60 + a_minutes;

    diff =arrival_time - exam_time;


    if(diff>0){
        cout<<"Student is too late ";
    }
    else if (diff>=-30){
        cout<<"Student is on time ";
    }
    else{
        cout<<"Student is too early ";
    }



    if(diff==0){
        cout<<"No time difference";
    }
    else if(diff!=0){
        if (diff<0){
            differ=-diff;
            hours = differ/60;
            minutes = differ%60;
            if(hours>0){
                cout<<hours<<" hours ";
            }
            if(minutes>0){
                cout<<minutes<<" minutes ";
            }
            cout<<"before the exam";
        }
        if(diff>0){
            hours = diff/60;
            minutes = diff%60;
            if(hours>0){
                cout<<hours<<" hours ";
            }
            if(minutes>0){
                cout<<minutes<<" minutes ";
            }
            cout<<"After the exam";
        }
    }
}