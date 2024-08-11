#include<iostream>
#include<sstream>
using namespace std;
class time{
private:
    int hour;
    int minute;
    int second;
    string privete_ampm;
public :
    int vaildtime(string);
    void gettime();
};

int time ::vaildtime(string str_time)
{
    if (str_time.length() != 10) // Check if the length of the input string is as expected
        return 0;
    string hour_time,mini_time,sec_time,ampm;
    hour_time=str_time.substr(0,2);
    mini_time=str_time.substr(3,2);
    sec_time=str_time.substr(6,2);
    ampm=str_time.substr(8,2);
    int ih,im,is;
    ih=stoi(hour_time);
    im=stoi(mini_time);
    is=stoi(sec_time);
    if(ih >= 1 && ih <= 12) {
        if(im >= 0 && im <= 59) {
            if(is >= 0 && is <= 59) {
                if(ampm == "am" || ampm == "pm" || ampm == "AM" || ampm == "PM")
                {
                        hour = ih;
                        minute = im;
                        second = is;
                        privete_ampm = ampm;
                        return 1; // valid time
                }
            }
        }
    }


    return 0;
}

void time::gettime()
{
    cout<<hour<<" Hour "<<minute<<" minute "<<second<<" sec "<<" "<<privete_ampm;
}

int main()
{
    int r;
    time time_check;
    string strtime;
    cout<<"Enter the time";
    cin>>strtime;
    r=time_check.vaildtime(strtime);
    if(r == 1) {
        cout << "Valid time: "<<endl;
        time_check.gettime();
    } else {
        cout << "Invalid time format" << endl;
    }

}
