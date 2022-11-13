// Hola
/* File: buffer.h
------------------
This file defines the interfaces for the EditorBuffer Class
//zapato :).
*/

#ifndef _buffer_h
#define _buffer_h

//Class editor buffer

class EditorBuffer{
public: 
  EditorBuffer();
  ~EditorBuffer();
  
  void moveCursorForward();
  void moveCursorBackward();
  
  void moveCursorToStart();
  void moveCursosToEnd();
  
  void insertCharacter(char ch);
  void deleteCharacter();
  
  
  std::string getText() const;
  int getCursor() const;
  
private:
  CharStack before();
  CharStack after();
  
  EditorBuffer(const EditorBuffer & value) { }
  const EditorBuffer & operator=(const EditorBuffer & rhs) {return *this;}
};

#endif
