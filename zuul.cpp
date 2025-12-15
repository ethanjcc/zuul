#include <iostream>
#include <cstring>
#include "entrance1.h"

using namespace std;
int main(){
  //entrance1
  entrance1* e1 = new entrance1();
  e1->setDescription("You wake up in a adandoned hotel. How did you get here?");
  char* north = new char[20];
  strcpy(north, "NORTH");
  
  //entrance2
  entrance1* e2 = new entrance1();
  e2->setDescription("You are on the second floor of the building");
  north = new char[20];
  strcpy(north, "NORTH");
  char* south = new char[20];
  strcpy(south, "SOUTH");
  
  //entrance3
  entrance1* e3 = new entrance1();
  e3->setDescription("You are on the third floor if the building");
  north = new char[20];
  strcpy(north, "NORTH");
  south = new char[20];
  strcpy(south, "SOUTH");
  
  //hallway1
  entrance1* h1 = new entrance1();
  h1->setDescription("You are in a dark hallway with doors on either side of you. Theres a key to room 3");
  north = new char[20];
  strcpy(north, "NORTH");
  char* west = new char[20];
  strcpy(west, "WEST");
  char* east = new char[20];
  strcpy(east, "EAST");
  south = new char[20];
  strcpy(south, "SOUTH");

  
  //hallway2
  entrance1* h2 = new entrance1();
  h2->setDescription("You walk farther down the hall. you are in a dark hallway with doors on either side of you");      
  north = new char[20];
  strcpy(north, "NORTH");
  west = new char[20];
  strcpy(west, "WEST");
  east = new char[20];
  strcpy(east, "EAST");
  south = new char[20];
  strcpy(south, "SOUTH");

  //hallway3
  entrance1* h3 = new entrance1();
  h3->setDescription("You walk farther down the hall. you are in a dark hallway with doors on either side of you, theres nails on the floor");  
  north = new char[20];
  strcpy(north, "NORTH");
  west = new char[20];
  strcpy(west, "WEST");
  east = new char[20];
  strcpy(east, "EAST");
  south = new char[20];
  strcpy(south, "SOUTH");

  
  //hallway4
  entrance1* h4 = new entrance1();
  h4->setDescription("You walk farther down the hall. you are in a dark hallway with doors on either side of you. Theres a key to room 1");
  west = new char[20];
  strcpy(west, "WEST");
  east = new char[20];
  strcpy(east, "EAST");
  south = new char[20];
  strcpy(south, "SOUTH");

  
  //hallway5
  entrance1* h5 = new entrance1();
  h5->setDescription("On the second level there is only a room to your right. The rest are blocked off");
  east = new char[20];
  strcpy(east, "EAST");
  south = new char[20];
  strcpy(south, "SOUTH");

  
  //room1
  entrance1* r1 = new entrance1();
  r1->setDescription("Its a normal looking hotel room. There is a safe on the shelf on the west wall of the room. Theres a key to room 5");
  west = new char[20];
  strcpy(west, "WEST");
  east = new char[20];
  strcpy(east, "EAST");

  
  //safe
  entrance1* s = new entrance1();
  s->setDescription("Its a small safe. Theres a hammer inside");
  east = new char[20];
  strcpy(east, "EAST");
    
  //room2
  entrance1* r2 = new entrance1();
  r2->setDescription("Its a trashed hotel room that smells really bad. Theres a sledgehammer on the floor");
  west = new char[20];
  strcpy(west, "WEST");
  
  //room3
  entrance1* r3 = new entrance1();
  r3->setDescription("Its a normal hotel room with a broken light. Theres a key to room 2");
  east = new char[20];
  strcpy(east, "EAST");
  
  //room4
  entrance1* r4 = new entrance1();
  r4->setDescription("Its a hotel room. Inside the closet is a skeleton holding a code. Theres a code to a safe");
  west = new char[20];
  strcpy(west, "WEST");
  
  //room5
  entrance1* r5 = new entrance1();
  r5->setDescription("There is a large shelf. Inside is a crowbar");
  west = new char[20];
  strcpy(west, "WEST");
  
  //closet
  entrance1* c = new entrance1();
  c->setDescription("Broom closet. Nothing special. Pieces of wood are on the floor");
  west = new char[20];
  strcpy(west, "WEST");

  
  //brokenstairs
  entrance1* b = new entrance1();
  b->setDescription("There are stairs that need to be fixed. Would take you to floor 2");
  north = new char[20];
  strcpy(north, "NORTH");
  east = new char[20];
  strcpy(east, "EAST");
  
  //ledge
  entrance1* l = new entrance1();
  l->setDescription("Hotel room but the wall facing outside is gone. Could escape this way but the fall would kill you");
  west = new char[20];
  strcpy(west, "WEST");
  
  //brokenelevator
  entrance1* be = new entrance1();
  be->setDescription("Its a elevator door but it won't open. If you are able to open this you could get to floor 3");
  north = new char[20];
  strcpy(north, "NORTH");
  east = new char[20];
  strcpy(east, "EAST");

  
  //mysteriousperson
  entrance1* mp = new entrance1();
  mp->setDescription("There is a mysterious person in this room. He has a parachute you can take");
  south = new char[20];
  strcpy(south, "SOUTH");


  //exits
  e1->addExit(north, h1);

  e2->addExit(north, h5);
  e2->addExit(south, b);
  
  e3->addExit(north, mp);
  e3->addExit(south, be);
  
  h1->addExit(north, h2);
  h1->addExit(west, r1);
  h1->addExit(east, r2);
  h1->addExit(south, e1);		       
  
  h2->addExit(north, h3);
  h2->addExit(west, r3);
  h2->addExit(east, r4);
  h2->addExit(south, h1);
  
  h3->addExit(north, h4);
  h3->addExit(west, b);
  h3->addExit(east, c);
  h3->addExit(south, h2);
  
  h4->addExit(west, be);
  h4->addExit(east, l);
  h4->addExit(south, h3);
  
  h5->addExit(east, r5);
  h5->addExit(south, e2);
  
  r1->addExit(west, s);
  r1->addExit(east, h1);
  
  s->addExit(east, r1);
  
  r2->addExit(west, h1);
  
  r3->addExit(east, h2);
  
  r4->addExit(west, h2);
  
  r5->addExit(west, h5);
  
  c->addExit(west, h3);
  
  b->addExit(north, e2);
  b->addExit(east, h3);
  
  l->addExit(west, h3);
  
  be->addExit(north, e3);
  be->addExit(east, h4);
  
  mp->addExit(south, e3);

  //add items
  char* room3key = new char[20];
  strcpy(room3key, "room3key");
  h1->addItem(room3key);
  char* nails = new char[20];
  strcpy(nails, "nails");
  h3->addItem(nails);
  char* room1key = new char[20];
  strcpy(room1key, "room1key");
  h4->addItem(room1key);
  char* room5key = new char[20];
  strcpy(room5key, "room5key");
  r1->addItem(room5key);
  char* hammer = new char[20];
  strcpy(hammer, "hammer");
  s->addItem(hammer);
  char* sledgehammer = new char[20];
  strcpy(sledgehammer, "sledgehammer");
  r2->addItem(sledgehammer);
  char* room2key = new char[20];
  strcpy(room2key, "room2key");
  r3->addItem(room2key);
  char* safecode = new char[20];
  strcpy(safecode, "safecode");
  r4->addItem(safecode);
  char* crowbar = new char[20];
  strcpy(crowbar, "crowbar");
  r5->addItem(crowbar);
  char* wood = new char[20];
  strcpy(wood, "wood");
  c->addItem(wood);
  char* parachute = new char[20];
  strcpy(parachute, "parachute");
  mp->addItem(parachute);
  
  bool win = false;
  bool inInv = false;
  int inInv3 = 0;
  
  char* input = new char[20];
  char* drop = new char[20];

  
  entrance1* current = e1;
  cout << "You wake up in a adandoned hotel. How did you get here?" << endl;

  vector <char*> inv;
  
  while(win == false){
    cin >> input;
    if(current == h2 && strcmp(input, "WEST") == 0){
      cout << "you need room3key" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        cout << "works" << endl;
	if (strcmp(*it, "room3key") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
        cout << "you used the room 3 key to get in" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    else if(current == h1 && strcmp(input, "EAST") == 0){
      cout << "you need room2key" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "room2key") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
	cout << "you used the room 2 key to get in" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    else if(current == h2 && strcmp(input, "EAST") == 0){
      cout << "The door to the room is boarded up. Find a way to break them" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "sledgehammer") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
	cout << "you used the sledgehammer to break the boards" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    else if(current == h1 && strcmp(input, "WEST") == 0){
      cout << "you need room1key" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "room1key") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
        cout << "you used the room 1 key to get in" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    else if(current == r1 && strcmp(input, "WEST") == 0){
      cout << "you need a code to the safe" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "safecode") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
        cout << "you used the safe code to open the safe" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    else if(current == b && strcmp(input, "NORTH") == 0){
      cout << "you need to find a way to fix the stairs" << endl;
      inInv3 = 0;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "nails") == 0 || strcmp(*it, "hammer") == 0 || strcmp(*it, "wood") == 0) {
          inInv3++;
        }
      }
      if (inInv3 == 3) {
        cout << "you fixed the stairs to go to the second level" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    else if(current == h5 && strcmp(input, "EAST") == 0){
      cout << "you need room5key" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "room5key") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
        cout << "you used the room 5 key to get in" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    else if(current == h4 && strcmp(input, "WEST") == 0){
      cout << "The door is jammed close you need to pry it open" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "crowbar") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
        cout << "you opened the elevator now you are on floor 3" << endl;
        current = current->getExit(input);
        current->getDescription();
      }
    }
    //win condition
    else if(current == h4 && strcmp(input, "EAST") == 0){
      cout << "dont jump you will die" << endl;
      inInv = false;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it){
        if (strcmp(*it, "parachute") == 0) {
          inInv = true;
        }
      }
      if (inInv == true) {
        cout << "You eScaped and you win!" << endl;
        win = true;
      }
    }

    //moving to rooms
    else if(current->getExit(input)!= NULL){
      current = current->getExit(input);
      current->getDescription();
      /*if (current == e1 && strcmp(input, "NORTH") == 0){
        entrance1* current = h1;
	}*/
    }
    //pick up item
    else if (strcmp(input, "GETITEM") == 0){
      //cout << "get item works" << endl;
      char* item = current->getItem();
      //cout << "get item works 2" << endl;
      if (item != NULL){
	inv.push_back(item);
      }
    }
    //drop item
    else if (strcmp(input, "DROPITEM") == 0){
      cout << "which one" << endl;
      cin >> drop;
      for (vector <char*>:: iterator it = inv.begin(); it != inv.end(); ++ it) {
       if(strcmp(*it, drop) == 0){
         inv.erase(it);
	 current->addItem(drop);
	 break;
	}
      } 
    }
    else {
      cout << "No door!" << endl;
    }
  }  
}
    /*
    //going north to hallway2 from hallway1
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "NORTH") == 0){
        entrance1* current = h2;
      }
      //going west to room1 from hallway1
      else if (current == h1 && strcmp(input, "WEST") == 0){
        cout << "You have to have the key to go into room 1" << endl;
        //if (key in inventory){
	entrance1* current = r1;
	//}
	  //else {
	  //cout << "you dont have the key" << endl;
	  //}
      }
      //going east to room2 from hallway1
      else if (current == h1 && strcmp(input, "EAST") == 0){
	cout << "You have to have the key to go into room 2" << endl;
	//if (key in inventory){
	entrance1* current = r2;
	//}
	  //else {
	  //cout << "you dont have the key" << endl;
	  //}
      }
      
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
	entrance1* current = e1;
	
      }
    }
     
    //going north to hallway3 from hallway2
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "NORTH") == 0){
        entrance1* current = h3;       
      }
      //going west to room3 from hallway2
      else if (current == h1 && strcmp(input, "WEST") == 0){
        cout << "You have to have the key to go into room 3" << endl;
        //if (key in inventory){
        entrance1* current = r3;  
        //}
          //else {
          //cout << "you dont have the key" << endl;
          //}
      }
      //going east to room4 from hallway2
      else if (current == h1 && strcmp(input, "EAST") == 0){
        cout << "There are boards blocking your way. Maybe get something to break in?" << endl;
        //if (sledgehammer in inventory){
        entrance1* current = r4;        
        //}
          //else {
          //cout << "you dont have the key" << endl;
          //}
      }
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
        entrance1* current = h1;        
      }
    }

    //going north to hallway4 from hallway3
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "NORTH") == 0){
        entrance1* current = h4;        
      }
      //going east to brokenstairs from hallway3
      else if (current == h1 && strcmp(input, "WEST") == 0){
        cout << "Stairs need to be fixed to go up. Maybe find tools to fix it?" << endl;
        //if (nails, hammer, and wood in inventory){
        entrance1* current = b;
        
        //}
          //else {
          //cout << "you dont have the tools necessary" << endl;
          //}
      }
      //going east to closet from hallway3
      else if (current == h1 && strcmp(input, "EAST") == 0){
        cout << "There are boards blocking your way. Maybe get something to break in?" << endl;
        entrance1* current = c;
        
      }
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
        entrance1* current = h2;
        
      }
    }

    //going west to broken elevator from hallway4
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "WEST") == 0){
	cout << "The door to the elevator is jammed closed. Maybe use something to pry it open?" << endl;
	//if (crowbar in inventory){
        entrance1* current = be;
        
	//}
	//else {
	//cout >> "you dont have the tools necessary" << endl;
	//}
      }
      //going east to ledge from hallway4
      else if (current == h1 && strcmp(input, "EAST") == 0){
        cout << "The wall here fell, its a long drop down" << endl;
	//if (parachute in inventory){
        entrance1* current = l;
        
	//}
	//else {
	//cout << "dont go here you will die from the fall" << endl;
	//}
      }
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
        entrance1* current = h3;
        
      }
    }

    //going from broken stairs to entrance2
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "NORTH") == 0){
	entrance1* current = e2;
	
      }
    }
    
    //going from entrance2 to hallway5
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "NORTH") == 0){
	entrance1* current = h5;
	
      }
      //going south from entrance2 to brokenstairs
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
	entrance1* current = b;
        
      }
    }

    //going east to room5 from hallway5
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "EAST") == 0){
	cout << "you need the room 5 key to enter" << endl;
	//if (key in inventory){
	entrance1* current = r5;
        
        //}
	//else{
	//cout << "you dont have the key" << endl;
	//}
      }
      //going south to entrance2
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
	entrance1* current = e2;
	
      }
    }

    //going from broken elevator to entrance3
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "NORTH") == 0){
        entrance1* current = e3;
	
      }
    }

    //going from entrance3 to mysterious person
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "NORTH") == 0){
	entrance1* current = mp;
        
      }
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
	entrance1* current = be;
	
      }
    }
    
    //going from room1 to the safe
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "WEST") == 0){
	entrance1* current = s;
	
      }
    }
    //room exits
    if(current->getExit(input)!= NULL){
      if (current == h1 && strcmp(input, "EAST") == 0){
        entrance1* current = h1;
	
      }
      else if (current == h1 && strcmp(input, "EAST") == 0){
        entrance1* current = r1;
        
      }

      else if (current == h1 && strcmp(input, "WEST") == 0){
        entrance1* current = h1;
        
      }
      else if (current == h1 && strcmp(input, "EAST") == 0){
        entrance1* current = h2;
        
      }
      else if (current == h1 && strcmp(input, "WEST") == 0){
        entrance1* current = h2;
        
      }
      else if (current == h1 && strcmp(input, "EAST") == 0){
        entrance1* current = h3;
        
      }
      else if (current == h1 && strcmp(input, "WEST") == 0){
        entrance1* current = h3;
        
      }
      else if (current == h1 && strcmp(input, "EAST") == 0){
        entrance1* current = h4;
        
      }
      else if (current == h1 && strcmp(input, "WEST") == 0){
        entrance1* current = h4;
        
      }
      else if (current == h1 && strcmp(input, "WEST") == 0){
        entrance1* current = h5;
        
      }
      else if (current == h1 && strcmp(input, "SOUTH") == 0){
        entrance1* current = e3;
        
      }
    }/*
    //if(current->getExit(input)!= NULL){
    //  if (current == e1 && dir == "EAST"){
    //    if (hasKey){
	    //go in
    //    }
    //      else{
    	    //cout
    //      }
    //    }
    //    current = current->getExit(input);
    //}

    //get directions
    //entrance1 e1 = new entrance1();
    //e1.setDescription("Start");
    //entrance1 h1 = new entrance1();
    //char* north = new char[20];
    //north.strcpy(north, "NORTH");
    //e1.setExit(north, h1);
  }
  }*/
