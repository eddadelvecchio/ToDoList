#include "Date.h"
#include <iostream>
#include <string>
#include <string_view>
#include <sstream>
#include <stdexcept>

Date::Date(int year,int month,int day): year(year), month(month), day(day) {}

    const int MAX_VALID_YR = 9999;
    const int MIN_VALID_YR = 1800;

    int Date::getYear() const {
        return year;
    }

    int Date::getMonth() const {
        return month;
    }

    int Date::getDay() const {
        return day;
    }

    void Date::setYear(int year) {
        Date::year = year;
        if (!this->isValidDate()){
            throw std::invalid_argument("La data inserita non è valida");
        };

    }

    void Date::setMonth(int month) {
        Date::month = month;
        if (!this->isValidDate()){
            throw std::invalid_argument("La data inserita non è valida");
        };
    }

    void Date::setDay(int day) {
        Date::day = day;
        if (!this->isValidDate()){
            throw std::invalid_argument("La data inserita non è valida");
        };
    }

    bool isLeap(int year){                                                 // Controllo che l'anno sia bisestile, verifico che sia un multiplo di 4 e non un multiplo di 100 o se l'anno è un multiplo di 400
        return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
    }

    bool Date::isValidDate()                                             //verifico che la data sia corretta
    {
        if (year > MAX_VALID_YR || year < MIN_VALID_YR)                 //controllo sull'anno: non è troppo nel passato o troppo nel futuro
            return false;

        if (month < 1 || month > 12)               //verifica sul mese
            return false;

        if (day < 1 || day > 31)                   //verifica sul giorno
            return false;

        if (month == 2)                            //verifica su febbraio in caso di anno bisestile
        {
        if (::isLeap(year))
            return (day <= 29);
        else
            return (day <= 28);
        }

        if (month == 4 || month == 6 ||           //verifica sui giorni di aprile, giugno, settembre, novembre
            month == 9 || month == 11)
                return (day <= 30);

        if (month == 1 || month == 3 ||           //verifica sui giorni di gennaio, marzo, maggio, luglio, agosto, ottobre, dicembre
            month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12 )
                return (day <= 31);


        return true;
    }

    const std::string Date::toString() const {
        std::stringstream ss;
        ss << day << "/" << month << "/" << year;
        return ss.str();
    }