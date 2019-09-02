#include <iostream>

using namespace std;

#define MAX_SIZE 30

struct Vertex{
  char label;
  bool visited;
};

//stack functions
class Stack{
  private:
    int stack[MAX_SIZE];
    int top = -1;
  public:
    void push();
    char pop();
    void top();
    
}

//graph functions



int main(){
  
}
