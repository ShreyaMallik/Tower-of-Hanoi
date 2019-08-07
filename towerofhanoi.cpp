#include<iostream.h>
void tower(int a,char init,char sec,char dest){
    if(a==1)
    {
       cout<<"Move disc 1 from "<<init<<" to "<<dest<<"\n";
       return;
    }
    else{
       tower(a-1,init,dest,sec);
       cout<<"Move disc "<<a<<" from "<<init<<" to "<<dest<<"\n";
       tower(a-1,sec,init,dest);
    }
}
void main(){
     clrscr();
     int n;
     cout<<"\nTower of Hanoi\n";
     cout<<"Enter number of discs:";
     cin>>n;
     
     tower(n,'A','B','C');
     getch();
}
