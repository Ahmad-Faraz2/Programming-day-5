#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation(int,int,int);
int main()
{
    cout<<"Enter the needed hours:";
    int hours;
    cin>>hours;

    cout<<"Enter the days that the firm has:";
    int days;
    cin>>days;

    cout<<"Enter the number of all workers:";
    int workers;
    cin>>workers;

    cout << projectTimeCalculation(hours,days,workers);
    
    return 0;

}

string projectTimeCalculation(int hours,int days,int workers){
    int total_working_days = days - floor(0.1 * days);
    int total_working_hours = total_working_days * 8 * workers;
    int over_time_hours = total_working_days * 2 * workers;
    int total_hours = total_working_hours + over_time_hours;
    
    if (total_hours >= hours) {
        int hours_left = total_hours - hours;
        return "Yes! " + to_string(hours_left) + " hours left.";
    } 
    if (total_hours < hours) {
        int additional_hours = hours - total_hours;
        return "Not enough time! " + to_string(additional_hours) + " hours needed.";
    }


}