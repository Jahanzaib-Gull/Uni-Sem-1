#include<iostream>
using namespace std;

main(){
int mb;
int bit;

cout<<"Enter the size in megabytes (MB): ";
cin>>mb;
cout<<endl;

bit=1024*1024*8;
cout<<mb<<" MB is equivalent to "<<bit<<" bits.";
}