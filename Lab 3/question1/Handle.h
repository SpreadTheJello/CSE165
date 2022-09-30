#ifndef HANDLE_H 
#define HANDLE_H
class Handle {
  struct Cheshire; // Class declaration only
  int handle;
  Cheshire* smile;
public:
  Handle(); // declare constructor
  void initialize();
  void cleanup();
  int read();
  void change(int);
  ~Handle(); // declare deconstructor
};
#endif