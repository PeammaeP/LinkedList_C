#include <iostream>
using namespace std;
#include "NODE.h"
#include "LL.h"

LL::LL() { //if not create anything , define the following instruction below
   hol = NULL;
   size = 0;
}

LL::~LL() {
   NODE* t = hol; 
   cout << "Destructing "; 
   for(int i=0;i<size;i++) {
      t = hol->move_next(); 
      delete(hol); 
      hol = t; 
   } cout << endl; 
   size = 0; 
}

void LL::show_all(){
     NODE* t = hol;
     int i;
     cout << "Current Data in Linked List is : "; 
     for(i=0;i<size;i++) {
        t->show_node();
        t=t->move_next();
     } cout << endl; 
}

void LL::add_node(NODE *&A) {
     hol->insert(A); //แทรกข้างหน้า hol 
     hol = A;
     size++;
 }
