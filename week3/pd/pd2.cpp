// You are designing a program for a video processing application. The program needs to calculate
// the total number of frames that will be shown in a given the number of minutes for a certain
// frame per second (FPS). Take the number of minutes and frames per second as input from the
// user and calculate the total number of frames.


#include<iostream>
using namespace std;

main(){
int minutes;
int frames;
int total;

cout<<"Enter number of Minutes: ";
cin>>minutes;
cout<<endl;

cout<<"Enter frames per second: ";
cin>>frames;
cout<<endl;

total=frames*60*minutes;
cout<<"Total Number of frames: "<<total;
}