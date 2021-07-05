#include "Element.h"
#include "Date.h"

Element::Element(const string &name, Date date) : name(name), reminderDate(date), checked(false), dateTime("") {}

const string &Element::getName() const {
    return name;
}

void Element::setName(const string &name) {
    Element::name = name;
}

bool Element::isChecked() const {
    return checked;
}

void Element::toggle() {
    setChecked(!checked);
    if(checked){
        //Prende la data e l'ora attuale locale e la trasforma in string
        auto t = time(nullptr);
        auto tm = *localtime(&t);
        ostringstream oss;
        oss << std::put_time(&tm, "%d/%m/%Y %H:%M");
        string str = oss.str();
        setDateTime(str);
    }
    else
        setDateTime("");
}

const string &Element::getDateTime() const {
    return dateTime;
}

void Element::setDateTime(const string &dateTime) {
    Element::dateTime = dateTime;
}

const Date Element::getReminderDate() const {
    return reminderDate;
}

void Element::setReminderDate(const Date &reminderDate) {
    Element::reminderDate = reminderDate;
}

const string Element::toString() const {
    return name + "|" + reminderDate.toString() + "|" + (checked?"|TRUE|" + dateTime :"");
}

bool Element::operator==(const Element &rhs) const {
    return name == rhs.name;
}

bool Element::operator!=(const Element &rhs) const {
    return !(rhs == *this);
}

void Element::setChecked(bool checked) {
    Element::checked = checked;
}
