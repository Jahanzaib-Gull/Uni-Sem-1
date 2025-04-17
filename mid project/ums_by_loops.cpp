#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
char menu();
void clearscreen();
main(){
    string stu1 , stu2 , stu3 , stu4 ;
    float stu1_matric=0 , stu1_fsc=0 , stu1_ecat=0 , stu2_matric=0 , stu2_fsc=0 ,stu2_ecat=0;
    float stu3_matric=0 , stu3_fsc=0 , stu3_ecat=0 ,stu4_matric=0 , stu4_fsc=0 , stu4_ecat=0;
    int studentcount=1;
    char option;
    while(option !='4'){
        option= menu() ;
        if(option=='1'){
            if(studentcount==1){
                cout<<"Enter student name....."<<endl;
                cin>>stu1;
                cout<<"Enter student matric marks..."<<endl;
                cin>>stu1_matric;
                cout<<"Enter student fsc marks..."<<endl;
                cin>>stu1_fsc;
                cout<<"Enter student ecat marks..."<<endl;
                cin>>stu1_ecat;
                studentcount=studentcount + 1;
            }else if(studentcount==2){
                cout<<"Enter student name....."<<endl;
                cin>>stu2;
                cout<<"Enter student matric marks..."<<endl;
                cin>>stu2_matric;
                cout<<"Enter student fsc marks..."<<endl;
                cin>>stu2_fsc;
                cout<<"Enter student ecat marks..."<<endl;
                cin>>stu2_ecat;
                studentcount=studentcount + 1;

            }else if(studentcount==3){
                cout<<"Enter student name....."<<endl;
                cin>>stu3;
                cout<<"Enter student matric marks..."<<endl;
                cin>>stu3_matric;
                cout<<"Enter student fsc marks..."<<endl;
                cin>>stu3_fsc;
                cout<<"Enter student ecat marks..."<<endl;
                cin>>stu3_ecat;
                studentcount=studentcount + 1;

            }else if(studentcount==4){
                cout<<"Enter student name....."<<endl;
                cin>>stu4;
                cout<<"Enter student matric marks..."<<endl;
                cin>>stu4_matric;
                cout<<"Enter student fsc marks..."<<endl;
                cin>>stu4_fsc;
                cout<<"Enter student ecat marks..."<<endl;
                cin>>stu4_ecat;
                studentcount=studentcount + 1;

            }else{
                cout<<"No more space to store students"<<endl;
            }
clearscreen();
        }else if(option=='2'){
            cout<<stu1<<"\t"<<stu1_matric<<"\t"<<stu1_fsc<<"\t"<<stu1_ecat<<endl;
            cout<<stu2<<"\t"<<stu2_matric<<"\t"<<stu2_fsc<<"\t"<<stu2_ecat<<endl;
            cout<<stu3<<"\t"<<stu3_matric<<"\t"<<stu3_fsc<<"\t"<<stu3_ecat<<endl;
            cout<<stu4<<"\t"<<stu4_matric<<"\t"<<stu4_fsc<<"\t"<<stu4_ecat<<endl;
clearscreen();
        }else if(option=='3'){
            float merit1=((stu1_matric/1100*100)*0.1)+((stu1_fsc/1200*100)*0.4)+((stu1_ecat/400*100)*0.5);
            float merit2=((stu2_matric/1100*100)*0.1)+((stu2_fsc/1200*100)*0.4)+((stu2_ecat/400*100)*0.5);
            float merit3=((stu3_matric/1100*100)*0.1)+((stu3_fsc/1200*100)*0.4)+((stu3_ecat/400*100)*0.5);
            float merit4=((stu4_matric/1100*100)*0.1)+((stu4_fsc/1200*100)*0.4)+((stu4_ecat/400*100)*0.5);
            if(merit1>merit2 && merit1>merit3 && merit1>merit4){
                     cout<<stu1<<"\t"<<stu1_matric<<"\t"<<stu1_fsc<<"\t"<<stu1_ecat<<endl;
            }
             else if(merit2>merit1 && merit2>merit3 && merit2>merit4){
                     cout<<stu2<<"\t"<<stu2_matric<<"\t"<<stu2_fsc<<"\t"<<stu2_ecat<<endl;
             }
             else if(merit3>merit1 && merit3>merit2 && merit3>merit4){
                      cout<<stu3<<"\t"<<stu3_matric<<"\t"<<stu3_fsc<<"\t"<<stu3_ecat<<endl;
             }
             else if(merit4>merit1 && merit4>merit2 && merit4>merit3){
                     cout<<stu4<<"\t"<<stu4_matric<<"\t"<<stu4_fsc<<"\t"<<stu4_ecat<<endl;
             }
 clearscreen();                    
        }else if(option=='4'){
       cout<<"**********************************************************************************"<<endl;
       cout<<"*                    University Admission Management System                      *"<<endl;
       cout<<"**********************************************************************************"<<endl;
       cout<<"Thanks for using our UMS"<<endl;
        }else{
            cout<<"you choose wrong option , try again"<<endl;
        }
    }
}
char menu(){
cout<<"**********************************************************************************"<<endl;
cout<<"*                    University Admission Management System                      *"<<endl;
cout<<"**********************************************************************************"<<endl;
cout<<"Main Menu>>>>>"<<endl;
cout<<"----------------------------------------------------------------------------------"<<endl;
cout<<"Select one of the following options number......"<<endl;
cout<<"1. Add new student record.."<<endl;
cout<<"2. View all students.."<<endl;
cout<<"3. Print the record in merit order.."<<endl;
cout<<"4. Exit.."<<endl;
cout<<"Your Option "<<endl;
char op;
cin>>op;
 return op;
 }// end of menu function

 void clearscreen(){
    cout<<"Press any key to continue..."<<endl;
    getch();
    system("CLS");
 }

