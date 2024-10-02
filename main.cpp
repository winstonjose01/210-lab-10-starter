#include <iostream>
using namespace std;

int main() {

    // add any code here, sort of a 'hello world plus' code block
    time_t now = time(0);  // Get the current time
    tm* localtm = localtime (&now); // Get the local time
    
    cout << "\nHello World!";
    cout << "\nThis is a sample program for Lab 10 - Fork This Repo";
    int year = localtm -> tm_year + 1900; 
    int month = localtm -> tm_mon + 1;
    int day = localtm -> tm_mday;

    cout << "\nDate: " << day << "-" << month << "-" << year << endl;


    return 0;
}