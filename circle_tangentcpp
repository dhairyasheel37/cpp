#include<iostream>
using namespace std;
class circle
{
private:
    int radius;
    int cx;
    int cy;
    /* data */
public:
    circle(int x,int y,int r)
    {
        cx=x;
        cy=y;
        radius=r;
    }
    int istangent (int x1,int y1,int x2,int y2){
        int m,c;
        m=(y2-y1)/(x2-x1);
        c=(y1-m*x1);
        int r=istangent(m,c);
        if(r==1)
        {
            return 1;

        }
        else
        {
            return 0;
        }


    }
    int istangent (int m ,int c)
    {
        int a = 1+(m*m);
        int b = 2 * (m * c - m * cy - cx);
        int cc = cx*cx+c*c-2*c*cy+cy*cy-radius*radius;
        if (b*b==4*a*cc)
        {
            return 1;
        }
        else
        {
            return 0;
        }



    }
};




int main()
{
    int x;
    int y;
    int r;
    cout<<"Enter the center coordinates and radius of the circle"<<endl;
    cin>>x>>y>>r;
    circle c1(x,y,r);
    int x1,y1,x2,y2;
    cout<<"Enter the coordinates of the line"<<endl;
    cin>>x1>>y1>>x2>>y2;
    int a=c1.istangent(x1,y1,x2,y2);
    if(a==1)
    {
        cout<<"The line is tangent to the circle"<<endl;
    }
    else
    {
        cout<<"The line is not tangent to the circle"<<endl;
    }

}
