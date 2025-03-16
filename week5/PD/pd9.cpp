#include<iostream>
using namespace std;
 main(){
    int h,x,y;

    cout<<"Enter the value of h: ";
    cin>>h;
    cout<<endl;

    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<endl;

    cout<<"Enter the value of y: ";
    cin>>y;
    cout<<endl;

    if((x>0&&x<h*3) && (y>0&&y<h)){
        cout<<"The point is inside the image.";
    }
    
    else if((x>h&&x<h*2) && (y>h&&y<h*4)){
        cout<<"The point is inside the image.";
    }



    else if ((y==0 && (x>=0 && x<=h*3))){
        cout<<"The point is on Border of image.";
    }

    else if ((x==0 && (y>=0 && y<=h))){
        cout<<"The point is on Border of image.";
    }

    else if ((x==h*3 && (y>=0 && y<=h))){
        cout<<"The point is on Border of image.";
    }

    else if ((y==h && (x>=0 && x<=h))){
        cout<<"The point is on Border of image.";
    }

    else if ((y==h && (x>=h*2 && x<=h*3))){
        cout<<"The point is on Border of image.";
    }

    else if ((x==h && (y>=h && y<=h*4))){
        cout<<"The point is on Border of image.";
    }

    else if ((x==h*2 && (y>=h && y<=h*4))){
        cout<<"The point is on Border of image.";
    }

    else if ((y==h*4 && (x>=h && x<=h*2))){
        cout<<"The point is on Border of image.";
    }



    else {
        cout<<"The point is outside the image.";
    }


 }