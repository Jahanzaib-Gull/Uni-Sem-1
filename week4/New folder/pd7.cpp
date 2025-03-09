#include<iostream>
using namespace std;    
main(){
    string shape;
    float area;

    cout<<"Enter the name of shape: ";
    cin>>shape; 
    cout<<endl;
    
    if (shape=="square")
    {
        float side;
        cout<<"Enter the side of square: ";
        cin>>side;
        cout<<endl;
        area=side*side;
        cout<<"Area of square is: "<<area;
    }
    if (shape=="rectangle")
    {
        float length;
        float width;
        cout<<"Enter the length of rectangle: ";
        cin>>length;
        cout<<endl;
        cout<<"Enter the width of rectangle: ";
        cin>>width;
        cout<<endl;
        area=length*width;
        cout<<"Area of rectangle is: "<<area;
    }
    if (shape=="circle")
    {
        float radius;
        cout<<"Enter the radius of circle: ";
        cin>>radius;
        cout<<endl;
        area=3.14*radius*radius;
        cout<<"Area of circle is: "<<area;
    }
    if (shape=="triangle")
    {
        float base;
        float height;
        cout<<"Enter the base of triangle: ";
        cin>>base;
        cout<<endl;
        cout<<"Enter the height of triangle: ";
        cin>>height;
        cout<<endl;
        area=0.5*base*height;
        cout<<"Area of triangle is: "<<area;
    }
}