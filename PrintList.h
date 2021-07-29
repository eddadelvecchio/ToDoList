#ifndef TODOLIST_PRINTLIST_H
#define TODOLIST_PRINTLIST_H
#include "Subject.h"
#include "Observer.h"
#include "Observer.cpp"
#include <stdlib.h>

class PrintList : public Observer {


public:

    PrintList(Subject &subject);

    void update(Subject* subject);

    ~PrintList();


private:
        Subject& subject;

};


#endif //TODOLIST_PRINTLIST_H
