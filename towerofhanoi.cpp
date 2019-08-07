#include<iostream.h>
void tower(int a,char from,char aux,char to){
    if(a==1){
       cout<<"\t\tMove disc 1 from "<<from<<" to "<<to<<"\n";
       return;
    }
    else{
       tower(a-1,from,to,aux);
       cout<<"\t\tMove disc "<<a<<" from "<<from<<" to "<<to<<"\n";
       tower(a-1,aux,from,to);
    }
}
void main(){
     clrscr();
     int n;
     cout<<"\n\Tower of Hanoi\n";
     cout<<"Enter number of discs : ";
     cin>>n;
     
     tower(n,'A','B','C');
     getch();
}
