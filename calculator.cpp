#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"My first Project"<<endl;
    cout<<"-----CALCULATOR-----"<<endl;
      char d='Y';
      while(d=='Y'|| d=='y'){
      double Num1,Num2;
        cout<< "Num1:";
        cin>>Num1;
    
        cout<<"Num2:";
        cin>>Num2;
    int choice;
         cout<<"---------------------------------------------"<<endl;
         cout<<"Operation:"<<endl;
         cout<<"Addition:1"<<endl;
         cout<<"Difference:2"<<endl;
         cout<<"Multiplication:3"<<endl;
         cout<<"Division(Num1/Num2):4"<<endl;
         cout<<"---------------------------------------------"<<endl;
         cout<<"Operation no. :-";
         cin>> choice;
    switch(choice){
        case 1:
         cout<<"Addition:";
         cout<<Num1+Num2;
        break;
        case 2:
         cout<<"Difference:";
         cout<<abs(Num1-Num2);
        break;
        case 3:
         cout<<"Multiplication:";
         cout<<Num1*Num2;
        break;
        case 4:
         cout<<"Division:";
        if (Num2==0){
            cout<<"Not divisible";
        }
        else{
            cout<<Num1/Num2;
        }
        break;
       
        default:
        cout<<"Inavlid Choice";
        break;
    }
    cout<<"\n"<<"---------------------------------------------"<<"\n";
    cout<<"New Calculation (Y/N):";
    cin>>d;
    if(d=='N'||d=='n'){
        cout<<"*Session End*";
    }
        cout<<"\n"<<"---------------------------------------------"<<"\n";
    
    cout<<"\n"<<" "<<"\n";
    } 
    return 0;
}
