#ifndef TODOLIST_SUBJECT_H
#define TODOLIST_SUBJECT_H
#include "Observer.h"
#include <iostream>
#include <vector>
#include <set>

class Subject {

public:

    void addObserver(Observer *obs);

    void removeObserver(Observer *obs);

    void removeAllObservers();

    void notifyObservers();

    std::set<Observer *> observerSet;
};

#endif //TODOLIST_SUBJECT_H
