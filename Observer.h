#ifndef TODOLIST_OBSERVER_H
#define TODOLIST_OBSERVER_H

class Subject;

class Observer {

public:

    Observer();

    virtual void update(Subject* subject);

    virtual ~Observer();


};


#endif //TODOLIST_OBSERVER_H
