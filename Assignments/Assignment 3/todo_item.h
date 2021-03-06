#ifndef TODO_ITEM_H
#define TODO_ITEM_H

#include <string>
#include <iostream>
#include <sstream>
#include <assert.h>

using std::string;
using std::endl;
using std::stringstream;
using std::ostream;

class TodoItem {
 public:
  /**
   * Default Constructor
   */
  TodoItem(string description, int priority = 1, bool completed = false);
  /**
   * Default Destructor
   */
  ~TodoItem();
  /**
   * Sets the private string description_
   *
   * @param description - Desired description
   */
  void set_description(string description);
  /**
   * Sets the private int priority_
   * set the priority to 5 if invalid value is given
   * @param priority - Desired priority
   */
  void set_priority(int priority = 5);
  /**
   * Sets the private bool completed_
   * @param completed - is the task completed or not
   */
  void set_completed(bool completed);
  /**
   * Accsesor
   * @return private string description_
   */
  string description() const;
  /**
   * Accsesor
   * @return private int priority_
   */
  int priority() const;
  /**
   * Accsesor
   * @return private bool completed_
   */
  bool completed() const;
  /**
   * Returns a string containing the description,
   * priority, and completed status, separated by the @ symbol (This is
   * the description@3@1). Uses the scrub function to change @
   * symbols in the description.
   *
   * @return string containing all item details seperated by an '@' symbol
   */
  string ToFile();
  /**
   * Outputs (in a nice looking way) all of the information about the
   * item
   */
  friend ostream& operator <<(ostream &out, const TodoItem &item);

 private:
  string description_;
  int priority_;
  bool completed_;
  /**
   * Replaces all '@' wiht '#' symbols and returns the modified string
   * @param string to be scrubed from ToFile()
   *
   * @return the modifed string with the new symbol
   */
  string Scrub(string unmodifed);
};

#endif
