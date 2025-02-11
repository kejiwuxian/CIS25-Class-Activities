#include <iostream>

using namespace std;

int main()
{


	return 0;
}

/*

// 3-3
function main(){
   move();
   move(); 
   move();
}

// 3-4
function main(){
   turnLeft();
   move();
   turnLeft();
   turnLeft();
   turnLeft();
   move();
}

// 3-5
function main(){
   putBeeper();
   move();
   putBeeper();
   move();
   putBeeper();
   move();
   putBeeper();
}

// 8-5
//Make Karel fill the world
//with beepers
function main() {
   //your code here
   while(leftIsClear()){
      putBeeperLine();
      newLine();
   }
   putBeeperLine();
}

function putBeeperLine(){
   putBeeper();
   while(frontIsClear()) {
      move();
      putBeeper();
   }
}

function newLine(){
   turnLeft();
   move();
   turnLeft();
   while(frontIsClear()) {
      move();
   }
   turnLeft();
   turnLeft();
}

// Place exactly one beeper on every square of the perimeter of the world that Karel is on Then turn around and remove those beepers.
// no matter of the world size. 
function putAndMove()
{
   putBeeper();
   move();
}
function pickAndMove()
{
   pickBeeper();
   move();
}
function turnAround()
{
      turnLeft();
      turnLeft();
}
function turnRight()
{
      turnLeft();
      turnLeft();
      turnLeft();
}
function main(){
   while(noBeepersPresent())
   {
      while(frontIsClear())
      {
         putAndMove();
      }
      turnLeft();
   }
   turnAround();
   while(beepersPresent())
   {
      while(frontIsClear())
      {
         pickAndMove();
      }
      turnRight();
   }
   turnRight();
}

// Write a version of the checkerboard program that works on odd size world.
function turnRight()
{
      turnLeft();
      turnLeft();
      turnLeft();
}
function putOddLine()
{
   while(frontIsClear())
   {
      putBeeper();
      move();
      move();
   }
   putBeeper();
}
function putEvenLine()
{
   while(frontIsClear())
   {
      move();
      putBeeper();
      move();
   }
}
function nextOddLine(){
   turnRight();
   move();
   turnRight();
}
function nextEvenLine(){
   turnLeft();
   move();
   turnLeft();
}
function main(){
   while(frontIsClear())
   {
      putOddLine();
      if(leftIsClear())
      {
         nextEvenLine();
         putEvenLine();
         nextOddLine();
      }
   }
}

// Write a version of the checkerboard program that works on any size world.
function putOddLine()
{
   while(frontIsClear())
   {
      move();
      putBeeper();
      if(frontIsClear()){move();}
   }
}
function putEvenLine()
{
   putBeeper();
   while(frontIsClear())
   {
      move();
      if(frontIsClear())
      {
         move();
         putBeeper();
      }
   }
}
function nextLine(){
   turnLeft();
   move();
   turnLeft();
   while(frontIsClear()){move();}
   turnAround();
}
function main(){
   while(frontIsClear())
   {
      putEvenLine();
      if(leftIsClear())
      {
         nextLine();
         putOddLine();
         if(leftIsClear()){nextLine();}}
   }
}

*/