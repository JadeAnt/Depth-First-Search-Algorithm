#include <stdio.h>
#include <stdlib.h>

//stack functions
int A[MAX];
int top = -1;

void push(int data){
  A[top++] = data;
}

int pop(){
  int data;
  data = A[top--];
}

int top(){
  return A[top];
}

void isEmpty(){
  if(top == -1){
    printf("Stack is empty");
  else
    printf("Stack is not empty");
}


//graph functions
int edgeList[MAX];
int adjMatrix[MAX];
  
  
int addEdge();
  
int addVerticies();
  
int depthFirstSearch();


int main(){

}
