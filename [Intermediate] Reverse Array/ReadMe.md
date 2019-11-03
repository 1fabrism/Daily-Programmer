# **Reverse Array**

Takes an `std::vector` input and reverses its elements so that the original last element will now be the first. The algorithm works as follows:

 	1. Store an element in a temporary variable
	2. Overwrite it with the opposite element (index mirrored about the midpoint of the array)
	3. Overwrite the other element with the temporary variable
	4. Repeat until the middle of the vector is reached

The vector is passed as a reference in an attempt to reduce overhead. However, during each swapping operation one of the two elements to be swapped is copied into a temporary object; this can be expensive depending on the type of the vector's elements.

The `reverse()` and `print()` functions are templated so that the input can be an `std::vector` of any type (e.g. `int` or `char`). However, the object type of the elements must have a working `<<` operator for the `print()` function to work.

#### <u>Example input/output:</u>

**In:** `{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }`

**Out:** `{ 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }`
