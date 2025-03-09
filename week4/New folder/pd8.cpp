#include<iostream>
using namespace std;    
main(){

    int num;
    
    cout<<"Enter a number: ";
    cin>>num;
    cout<<endl;


    if(num<=19){
        
        if (num==0){
        cout<<"zero";
    }
    if (num==1)
    {
        cout<<"one";
    }
    if (num==2)
    {
        cout<<"two";
    }
    if (num==3)
    {
        cout<<"three";
    }
    if (num==4)
    {
        cout<<"four";
    }
    if (num==5)
    {
        cout<<"five";
    }
    if (num==6)
    {
        cout<<"six";
    }
    if (num==7)
    {
        cout<<"seven";
    }
    if (num==8)
    {
        cout<<"eight";
    }
    if (num==9)
    {
        cout<<"nine";
    }
    if (num==10) 
    {
        cout<<"ten";
    }
    if (num==11)
    {
        cout<<"eleven";
    }
    if (num==12)
    {
        cout<<"twelve";
    }
    if (num==13)
    {
        cout<<"thirteen";
    }
    if (num==14)
    {
        cout<<"fourteen";
    }
    if (num==15)
    {
        cout<<"fifteen";
    }
    if (num==16)
    {
        cout<<"sixteen";
    }
    if (num==17)
    {
        cout<<"seventeen";
    }
    if (num==18)
    {
        cout<<"eighteen";
    }
    if (num==19)
    {
        cout<<"nineteen";
    }

    }
    if (num==100)
    {
        cout<<"one hundred";
    }
    

    int ones = num % 10;
    int tens = num / 10;

    if(num>19){
    
        if (tens==2)
    {
        cout<<"twenty ";
    }
    
    
    if (tens==3)
    {
        cout<<"thirty ";
    }
   
    
    if (tens==4)
    {
        cout<<"forty ";
    }
    
    if (tens==5)
    {
        cout<<"fifty ";
    }
    if (tens==6)
    {
        cout<<"sixty ";
    }
    
    if (tens==7)
    {
        cout<<"seventy ";
    }
    
    if (tens==8)
    {
        cout<<"eighty ";
    }
    

    if (tens==9)
    {
        cout<<"ninety ";
    }


    if (ones==1)
    {
        cout<<"one";
    }
        
    if (ones==2)
    {
        cout<<"two";
    }
    if (ones==3)
    {
        cout<<"three";
    }
    if (ones==4)
    {
        cout<<"four";
    }
    if (ones==5)
    {
        cout<<"five";
    }
    if (ones==6)
    {
        cout<<"six";
    }
    if (ones==7)
    {
        cout<<"seven";
    }
    if (ones==8)
    {
        cout<<"eight";
    }
    if (ones==9)
    {
        cout<<"nine";
    }

    } 


   
    
    cout<<endl;



    
    

   
}