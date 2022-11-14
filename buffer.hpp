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
//Class editor buffer

class EditorBuffer{
public: 
  EditorBuffer();
  ~EditorBuffer();
  
  void moveCursorForward();//wiiiiii
  void moveCursorBackward();//wiiiiiiii
  
  void moveCursorToStart();
  void moveCursosToEnd();
  
  void insertCharacter(char ch);//wii
  void deleteCharacter();//wii
  
  
  std::string getText() const;
  int getCursor() const;
  
private:
  std::stack<char> before();//wii
  std::stack<char> after();//wii
  
  EditorBuffer(const EditorBuffer & value) { }
  const EditorBuffer & operator=(const EditorBuffer & rhs) {return *this;}
};

EditorBuffer EditorBuffer(){
  std::stack<char> before;
  std::stack<char> after;
  int *cursor = before.top();
}
~EditorBuffer(){
  int b_size = before.size();
  int a_size = after.size();
  for (int i = 0; i<b_size;i++{
    before.pop();
  }
  for (int j=0; j<a_size();j++){
    after.pop();
  }
  cursor = nullptr;
}
       
void insertCharacter(char ch){
  before.push(ch);
  cursor = before.top();
}
       
void deleteCharacter(){
  before.pop();
  cursor = before.top();
}
       
void moveCursorForward(){
  char a = after.top();
  before.push(a);
  after.pop();
  cursor = before.top() 
} 
       
void moveCursorBackward(){
  char a = after.top();
  after.push(a);
  before.pop();
  cursor = before.pop();
}

void moveCursorToStart(){}
  #endif
