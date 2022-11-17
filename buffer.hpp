// Hola
/* File: buffer.h
------------------
This file defines the interfaces for the EditorBuffer Class
//zapato :).
OJO NOTAS PARA NOSOTRAS AL FINAL
1. Revisar si hay necesidad de redireccionar el cursor !!!
*/

#ifndef _buffer_h
#define _buffer_h
#include <stack>
#include <string>
//Class editor buffer

class EditorBuffer{
public: 
  EditorBuffer();
  ~EditorBuffer();
  
  void moveCursorForward(); //wiiii
  void moveCursorBackward(); //wiiii
  
  void moveCursorToStart(); // wiiii
  void moveCursorToEnd(); // wiiii
  
  void insertCharacter(char ch); //wiiii
  void deleteCharacter(); //wiiii
  
  
  std::string getText() const;
  int getCursor() const;
  
private:
  std::stack<char> before();//wiiii
  std::stack<char> after();//wiiii
  int cursor; // wiiii
  
  EditorBuffer(const EditorBuffer & value) { }
  const EditorBuffer & operator=(const EditorBuffer & rhs) {return *this;}
};

EditorBuffer EditorBuffer(){
  std::stack<char> before;
  std::stack<char> after;
  cursor = before.size();
}

~EditorBuffer(){}
       
void insertCharacter(char ch){
  before.push(ch);
  cursor = before.size();
}
       
void deleteCharacter(){
  after.pop();
  cursor = before.size();
}
       
void moveCursorForward(){
  char a = after.top();
  before.push(a);
  after.pop();
  cursor = before.size() 
} 
       
void moveCursorBackward(){
  char a = before.top();
  after.push(a);
  before.pop();
  cursor = before.size();
}

void moveCursorToStart(){
  while (!before.empty()){
    moveCursorBackward(); 
  }
}

void moveCursorToEnd(){
	while (!after.empty()){
		moveCursorForward();
	}
}

std::string getText() const{
	moveCursor
	string letra;
	letra.push_back();
	return letra;
}

#endif
