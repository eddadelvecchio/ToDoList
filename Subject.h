#ifndef TODOLIST_SUBJECT_H
#define TODOLIST_SUBJECT_H
#include "Observer.h"
#include <iostream>
#include <vector>
#include <set>

class Subject {

public:

    virtual void addObserver(Observer *obs);
        
    virtual void removeObserver(Observer *obs);

    virtual void removeAllObservers();

    virtual void notifyObservers();

    std::set<Observer *> observerSet;
};

#endif //TODOLIST_SUBJECT_H
