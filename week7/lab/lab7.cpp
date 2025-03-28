#include<iostream>
using namespace std;

main(){
    int num;
    cout<<"Enter the number of integers: ";
    float n,p1,temp1=0,p2,temp2=0,p3,temp3=0,p4,temp4=0,p5,temp5=0;
    cin>>n;
    for (int x = 0; x < n; x++)
    {
        cout<<"Enter a integer b/w 1 and 1000: ";
        cin>>num;
        if (num>=1 && num<200)      
        {
            temp1++;
        }
        else if (num>=200 && num<400)      
        {
            temp2++;
        }
        else if (num>=400 && num<600)      
        {
            temp3++;
        }
        else if (num>=600 && num<800)      
        {
            temp4++;
        }
        else if (num>=800 && num<=1000) 
        {
            temp5++;
        }     
    }
    p1=temp1/n*100.0;
    p2=temp2/n*100.0;
    p3=temp3/n*100.0;
    p4=temp4/n*100.0;
    p5=temp5/n*100.0;

    cout<<p1<<"%"<<endl;
    cout<<p2<<"%"<<endl;
    cout<<p3<<"%"<<endl;
    cout<<p4<<"%"<<endl;
    cout<<p5<<"%"<<endl;    
}