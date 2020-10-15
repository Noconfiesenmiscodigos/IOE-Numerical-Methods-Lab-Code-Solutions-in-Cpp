/*WAP to find solution of Non-Linear equations by Fixed-Point Iteration Method.*/
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>
#define pi 3.14159265358979323846264338327950288419716939937510
#define e 2.718281828
using namespace std;
double x,previous_x;
inline void maths_function()
{
    cout<<"\t\t"<<right<<setw(9)<<setprecision(9)<<x;
    x = 1/pow(x+1,0.5);//Put your phi(x) here
    cout<<"\t\t"<<right<<setw(9)<<setprecision(9)<<x;
}
int main()
{
    int k,error,counter;
    cout.precision(9);
    while(1)
    {
        counter=0;
        cout<<"\n\tFIXED-POINT ITERATION METHOD\n\n";
        cout<<"\nEnter your initial guess (a) : ";
        cin>>x;
        cout<<"\nEnter tolerance (10^-k)\n";
        cout<<"\nEnter k: ";
        cin>>k;
        cout<<"\n\n************************************************************************************************************************************************************************\n\n";
        error=10;
        cout<<" SN\t\t  a(n)"<<"\t\t\t phi(a(n))\n\n";
        while (error>9)
        {
            cout<<" "<<++counter;
            previous_x=x;
            maths_function();
            cout<<endl<<endl;
            error = (int)trunc(abs((x-previous_x)*pow(10,k+1)));//here we look whether digit is repeating or not
            /*
            OR
            double y = pow(x,3) + pow(x,2) - 1;//put your function here
            error = (int)trunc(abs((x-y)*pow(10,k)));//error is in order of 10^k
            */
        }
        cout<<"\n\n************************************************************************************************************************************************************************\n\n";
    }
    return 0;
}
