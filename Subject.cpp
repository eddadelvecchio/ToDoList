#include <set>
#include "Subject.h"

void Subject::addObserver(Observer *obs)
{
    observerSet.insert(obs);
}

void Subject::removeObserver(Observer *obs)
{
    observerSet.erase(obs);
}

void Subject::removeAllObservers()
{
    observerSet.clear();
}

void Subject::notifyObservers()
{
    std::set<Observer *>::iterator i;
    for( i=observerSet.begin(); i !=observerSet.end(); ++i)
    {
        Observer *obs = *i;
        obs->update(this);
    }

}
