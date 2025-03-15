#include<iostream>
using namespace std;

main(){
    string name;
    float marks1,marks2,marks3,marks4,marks5,perc,total,obtained;
    total=500;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<endl;

    cout<<"Enter the marks of each subject out of 100: "<<endl;
    cout<<"English:";
    cin>>marks1;
    cout<<endl;

    cout<<"Maths:";
    cin>>marks2;
    cout<<endl;

    cout<<"Science:";
    cin>>marks3;
    cout<<endl;

    cout<<"Social:";
    cin>>marks4;
    cout<<endl;

    cout<<"Computer:";
    cin>>marks5;
    cout<<endl;
    cout<<endl;

    cout<<"Student Name: "<<name<<endl;
    obtained=marks1+marks2+marks3+marks4+marks5;
    cout<<"Obtained marks: "<<obtained<<endl;
    perc=(marks1+marks2+marks3+marks4+marks5)/500*100;
    cout<<"The percentage is "<<perc<<"%"<<endl;
    
    if(perc>=90 && perc<=100){
        cout<<"Grade: A+"<<endl;
    }
    else if(perc>=80 && perc<90){
        cout<<"Grade: A"<<endl;
    }
    else if(perc>=70 && perc<80){
        cout<<"Grade: B+"<<endl;
    }
    else if(perc>=60 && perc<70){
        cout<<"Grade: B"<<endl;
    }
    else if(perc>=50 && perc<60){
        cout<<"Grade: C"<<endl;
    }
    else if (perc>=40 && perc<50){
        cout<<"Grade: D"<<endl;
    }
    else{
        cout<<"Grade: F"<<endl;
    }


}