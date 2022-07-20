/* -----------------------------------------------------------------------------
*	@author Guhyoun Nam
* @file main.cpp
* @date 7/6/2020
* @brief cpp file of main
 ---------------------------------------------------------------------------- */
//Start your program.
/* clock example: frequency of primes */
#include <stdio.h>      /* printf */
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       /* sqrt */
#include <stdlib.h>
#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
void StackPops(int n)
{
  clock_t t1;
  Stack<int> stack;

  for(int i=0; i<n; i++)
  {
    stack.push(i);
  }
  t1 = clock();
  for(int i=0; i<n; i++)
  {
    stack.pop();
  }
  t1 = clock() - t1;
  printf ("It took me %d clicks (%f seconds).\n\n",(int)t1,((float)t1)/CLOCKS_PER_SEC);
}

void QueueEnqueue(int n)
{
  clock_t t1;
  Queue<int> queue;

  t1 = clock();
  for(int i=0; i<n; i++)
  {
    queue.enqueue(i);
  }
  t1 = clock() - t1;
  printf ("It took me %d clicks (%f seconds).\n\n",(int)t1,((float)t1)/CLOCKS_PER_SEC);
}

void ListGetEntry(int n)
{
  clock_t t1;
  LinkedList<int> linkedList;

  for(int i=1; i<=n; i++)
  {
    linkedList.insert(i, i);
  }
  t1 = clock();
  linkedList.getEntry(1);
  t1 = clock() - t1;
  printf ("It took me %d clicks (%f seconds).\n\n",(int)t1,((float)t1)/CLOCKS_PER_SEC);
}

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Incorrect number of parameters!\n";
  }
  else
  {
    clock_t t2, t3, t4, t5;
    int n;
    n=atoi(argv[1])*1000;

    std::cout << "Number of elements: " << n << '\n';
    std::cout << "Stack's pop:\n";
    t2 = clock();
    StackPops(n);
    t2 = clock() - t2;
    std::cout << "Stack's destructor:\n";
    printf ("It took me %d clicks (%f seconds).\n\n",(int)t2,((float)t2)/CLOCKS_PER_SEC);

    std::cout << "Queue's enqueue:\n";
    QueueEnqueue(n);

    std::cout << "Linked List getEntry at specifically index 1:\n";
    LinkedList<int> linkedList;

    for(int i=1; i<=n; i++)
    {
      linkedList.insert(i, i);
    }
    t3 = clock();
    linkedList.getEntry(1);
    t3 = clock() - t3;
    printf ("It took me %d clicks (%f seconds).\n\n",(int)t3,((float)t3)/CLOCKS_PER_SEC);

    std::cout << "Linked List getEntry at specifically the last index:\n";
    t4 = clock();
    linkedList.getEntry(n);
    t4 = clock() - t4;
    printf ("It took me %d clicks (%f seconds).\n\n",(int)t4,((float)t4)/CLOCKS_PER_SEC);

    std::cout << "Printing all elements in a LinkedList using getEntry:\n";
    t5 = clock();
    for(int i=1; i<=n; i++)
    {
      linkedList.getEntry(i);
    }
    t5 = clock() - t5;
    printf ("It took me %d clicks (%f seconds).\n\n",(int)t5,((float)t5)/CLOCKS_PER_SEC);
  }
  return(0);
}
