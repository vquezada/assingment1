#include <iostream>
using namespace std;

int main(){

  int roomCap; //the amount of people that can be in the room
  int peopleInRoom; //the amount of people atteneding the meeting



  cout << "What is the capacity of this room?"; //asks the number of the room capacity
  cin >> roomCap; // saves into roomCap varible

  cout << "How many people will attend the meeting"; // how many people are going to the meeting
  cin >> peopleInRoom; //gets stored into the peopleInRoom varible

// if statment.... if theres less people the the capacity its legal and they can add additional people
  if (peopleInRoom <= roomCap){
    cout << "it is legal to hold the meeting, you can add "<< roomCap - peopleInRoom << " addition people";
//prints thats its legal                                     equation for the difference (less people)
  }
  else{//else statment... if people in room is greater then the room capacity
    cout << "the meeting cannot be held as planned due to fire regulations " << peopleInRoom - roomCap << " must be excluded in order to meet the fire regulations.";
  }// prints that it goes against fire regulations                          //equation for the difference of people (extra people)
   return 0;
 }
