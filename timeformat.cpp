#include <iostream.h>
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          
    cin >> hh;
    cout << "Minutes? ";          
    cin >> mm;
    cout << "Seconds? ";          
    cin >> ss;
}

Got it!


Skip Navigation Links
Home
Coding problems
DS & Algo. ▾
Languages ▾
Web. ▾
Programs ▾
Aptitude ▾
Interview ▾
CS Subjects ▾
More ▾



Ad by Valueimpression



Home » C++ programs » C++ class programs

C++ program to read time in HH:MM:SS format and convert into total seconds using class

Ad by Valueimpression
In this program we will read time in HH:MM:SS format and convert time into total seconds using class.

Convert time from HH:MM:SS format to seconds using class program in C++
﻿

/*C++ program to read time in HH:MM:SS format and convert into total seconds.*/
 
#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int seconds;
        int hh,mm,ss;
    public:
        void getTime(void);
        void convertIntoSeconds(void);
        void displayTime(void);
};
 
void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";          cin >> hh;
    cout << "Minutes? ";          cin >> mm;
    cout << "Seconds? ";          cin >> ss;
}
void Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::displayTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; //creating objects
     
    T.getTime();
    T.convertIntoSeconds();
    T.displayTime();
     
    return 0;
} 
