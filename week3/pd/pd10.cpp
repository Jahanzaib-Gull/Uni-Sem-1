// Imagine a program that takes 15 numbers as input, with a specific plan in mind for mathematical
// operations. The program's goal is to perform various calculations on these numbers in a
// structured manner.
// Here's how the program works:
// 1. The program prompts the user to enter 15 numbers, one at a time.
// 2. It then proceeds to execute three distinct mathematical operations:
// ○ It adds together the first 5 numbers.
// ○ It multiplies the next 5 numbers.
// ○ It subtracts the last 5 numbers.
// 3. After obtaining the results of these three operations, the program continues its
// mathematical exploration:
// ○ It adds the results of the addition and multiplication.
// ○ It subtracts the result of the subtraction.
// 4. Finally, the program displays the ultimate result on the screen.




#include<iostream>
using namespace std;

main(){
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o;
int add,mul,sub,result;

cout<<"Number 1: ";
cin>>a;
cout<<endl;

cout<<"Number 2: ";
cin>>b;
cout<<endl;

cout<<"Number 3: ";
cin>>c;
cout<<endl;

cout<<"Number 4: ";
cin>>d;
cout<<endl;

cout<<"Number 5: ";
cin>>e;
cout<<endl;

cout<<"Number 6: ";
cin>>f;
cout<<endl;

cout<<"Number 7: ";
cin>>g;
cout<<endl;

cout<<"Number 8: ";
cin>>h;
cout<<endl;

cout<<"Number 9: ";
cin>>i;
cout<<endl;

cout<<"Number 10: ";
cin>>j;
cout<<endl;

cout<<"Number 11: ";
cin>>k;
cout<<endl;

cout<<"Number 12: ";
cin>>l;
cout<<endl;

cout<<"Number 13: ";
cin>>m;
cout<<endl;

cout<<"Number 14: ";
cin>>n;
cout<<endl;

cout<<"Number 15: ";
cin>>o;
cout<<endl;

add=a+b+c+d+e;
mul=f*g*h*i*j;
sub=k-l-m-n-o;

result=(add+mul)-sub;
cout<<"The final result id: "<<result;
}