#include <iostream>
#include <cstring>

using namespace std;
def main(){
  //entrance1
  entrance1 e1 = new entrance1();
  e1.setDescription("You wake up in a adandoned hotel. How did you get here?")
  entrance1 e1 = new entrance1();

  //entrance2
  entrance1 e2 = new entrance1();
  e2.setDescription("You are on the second floor of the building");
  entrance1 e2 = new entrance1();

  //entrance3
  entrance1 e3 = new entrance1();
  e3.setDescription("You are on the third floor if the building");
  entrance1 e3 = new entrance1();

  //hallway1
  entrance1 h1 = new entrance1();
  h1.setDescription("You are in a dark hallway with doors on either side of you");
  entrance1 h1 = new entrance1();

  //hallway2
  entrance1 h2 = new entrance1();
  h2.setDescription("You walk farther down the hall. you are in a dark hallway with doors on either side of you");
  entrance1 h2 = new entrance1();

  //hallway3
  entrance1 h3 = new entrance1();
  h3.setDescription("You walk farther down the hall. you are in a dark hallway with doors on either side of you");
  entrance1 h3 = new entrance1();

  //hallway4
  entrance1 h4 = new entrance1();
  h4.setDescription("You walk farther down the hall. you are in a dark hallway with doors on either side of you");
  entrance1 h4 = new entrance1();

  //hallway5
  entrance1 h5 = new entrance1();
  h5.setDescription("On the second level there is only a room to your right. The rest are blocked off");
  entrance1 h5 = new entrance1();

  //room1
  entrance1 r1 = new entrance1();
  r1.setDescription("Its a normal looking hotel room. There is a safe on the shelf on the west wall of the room");
  entrance1 r1 = new entrance1();

  //safe
  entrance1 s = new entrance1();
  s.setDescription("Its a small safe");
  entrance1 s = new entrance1();

  //room2
  entrance1 r2 = new entrance1();
  r2.setDescription("Its a trashed hotel room that smells really bad");
  entrance1 r2 = new entrance1();

  //room3
  entrance1 r3 = new entrance1();
  r3.setDescription("Its a normal hotel room with a broken light");
  entrance1 r3 = new entrance1();

  //room4
  entrance1 r4 = new entrance1();
  r4.setDescription("Its a hotel room. Inside the closet is a skeleton holding a code");
  entrance1 r4 = new entrance1();

  //room5
  entrance1 r5 = new entrance1();
  r5.setDescription("There is a large shelf. Inside is a crowbar");
  entrance1 r5 = new entrance1();

  //closet
  entrance1 c = new entrance1();
  c.setDescription("Broom closet. Nothing special");
  entrance1 c = new entrance1();

  //brokenstairs
  entrance1 b = new entrance1();
  b.setDescription("There are stairs that need to be fixed. Would take you to floor 2");
  entrance1 b = new entrance1();

  //ledge
  entrance1 l = new entrance1();
  l.setDescription("Hotel room but the wall facing outside is gone. Could escape this way but the fall would kill you");
  entrance1 l = new entrance1();

  //brokenelevator
  entrance1 be = new entrance1();
  be.setDescription("Its a elevator door but it won't open. If you are able to open this you could get to floor 3");
  entrance1 be = new entrance1();

  //mysteriousperson
  entrance1 mp = new entrance1();
  mp.setDescription("There is a mysterious person in this room. He gives you a parachute");
  entrance1 mp = new entrance1();

  win = false;
  
  while(win == false){
    entrance1* current = e1;
    cout << "You wake up in a adandoned hotel. How did you get here?" << endl;
    cin >> input;
    //going north to hallway1 from entrance1
    if(current->getExit(input)!= NULL){
      if (current == e1 && dir == "NORTH"){
        entrance1* current = h1;
        char* north = new char[20];
        north.strcpy(north, "NORTH");
        e1.setExit(north, h1);
      }
    }
    //going north to hallway2 from hallway1
    if(current->getExit(input)!= NULL){
      if (current == h1 && dir == "NORTH"){
        entrance1* current = h2;
        char* north = new char[20];
        north.strcpy(north, "NORTH");
        h1.setExit(north, h2);
      }
      //going east to room1 from hallway1
      else if (current == h1 && dir == "WEST"){
        cout << "You have to have the key to go into room 1" << endl;
        //if (key in inventory){
	    entrance1* current = r1;
	    char* east = new char[20];
	    west.strcpy(west, "WEST");
	    h1.setExit(west, r1);
	//}
	  //else {
	  //cout << "you dont have the key" << endl;
	  //}
      }
      //going east to room2 from hallway1
      else if (current == h1 && dir == "EAST"){
	cout << "You have to have the key to go into room 2" << endl;
	//if (key in inventory){
	    entrance1* current = r2;
	    char* east = new char[20];
	    east.strcpy(east, "EAST");
	    h1.setExit(east, "EAST");
	//}
	  //else {
	  //cout << "you dont have the key" << endl;
	  //}
      }
      else if (current == h1 && dir == "SOUTH"){
	entrance1* current = e1;
	char* south = new char[20];
	north.strcpy(south, "SOUTH");
	h1.setExit(south, e1);		       
      }
    }
     if(current->getExit(input)!= NULL){
      if (current == e1 && dir == "NORTH"){
        entrance1* current = h1;
        char* north = new char[20];
        north.strcpy(north, "NORTH");
        e1.setExit(north, h1);
      }
    }
     
    //going north to hallway3 from hallway2
    if(current->getExit(input)!= NULL){
      if (current == h2 && dir == "NORTH"){
        entrance1* current = h3;
        char* north = new char[20];
        north.strcpy(north, "NORTH");
        h2.setExit(north, h3);
      }
      //going east to room3 from hallway2
      else if (current == h2 && dir == "WEST"){
        cout << "You have to have the key to go into room 3" << endl;
        //if (key in inventory){
            entrance1* current = r3;
            char* east = new char[20];
            west.strcpy(west, "WEST");
            h2.setExit(west, r3);
        //}
          //else {
          //cout << "you dont have the key" << endl;
          //}
      }
      //going east to room4 from hallway2
      else if (current == h2 && dir == "EAST"){
        cout << "There are boards blocking your way. Maybe get something to break in?" << endl;
        //if (sledgehammer in inventory){
            entrance1* current = r4;
            char* east = new char[20];
            east.strcpy(east, "EAST");
            h2.setExit(east, "EAST");
        //}
          //else {
          //cout << "you dont have the key" << endl;
          //}
      }
      else if (current == h2 && dir == "SOUTH"){
        entrance1* current = h1;
        char* south = new char[20];
        north.strcpy(south, "SOUTH");
        h2.setExit(south, h1);
      }
    }

    //going north to hallway4 from hallway3
    if(current->getExit(input)!= NULL){
      if (current == h3 && dir == "NORTH"){
        entrance1* current = h4;
        char* north = new char[20];
        north.strcpy(north, "NORTH");
        h3.setExit(north, h4);
      }
      //going east to brokenstairs from hallway3
      else if (current == h3 && dir == "WEST"){
        cout << "Stairs need to be fixed to go up. Maybe find tools to fix it?" << endl;
        //if (nails, hammer, and wood in inventory){
            entrance1* current = b;
            char* east = new char[20];
            west.strcpy(west, "WEST");
            h3.setExit(west, b);
        //}
          //else {
          //cout << "you dont have the tools necessary" << endl;
          //}
      }
      //going east to closet from hallway3
      else if (current == h3 && dir == "EAST"){
        cout << "There are boards blocking your way. Maybe get something to break in?" << endl;
          entrance1* current = c;
          char* east = new char[20];
          east.strcpy(east, "EAST");
          h3.setExit(east, "EAST");
      }
      else if (current == h3 && dir == "SOUTH"){
        entrance1* current = h2;
        char* south = new char[20];
        north.strcpy(south, "SOUTH");
        h3.setExit(south, h2);
      }
    }

    //going west to broken elevator from hallway4
    if(current->getExit(input)!= NULL){
      if (current == h4 && dir == "WEST"){
	cout << "The door to the elevator is jammed closed. Maybe use something to pry it open?" << endl;
	//if (crowbar in inventory){
          entrance1* current = be;
          char* west = new char[20];
          west.strcpy(west, "WEST");
          h4.setExit(west, be);
	//}
	//else {
	//cout >> "you dont have the tools necessary" << endl;
	//}
      }
      //going east to ledge from hallway4
      else if (current == h4 && dir == "EAST"){
        cout << "The wall here fell, its a long drop down" << endl;
	//if (parachute in inventory){
            entrance1* current = l;
            char* east = new char[20];
            east.strcpy(east, "EAST");
            h4.setExit(east, "EAST");
	//}
	//else {
	//cout << "dont go here you will die from the fall" << endl;
	//}
      }
      else if (current == h4 && dir == "SOUTH"){
        entrance1* current = h3;
        char* south = new char[20];
        north.strcpy(south, "SOUTH");
        h4.setExit(south, h3);
      }
    }

    //going from broken stairs to entrance2
    if(current->getExit(input)!= NULL){
      if(current == b && dur == "NORTH"){
	entrance1* current = e2;
	char* north = new char[20];
	north.strcpy(north, "NORTH");
	b.setExit(north, e2);
      }
    }
    
    //going from entrance2 to hallway5
    if(current->getExit(input)!= NULL){
      if(current == e2 && dir == "NORTH"){
	entrance1* current = h5;
	char* north = new char[20];
	north.strcpy(north, "NORTH");
	e2.setExit(north, h5);
      }
      //going south from entrance2 to brokenstairs
      else if(current == e2 && dir == "SOUTH"){
	entrance1* current = b;
	char* south = new char[20];
	south.strcpy(south, "SOUTH");
	e2.setExit(south, b);
      }
    }

    //going east to room5 5 from hallway5
    if(current->getExit(input)!= NULL){
      if(current == h5 && dir == "EAST"){
	cout << "you need the room 5 key to enter" << endl;
	//if (key in inventory){
          entrance1* current = ;
          char* north = new char[20];
          north.strcpy(north, "NORTH");
          e2.setExit(north, h5);
        //}
	//else{
	//cout << "you dont have the key" << endl;
	//}
      }
      //going south to entrance2
      else if (current == h5 && dir == "SOUTH") {
	entrance1* current = e2;
	char* south = new char[20];
	north.strcpy(south, "SOUTH");
	h5.setExit(south, e2);
      }
    }

    //going from broken elevator to entrance3
    if(current->getExit(input)!= NULL){
      if(current == be && dir == "NORTH"){
        entrance1* current = e3;
	char* north = new char[20];
	north.strcpy(north, "NORTH");
	be.setExt(north, e3);
      }
    }

    //going from entrance3 to mysterious person
    if(current->getExit(input)!= NULL){
      if(current == e3 && dir == "NORTH"){
	entrance1* current = mp;
	char* north = new char[20];
	north.strcpy(north, "NORTH");
	e3.setExit(north, mp)
      }
      else if (current == e3 && dir == "SOUTH"){
	entrance1* current = be;
	char* south = new char[20];
	south.strcpy(south, "SOUTH");
	e3.setExit(south, be);
      }
    }
    
    //going from room1 to the safe
    if(current->getExit(input)!= NULL){
      if(current == r1 && dir == "WEST"){
	entrance1* current = s;
	char* west = new char[20];
	west.strcpy(west, "WEST");
	r1.setExit(west, s);
      }
    }
    //room exits
    if(current->getExit(input)!= NULL{
      else if(current == r1 && dir == "EAST"){
        entrance1* current = h1;
	char* east = new char[20];
	east.strcpy(east, "EAST");
	r1.setExit(east, h1);
      }
      else if(current == s && dir == "EAST"){
        entrance1* current = r1;
        char* east = new char[20];
        east.strcpy(east, "EAST");
        s.setExit(east, r1);
      }

      else if(current == r2 && dir == "WEST"){
        entrance1* current = h1;
        char* west = new char[20];
        west.strcpy(west, "WEST");
        r2.setExit(west, h1);
      }
      else if(current == r3 && dir == "EAST"){
        entrance1* current = h2;
        char* east = new char[20];
        east.strcpy(east, "EAST");
        r3.setExit(east, h2);
      }
      else if(current == r4 && dir == "WEST"){
        entrance1* current = h2;
        char* west = new char[20];
        west.strcpy(west, "WEST");
        r4.setExit(west, h2);
      }
      else if(current == b && dir == "EAST"){
        entrance1* current = h3;
        char* east = new char[20];
        east.strcpy(east, "EAST");
        b.setExit(east, h3);
      }
      else if(current == c && dir == "WEST"){
        entrance1* current = h3;
        char* west = new char[20];
        west.strcpy(west, "WEST");
        c.setExit(west, h3);
      }
      else if(current == be && dir == "EAST"){
        entrance1* current = h4;
        char* east = new char[20];
        east.strcpy(east, "EAST");
        be.setExit(east, h4);
      }
      else if(current == l && dir == "WEST"){
        entrance1* current = h4;
        char* west = new char[20];
        west.strcpy(west, "WEST");
        l.setExit(west, h3);
      }
      else if(current == r5 && dir == "WEST"){
        entrance1* current = h5;
        char* west = new char[20];
        west.strcpy(west, "WEST");
        r5.setExit(west, r5);
      }
      else if(current == mp && dir == "SOUTH"){
        entrance1* current = e3;
        char* south = new char[20];
        south.strcpy(south, "SOUTH");
        mp.setExit(south, e3);
      }


    }

    

  
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
}
