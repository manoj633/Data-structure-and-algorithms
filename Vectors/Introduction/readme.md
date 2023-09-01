# C++ Vector Methods

C++ vectors are a dynamic array-like data structure that provides a variety of methods for managing and manipulating elements. This README categorizes these methods into four categories: **Basic**, **Iterators**, **Capacity**, and **Modifiers**, and provides code examples for each.

## Basic Methods

### 1. `push_back()`

Adds an element to the end of the vector.

```
#include <vector>
std::vector<int> myVector;
myVector.push_back(42);
```

### 2. `pop_back()`

Removes the last element from the vector.

```
#include <vector>
std::vector<int> myVector = {1, 2, 3};
myVector.pop_back();
```

### 3. `at()`

Accesses an element at a specified position.

```
#include <vector>
std::vector<int> myVector = {10, 20, 30};
int element = myVector.at(1); // element = 20
```

## Iterators

### `4. begin() and end()`

Returns iterators pointing to the first and one-past-the-end elements of the vector.

```
#include <vector>
std::vector<int> myVector = {1, 2, 3};
auto it = myVector.begin(); // Iterator pointing to the first element
auto end = myVector.end();   // Iterator pointing one-past-the-end
```

## Capacity Methods

### 5. `size()`

Returns the number of elements in the vector.

```
#include <vector>
std::vector<int> myVector = {1, 2, 3};
int size = myVector.size(); // size = 3
```

### 6. `empty()`

Checks if the vector is empty.

```
#include <vector>
std::vector<int> myVector;
bool isEmpty = myVector.empty(); // isEmpty = true
```

### 7. `reserve()`

Reserves memory for a specified number of elements.

```
#include <vector>
std::vector<int> myVector;
myVector.reserve(100); // Reserves memory for 100 elements
```

## Modifiers

### 8. `insert()`

Inserts elements at a specified position.

```
#include <vector>
std::vector<int> myVector = {1, 2, 3};
myVector.insert(myVector.begin() + 1, 42); // Inserts 42 at index 1
```

### 9. `erase()`

Removes elements from a specified position.

```
#include <vector>
std::vector<int> myVector = {1, 2, 3};
myVector.erase(myVector.begin() + 1); // Removes element at index 1
```

### 10. `clear()`

Removes all elements from the vector.

```
#include <vector>
std::vector<int> myVector = {1, 2, 3};
myVector.clear(); // Clears all elements
```
