#ifndef TODOLIST_DATE_H
#define TODOLIST_DATE_H
#include <iostream>

class Date {

public:

    Date() = default;

    Date(int year, int month, int day);

    void setYear(int year);

    void setMonth(int month);

    void setDay(int day);

    int getYear() const;

    int getMonth() const;

    int getDay() const;

    bool isLeap();

    bool isValidDate();

    const std::string toString() const;

private:
    int year;
    int month;
    int day;
};


#endif //TODOLIST_DATE_H
