/** Finding Tomorrow's Date
 *  Computer Programming
 *  C00187998
 *  Gerard Murphy
 *  13/11/17
 */

/** Preprocessor directives */
#include <iostream>
#include <math.h>

/** Enables cout, cin and endl */
using namespace std;

/** Declaring structure containing day, month and year */
struct date
{
    int day ;
    int month ;
    int year ;
};

/**< User defined functions */
int CheckLeapYear(int);
void getCurrentDate(struct date &);

/** Main function */
int main()
{
    int monthlength [12] = {31, 28, 31, 30, 30 ,30, 31, 31, 30, 31, 30, 31};

    /**< Defines variables as a structure in the form of date */
    struct date today, tomorrow;

    getCurrentDate(today);

    cout << "\n\nTodays Date is :\t" << today.day << "/" << today.month << "/" << today.year << endl;

            tomorrow.day = today.day + 1;
            tomorrow.month = today.month;
            tomorrow.year = today.year;

    monthlength[1]=CheckLeapYear(today.year);

    if(tomorrow.day > monthlength[today.month-1])
        {
            tomorrow.day = 1;
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        }


    if (today.month > 12)
        {
            tomorrow.day = 1;
            tomorrow.month = 01;
            tomorrow.year = today.year + 1;
        }



    cout << "\n\nTomorrows Date is :\t" << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << endl;


    return 0;
}

void getCurrentDate (struct date &today)/**< Function to get todays date */
{
    cout << "Enter Todays Date\n\n" ;

    cout << "Day :\t" ;
    cin >> today.day ;

    cout << "Month :\t" ;
    cin >> today.month;

    cout << "Year :\t" ;
    cin >> today.year;

    return;
}

int CheckLeapYear(int year)
{
    int days = 28;

    if(year % 4 == 0)
{
    if(year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            days = 29;
        }
        else
        {

        }
    }
        else
        {
            days = 29;
        }

}
    return days;

}
