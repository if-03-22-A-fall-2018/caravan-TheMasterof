/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			caravan.c
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "caravan.h"
#include <stdlib.h>
#include "general.h"

struct _node{
  PackAnimal packanimal;
  _node next;
};

struct CaravanImplementation{
  Node _head=0;
  int length;
};

Caravan new_caravan()
{
  return (Caravan)malloc(sizeof(Caravan))
}

int get_length(Caravan caravan)
{
  return caravan->length;
}

void delete_caravan(Caravan caravan)
{
  Node curr=_head;
  Node deleted;

  while (curr->next!=0) {
    deleted=curr;
    sfree(deleted);
    curr=curr->next;
  }
  sfree(caravan);
}

void add_pack_animal(Caravan caravan, PackAnimal animal)
{
}

void remove_pack_animal(Caravan caravan, PackAnimal animal)
{
  if (caravan->_head==0) {
    return;
  }
  Node deleted;
  if (caravan->_head->packanimal==animal) {
    deleted=caravan->_head;
    caravan->_head=caravan->_head->next;
    sfree(deleted);
    return;
  }
  Node curr=caravan->_head;

  while (curr->next!=0&&curr->next->packanimal!=animal) {
    curr=curr->next;
  }
}

int get_caravan_load(Caravan caravan)
{
  return 0;
}

void unload(Caravan caravan)
{
}

int get_caravan_speed(Caravan caravan)
{
  return 0;
}
