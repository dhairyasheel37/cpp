#include<iostream>
using namespace std;

class women
{
    private:
        string Aai,mom,aunt;

    public:
        string didi,sonu;
        void setdata(string Aai1,string mom1,string aunt1);
        void getdata();

};

void women :: getdata()
{
    cout << "Aai: " << Aai << ", Mom: " << mom << ", Aunt: " << aunt << endl;
    cout << "Didi: " << didi << ", Sonu: " << sonu << endl;

}

void women :: setdata(string Aai1,string mom1,string aunt1)
{
    Aai=Aai1;
    mom=mom1;
    aunt = aunt1;
    
}

int main(){
    women was;
    was.didi = "Kadambari";
    was.sonu = "Janhavee";
    was.setdata("Rukamani","Sunita","Rani");
    was.getdata();
    cout<<"hjghjgu"<<endl;
    return 0;
}