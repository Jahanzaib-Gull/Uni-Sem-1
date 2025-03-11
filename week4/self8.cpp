#include<iostream>
using namespace std;

main(){
    float num;
    char letter;
    float peri;

    cout<<"Enter 's' for square or 'c' for circle: ";
    cin>>letter;
    cout<<endl;


   if (letter=='s')
   {    
    cout<<"Enter the length of sides of square:";
    cin>>num;
    peri=4*num;
    cout<<"The perimeter of square is: "<<peri;

   }
   if (letter=='c')
   {
    cout<<"Enter the radius of circle: ";
    cin>>num;
    peri=6.28*num;
    cout<<"The perimeter of circle is: "<<peri;
   }
   
   
}