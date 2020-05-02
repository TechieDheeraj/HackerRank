// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/day-of-the-programmer/problem

int month [15] = { 0 };

void intializeMonths() {

    month[1] = 31;
    month[2] = 28;
    month[3] = 31;
    month[4] = 30;
    month[5] = 31;
    month[6] = 30;
    month[7] = 31;
    month[8] = 31;
    month[9] = 30;
    month[10] = 31;
    month[11] = 30;
    month[12] = 31;
}

void forleapYear(int y, int m) {
    if (y <= 1917) { // julian calender
        if (y % 4 == 0) {
            month[m] = 29;
        }
        else
            month[m] = 28;
    }
    else if (y == 1918)
        month[m] = 15;
    else {
        if (y % 400 == 0)
            month[m] = 29;
        else if ((y % 4 == 0) && (y % 100) != 0)
            month[m] = 29;
        else
            month[m] = 28;
    }
}

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) {

    int programmerDay = 256;
    int days;
    int mon = 0;
    int day = 0;
    string date;

    intializeMonths();

    for (mon = 1; mon <= 8; ++mon) { // Till 9 becaue 256th day will be reached
        if (mon == 2) 
            forleapYear(year, mon);

        days += month[mon];
    }

    day = (programmerDay - days);

    date += to_string(day) + ".0";
    date += to_string(mon) + ".";
    date += to_string(year);

    return date;
}
