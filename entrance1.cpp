#include <iostream>
#include <cstring>
#include <map>
#include "entrance1.h"

//entrance1::entrance1(char* d, char* m, entrance1* e) {
//description = d;
//entrance1 = e;
//}

entrance1* entrance1::getExit(char* key) {
  for (auto exit:exits) {
    if(strcmp(key, exit.first) == 0) {
      return exit.second;
    }
  }
  return NULL;
}
void entrance1::addExit(char* k, entrance1* e) {
  exits.insert({k, e});
}

void entrance1::setDescription(char* d){
  description = new char[100];
  strcpy(description, d);
}

void entrance1::getDescription() {
  cout << description << endl;
}

void entrance1::addItem(char* i) {
  items.push_back(i);
}

char* entrance1::getItem() {
  for (vector <char*>::iterator it = items.begin(); it!= items.end(); ++ it){
    items.erase(it);
    return* it;
  }
  return NULL;
}

