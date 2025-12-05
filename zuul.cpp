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
      }
      else if (current == h1 && dir == "SOUTH"){
	entrance1* current = e1;
	char* south = new char[20[];
	north.strcpy(south, "SOUTH");
	h1.setExit(south, e1);		       
      }
    }


  
    if(current->getExit(input)!= NULL){
      if (current == e1 && dir == "EAST"){
        if (hasKey){
	  //go in
        else{
	  //cout
        }
        }
      }
      current = current->getExit(input);
    }

    //get directions
    //entrance1 e1 = new entrance1();
    //e1.setDescription("Start");
    //entrance1 h1 = new entrance1();
    //char* north = new char[20];
    //north.strcpy(north, "NORTH");
    //e1.setExit(north, h1);
  }
}
