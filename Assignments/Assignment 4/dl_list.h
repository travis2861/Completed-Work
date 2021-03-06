/*
 * Name        : dl_list.h
 * Author      : Travis Peebles
 * Description : class DLList.
 *               Doubly Linked list content class
 */

#ifndef DL_LIST_H
#define DL_LIST_H

#include <iostream>
#include <sstream>
#include "dl_node.h"

using std::cerr;
using std::string;
using std::stringstream;

class DLList {
 public:
  DLList();
  ~DLList();
  int GetSize() const;
  void PushFront(int new_contents);
  void PushBack(int new_contents);
  int GetFront() const;
  int GetBack() const;
  void PopFront();
  void PopBack();
  void RemoveFirst(int remove);
  void RemoveAll(int remove);
  bool Exists(int looking_for);
  void Clear();
  string ToStringForwards();
  string ToStringBackwards();
 private:
  DLNode* head_;
  DLNode* tail_;
  unsigned int size_;
};


#endif  // DL_LIST_H
