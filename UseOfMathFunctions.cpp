#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>

using namespace std;
int main(){
    cout<<fixed<<setprecision(2);
    cout<<"sin(100) = "<<sin(100.00)<<"\n";//Computing sine value
    cout<<"cos(100) = "<<cos(100.00)<<"\n";//computing cosine value
    cout<<"tan(100) = "<<tan(100.00)<<"\n";//computing tangent value
    cout<<"7 to the power of 6 = "<<pow(7.0,6.0)<<"\n";//computing power of one value raised to the other
    cout<<"log10 (10) = "<<log10(10.00)<<"\n";//computing log to thw base of 10 value
    cout<<"sqrt (2) = "<<sqrt(2.00)<<"\n";//computing the square root of a value
    getch();
    return 0;
    

}