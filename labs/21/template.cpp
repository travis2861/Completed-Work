/*
 * Name        : template.cpp
 * Author      : Travis Peebles
 * Description : Various functions using templates. Please note you can just
 *               write the definitions in here. No need for prototypes.
 */
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

/*
 * Function Name: PrepareForDisplay
 * Create a string containing the contents of an array, each element separated
 * by a specified character. For example, if the array contents
 * are {1, 2, 3} and the separator character is ':', the string returned
 * will be "1:2:3". Please note the array can be of any type.
 * If the template function outputs doubles, they should be to a precision of 2.
 * @uses stringstream
 * @param T values[] - An array of any type
 * @param unsigned int size - The size of the array
 * @param char separator - The separator character to use in the returned
 *                         string. Defaults to ','
 * @return string - A string containing the contents of values separated by the
 *                  specified separator character
 */
template<typename T>
string PrepareForDisplay(T values[], unsigned int size, char seperator = ',') {
  stringstream ss;
  ss.setf(std::ios::showpoint | std::ios::fixed);
  ss.precision(2);
  for (unsigned int i = 0; i < size; ++i) {
    if (i == size - 1) {
      ss << values[i];
    } else {
      ss << values[i] << seperator;
    }
  }
  return ss.str();
}

/*
 * Function Name: HasValue
 * Test to see if an array contains a specified value.
 * @param T values -  An array of any type
 * @param unsigned int size - The size of the array
 * @param T value_to_find - The value to search for within the array
 * @return bool - true if value is found in the array, otherwise false
 */
template<typename T>
bool HasValue(T values[], unsigned int size, T value_to_find) {
  bool contains_values = false;
  for (unsigned int i = 0; i < size; ++i) {
    if (values[i] == value_to_find) {
      contains_values = true;
    }
  }
  return contains_values;
}

/*
 * Function Name: ValueAt
 * Return the value from an array at a specified index.
 * @param T values -  An array of any type
 * @param unsigned int size - The size of the array
 * @param unsigned int index - The position in the array from which to return a
 *                             value
 * @param bool error - A flag that will be set to true if index is invalid for
 *                     the array, else it will be set to false
 * @return T - The value at the specified index in the array when error is set
 *               to false. if index is invalid, returns a zero representation of
 *               the type and sets error to true. To get a zero representation
 *               you can return T()
 */
template<typename T>
T ValueAt(T value[], unsigned int size, unsigned int index, bool &error) {
  error = false;
  T return_value;
  if (index < size) {
    return_value = value[index];
  } else {
    error = true;
    return_value = T();
  }
  return return_value;
}

/*
 * Function Name: Sum
 * Return the "sum" of the values in the array. Your initial sum should be set
 * to "zero" in your algorithm. To do this use T().
 * @param T values - An array of any type
 * @param unsigned int size - The size of the array
 * @return T - The sum of the values in the array
 */
template<typename T>
T Sum(T values[], unsigned int size) {
  T return_value = T();

  for (unsigned int i = 0; i < size; i++) {
    return_value += values[i];
  }
  return return_value;
}

/*
 * Function Name: SwapValues
 * Swap the positions of two values in an array. The two index values must be
 * valid for the array.
 * @param T values - An array of any type
 * @param unsigned int size - The size of the array
 * @param unsigned int index1 - The position of the first value to be swapped
 * @param unsigned int index2 - The position of the second value to be swapped
 * @return bool - true if the swap was successful, otherwise false
 */
template<typename T>
bool SwapValues(T values[], unsigned int size, unsigned int index1,
                unsigned int index2) {
  bool swap_worked = false;
  if (index1 <= size && index2 <= size) {
    T temp_index = values[index2];
    values[index2] = values[index1];
    values[index1] = temp_index;
    swap_worked = true;
  } else {
    swap_worked = false;
  }
  return swap_worked;
}

