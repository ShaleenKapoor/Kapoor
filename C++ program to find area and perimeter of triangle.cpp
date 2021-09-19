#include <iostream>
#include<math.h>
using namespace std;
class Triangle
{
    private:
    float a,b,c,ar;
    int per;
    public:
    void getdata()
    {
        cout<<"enter the sides of triangle";
        cin>>a>>b>>c;
    }
void area()
{
    float s;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
}
int calc_peri()
{
    per=a+b+c;
}
void disp()
{
    cout<<"\n area is \t"<<ar;
    cout<<"\n perimeter is \t"<<per;
}
};
int main()
{
Triangle t;
t.getdata();
t.area();
t.calc_peri();
t.disp();
return 0;
}
