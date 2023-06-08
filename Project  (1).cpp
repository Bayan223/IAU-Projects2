/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

/*
Raghad Alqahtani 2210003591
Bayan Alshehri   2210003574
Latifa Alshehri  2210003580
Fatimah Aleid    2210003529
*/

void w()
{
float w,f,d;
cout<<"enter the value of f :"<<endl;
cin>>f;
cout<<"enter the value of d :"<<endl;
cin>>d;
cout<<"the work is "<<f*d<<" J"<<endl;
}
 
void f()
{
float w,f,d;
cout<<"enter the value of w : "<<endl;
cin>>w;
cout<<"enter the value of d :"<<endl;
cin>>d;
cout<<"the force is "<<w/d<<" N"<<endl;
}
void d()
{
float w,f,d;
cout<<"enter the value of w :"<<endl;
cin>>w;
cout<<"enter the value of f :"<<endl;
cin>>f;
cout<<"the displacement is "<<w/f<<" m"<<endl;
}
 
 
void p()
{
   float p,v,m;
   cout<<"enter value of velocity: "<<endl;
       cin>>v;
       cout<<"enter value of mass: "<<endl;
       cin>>m;
       p=v*m;
       cout<<"the value of Moumentum"<<p<<"g.m";
}
void v()
{
   float p,v,m;
   cout<<"enter value of mass: "<<endl;
       cin>>m;
       cout<<"enter value of Moumentum: "<<endl;
       cin>>p;
       v=p/m;
       cout<<"the value of velocity: "<<v<<"m/s";
}
void m()
{
   float p,v,m;
   cout<<"enter value of Moumentum: "<<endl;
       cin>>p;
       cout<<"enter value of velocity: "<<endl;
       cin>>v;
       m=p/v;
       cout<<"the value of mass: "<<m<<"g";
}
 
void V()
{
float V,I,R;
cout<<"please enter the value of I:"<<endl; 
cin>>I; 
cout<<"please enter the value of R:"<<endl; 
cin>>R; 
cout<<"V="<<I*R<<" Volts"<<endl; 
}
 
void R()
{
float R,V,I;
cout<<"please enter the value of V:"<<endl; 
cin>>V; 
cout<<"please enter the value of I:"<<endl; 
cin>>I; 
cout<<"R="<<V/I<<"Ohm"<<endl; 
}
void I()
{
float I,V,R;
cout<<"please enter the value of V:"<<endl; 
cin>>V; 
cout<<"please enter the value of R:"<<endl; 
cin>>R; 
cout<<"I="<<V/R<<" Ampere"<<endl; 
}
 
 
void v_1()
{
   float t1, v2, t2;
cout<<"please enter the value of (T1) in Kelvin:"<<endl;
cin>>t1;
cout<<"please enter the value of (V2) in cubed meters:"<<endl;
cin>>v2;
cout<<"please enter the value of (T2) in Kelvin:"<<endl;
cin>>t2;
   cout<<"V1="<< t1*(v2/t2)<<" (m^3)"; }
 
void v_2()
{
   float t2, v1, t1;
   cout<<"please enter the value of (T2) in Kelvin:"<<endl;
cin>>t2;
cout<<"please enter the value of (V1) in cubed meters :"<<endl;
cin>>v1;
cout<<"please enter the value of (T1) in Kelvin :"<<endl;
cin>>t1;
   cout<<"V2="<< t2*(v1/t1)<<" (m^3)"; }
 
void t_1()
{
   float v1, t2, v2;
   cout<<"please enter the value of (V1) in cubed meters:"<<endl;
cin>>v1;
cout<<"please enter the value of (T2) in Kelvin:"<<endl;
cin>>t2;
cout<<"please enter the value of (V2) in cubed meters:"<<endl;
cin>>v2;
   cout<<"T1="<<v1*(t2/v2)<<" (K)"; }
 
void t_2()
{
   float v2, t1, v1;
   cout<<"please enter the value of (V2) in cubed meters:"<<endl;
cin>>v2;
cout<<"please enter the value of (T1) in Kelvin:"<<endl;
cin>>t1;
cout<<"please enter the value of (V1) in cubed meters:"<<endl;
cin>>v1;
   cout<<"T2="<< v2*(t1/v1)<<" (K)"; }
   
//-------------------------------------------------//
 
int main(){
 string name;
 cout<<"What is your name ? ";
 getline(cin,name);
 cout<<"Welcome to our program "<<name<<endl;
   int op;
   do {
       
       cout<<"Chooce the law you want to use"<<endl<<"1:work law \n2:momentum law \n3:ohms law \n4:chrles law\n"<<"Enter 0 to exit\n";
       cin>>op;
       
           switch(op){
           
           case 1:
               int z;
               
            do{
               cout<<"pleas chooce what you want to calculate :"<<endl<< "1:to find w \n2:to find f\n3:to find d"<<endl<<"Enter 0 to use another law\n";
               cin>>z;
               switch(z){
               
               case 1:
               w();
               break;
               
               case 2:
               f();
               break;
               
               case 3:
               d();
               break;
               
               }}while(z<=3 && z>=1);
                       
           break;
           
           case 2:
                   int y;
                   do{
                 cout<<"\npleas choose what you want to calculate: "<<endl<<
                 "number 1 to find Moumentum"<<endl<<"number 2 to find velocity"<<
                 endl<<"number 3 to find mass"<<endl<<"Enter 0 to use another law\n";
                 cin>>y;
                 
                   switch (y)
                   {
                   case 1:
                   p();
                   break;
                   
                   case 2:
                   v();
                   
                  break;
                 
                   case 3:
                   m();
                   break;
                   }
                   }while(y<=3 && y>=1);
           break;
           
           case 3:
            int ch;
 
            do{
            cout<<"\nChooce the value you need to calculate:"<<endl<< "1:I \n2:V\n3:R"<<endl<<"Enter 0 to use another law\n";
            cin>>ch;
            switch(ch){
           
            case 1:
            I();
            break;
           
            case 2:
            V();
            break;
           
            case 3:
            R();
            break;
           
            }
            }while(ch<=3 && ch>=1);
            break;
           
            case 4:
            int n;
           
            do {
               
           cout<<"\nChooce the value you need to calculate:"<<endl<< "1:V1 \n2:V2 \n3:T1 \n4:T2"<<endl<<"Enter 0 to use another law\n";
           cin>>n;
           
           switch(n){
           case 1:
               v_1 ();
           break;
           
           case 2:
               v_2();
           break;
           
           case 3:
               t_1();
           break;
           
           case 4:
               t_2();
           break;
           
            }}while (n<=4 && n>=1);
           break;
       }}while (op=!0);
 
 
 

    return 0;
}
