#include "PrintList.h"
#include "ListElement.h"
#include <iostream>

void PrintList::update(Subject* subject) {
    ListElement* le;
    le = static_cast<ListElement*>(subject);
    for(const auto& el : le->getElements()){
        std::cout << el.toString() << endl;
    }
}

PrintList::~PrintList() {
    subject.removeObserver(this);
}

PrintList::PrintList(Subject &subject) : Observer(), subject(subject) {
    subject.addObserver(this);

}
