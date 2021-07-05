#ifndef TODOLIST_ELEMENT_H
#define TODOLIST_ELEMENT_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Date.h"

using namespace std;

class Element {

public:
    Element() = default;

    explicit Element(const string &name, Date date = Date());

    const string &getName() const;

    void setName(const string &name);

    bool isChecked() const;

    void setChecked(bool checked);

    void toggle();

    const string &getDateTime() const;

    void setDateTime(const string &dateTime);

    const Date getReminderDate() const;

    void setReminderDate(const Date &reminderDate);

    const string toString() const;

    bool operator==(const Element &rhs) const;

    bool operator!=(const Element &rhs) const;

private:
    string name;
    Date reminderDate; //Date e ora di quando è stato programmato l'elemento
    bool checked;
    string dateTime; //Data e ora di quando è stato completato l'elemento
};


#endif //TODOLIST_ELEMENT_H
