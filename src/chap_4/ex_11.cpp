// Use the time structure from exercise 9, and write a program that obtains two time values
// from the user in 12:59:59 format, stores them in struct time variables, converts each one to seconds (type int)
//, adds these quantities, converts the result back to hours-minutes-seconds, stores the result in a time structure, and finally
// displays the result in 12:59:59 format.

#include <iostream>
#include <iomanip>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time time1, time2, timeResult;
    
    int s1, s2, total_seconds;
    
    char dummy; 

    std::cout << "Digite o primeiro horario (formato hh:mm:ss): ";
    std::cin >> time1.hours >> dummy >> time1.minutes >> dummy >> time1.seconds;

    std::cout << "Digite o segundo horario (formato hh:mm:ss): ";
    std::cin >> time2.hours >> dummy >> time2.minutes >> dummy >> time2.seconds;

    s1 = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;

    s2 = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;

    total_seconds = s1 + s2;

    timeResult.hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    timeResult.minutes = total_seconds / 60;
    timeResult.seconds = total_seconds % 60;

    std::cout << "\nResultado da soma: ";
    std::cout << std::setfill('0') << std::setw(2) << timeResult.hours << ":"
              << std::setw(2) << timeResult.minutes << ":"
              << std::setw(2) << timeResult.seconds << std::endl;

    return 0;
}
