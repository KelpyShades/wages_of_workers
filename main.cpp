#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    cout << "@@@@@@@..KELPY COMPANY LIMITED..@@@@@@\n" << endl;
    cout << " @@@..Worker's Wage Calculator..@@@\n" << endl;
    cout << "Fixed Base Rate = 27 USD per Hour \n" << endl;
    string firstName,lastName;
    int x;
    float h,d,w,m,a;
    //let hourly rate be "hr"
    //let daily pay be "dr"
    //let weekly salary be "wr"
    //let monthly salary be "mr"
    //let yearly salary be "yr"
    const float hr = 1.24; // 1.24 USD per hour
    const float dr = 29.76; // 29.76 USD per day
    const float wr = 208.33; // 208.33 USD per week
    const float mr = 10000.00; // 10,000 USD per month
    const float ar = 120000.00; // 120,000 USD per hour

    float wages;
    cout <<"First Name: ";
    cin>>firstName;
    cout <<"Last Name: ";
    cin>>lastName;
    while (true) {
    cout <<"\n...SELECT PAYMENT PLAN..." << endl;
    cout <<"1. Hourly."<< endl;
    cout <<"2. Daily."<< endl;
    cout <<"3. Weekly."<< endl;
    cout <<"4. Monthly."<< endl;
    cout <<"5. Annual."<< endl;
    cin>>x;
    if (x==1) {
        cout <<"Total Working Hours: ";
        cin>>h;
        wages=h*hr;
        break;
    }else if (x==2) {
        cout <<"Total Working Days: ";
        cin>>d;
        wages=d*dr;
        break;
    }else if (x==3) {
        cout <<"Total Working Weeks: ";
        cin>>w;
        wages=w*wr;
        break;
    }else if (x==4) {
        cout <<"Total Working Months: ";
        cin>>m;
        wages=m*mr;
        break;
    }else if (x==5) {
        cout <<"Total Working Years: ";
        cin>>a;
        wages=a*ar;
        break;
    }else {
        cout <<"Invalid Entry\n";
        continue;
    }
    }
    cout <<"\n@@@..Results..@@@\n" << endl;
    cout <<"Worker: "<<firstName<<" "<<lastName<< endl;
    cout <<"Total Wage: "<<wages<<" USD"<< endl;
    return 0;
}
