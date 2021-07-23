#ifndef TODOLIST_LISTELEMENT_H
#define TODOLIST_LISTELEMENT_H

#include <map>
#include <list>
#include <cstring>
#include <vector>
#include <fstream>
#include <algorithm>
#include "Element.h"

using namespace std;
class ListElement {
public:

    void addList(const string& listName);

    void removeList();

    const string& getCurrentListName() const;

    void changeList(const string &currentList);

    void addElement(const Element& el);

    void removeElement(const Element& el);

    const list<Element>& getElements() const;

    list<Element>::iterator find(string name);

    void loadFromFile(string fileName);

    void writeToFile();

    const int getToggledElements();

private:
    map<string, list<Element>> lists;
    string currentList;
};


#endif //TODOLIST_LISTELEMENT_H

