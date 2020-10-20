#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float x,y,a=0,b=0,r=2,st,d;
    bool circle=0,square=0;
    //a абсциса точки перетину
    //b ордината точки перетину діагоналей
    //r радіус описаного кола
    //x-Введена абсциса
    //у-Введена ордината
    //square,circle-логічні оператори для перевірки належності точки колу чи квадрату
    st=(r*2)/sqrt(2);
    d = st*sqrt(2);
    cout<< " Dankov Artem,IS-01,26V "<<endl<<"Input x: ";
    cin>>x;
    cout<<"Input y: ";
    cin>>y;
    if (x*x+y*y<=r*r){circle=true;}
    if (abs(x-a)+abs(y-b)<=d/2){square=true;}
    if (circle==true && square==true)
        {
        if(x<=0 && y>=0){cout<<"yes"<<endl;}
        else if (x >= 0 && y <= 0){cout<<"yes"<<endl;}
        else cout<<"no"<<endl;
        }
    else if (circle==true && square==false)
        {
        if(x <= 0 && y <= 0){cout<<"yes"<<endl;}
        else if(x >= 0 && y >= 0){cout<<"yes"<<endl;}
        else cout<<"no"<<endl;
        }
    else {cout<<"no";}
    return 0;
}
