#include<iostream>
using namespace std;
int fastexpo(int b, int p)
{
if(b==0)
return 1;
if(n&1)
return b*fastexpo(b,p-1);
else
{
int y=fastexpo(b, p/2);
return y*y;
}
}

int main()
{
int base, power;
cin>>base>>power;
cout<<fastexpo(base, power);
return 0;
}
