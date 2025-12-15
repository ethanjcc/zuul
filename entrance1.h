#ifndef entrance1_H
#define entrance1_H
#include <iostream>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

class entrance1 {
  public:
  char* description;
  void setDescription(char*);
  map<char*, entrance1*> exits;
  void print();
  entrance1* getExit(char*);
  void addExit(char*, entrance1*);
  void getDescription();
  char* getItem();
  vector <char*> items;
  void addItem(char*);  
};
#endif
