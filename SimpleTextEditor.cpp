#include <cctype>
#include <iostream>
#include "buffer.h"
#include "foreach.h"
#include "simpio.h"
using namespace std;

//function prototypes.

void executeCommand(EditorBuffer & buffer, string line);
void displayBuffer(EditorBuffer & buffer);
void printHelpText();

int main(){
  EditorBuffer buffer;
  while (true){
    string cmd = getLine ("*");
    if (cmd != ""){
      executeCommand(buffer, cmd); 
    }
  }
  return 0;
}

void executeCommand(EditorBuffer & buffer, string line){
  switch(toupper(line[0])){
    case 'I': foreach (char ch in line){
      buffer.insertCharacter(ch); 
      }
      displayBuffer(buffer);
      break;
    case 'D': buffer.deleteCharacter();
      displayBuffer(buffer);
      break;
    case 'F': buffer.moveCursorForward();
      displayBuffer(buffer);
      break;
    case 'B': buffer.moveCursorBackward();
      displayBuffer(buffer);
      break;
    case 'J': buffer.moveCursorToStart();
      displayBuffer(buffer);
      break;
    case 'E': buffer.moveCursorToEnd();
      displayBuffer(buffer);
      break;
    case 'H': printHelpText();
      break; 
    case 'Q': exit(0);
    default: cout << "Illegal command" << endl; break;
  }
}

void displayBuffer(EditorBuffer & buffer){
    string str = buffer.getText();
    for (int i = 0; i < str.lenght(); i++){
      cout << " " << str[i]; 
    }
  cout << endl;
  cout << string(2 * buffer.getCursor(), ' ') << "^" << endl;
}

void ptrintHelpText(){
  cout<<"Editor commands:"<<endl;
  cout<<" Iabc Insert the characters abc at the cursor position"<<endl;
  cout<<" F Moves the cursor forward onecharacter"<<endl;
  cout<<" B Moves the cursor backward one character" <<endl;
  cout<<" D Deletes the character afrer the cursor"<<endl;
  cout<<" J Jumps to the end of the buffer"<<endl;
  cout<<" E Jumps to the beginning of the buffer"<<endl;
  cout<<" H Prints this message "<<endl;
  cout<<" Q Exits from the editor program"<<endl;
}
