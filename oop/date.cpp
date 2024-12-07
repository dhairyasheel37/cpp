#include<iostream>
#include<sstream>
using namespace std;

class date
{
    private :
    int day,month,year;
    string valid_date;

    public :
    int setdate(string);
    void getdate();
};

int date ::setdate(string str)
{
    string day_str,month_str,year_str;
    day_str = str.substr(0,2);
    month_str  = str.substr(3,2);
    year_str = str.substr(6,4);
    int iday,imonth,iyear;
    iday = stoi(day_str);
    imonth = stoi(month_str);
    iyear = stoi(year_str);

    int sm[12]={31,29,30,31,30,31,30,31,30,31,30,31};
    if((iyear%4==0 && iyear % 100 != 0)||(iyear % 400 == 0 ))
	{
		sm[1]=sm[1]-1;
	}
	
	if(!(imonth>0 && imonth<13))
	{
		return 0;
	}
    if((iday>0 && iday<=sm[imonth-1]))
    {
        return 0;
    }
    if(!(iyear > 1947 && iyear<2025))
    {
        return 0;
    }
    day = iday;
	month = imonth;
	year = iyear;
	valid_date = str;
	
	return 1;

}

void date::getdate()
{
	cout<<valid_date;
}

int main(){
    date day1;
    string str;
    cout<<"Enter date in DD/MM/YYYY format"<<endl;
    cin>>str;
    int r;
    r=day1.setdate(str);
    if(r==0)
    {
        cout<<"Invalid date"<<endl;
    }
    else{
        day1.getdate();
    }
    return 0;
}