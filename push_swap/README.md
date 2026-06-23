*This project has been created as part of the 42 curriculum by seramaro, trakotos.*


# **<u>Description</u>**

This function sorts a stack of integers by using a second stack as temporary storage.
First, it moves all the numbers from the original stack to the secondary stack, arranging them in descending order during the process. Then, it transfers the elements back to the original stack. Because of the reversed ordering in the second stack, the final result in the primary stack is sorted in ascending order.
The algorithm applied during this process varies depending on the number of elements to sort, allowing the implementation to adapt its strategy for optimal efficiency across different input sizes.

# **<u>Instructions</u>**
To use the program, go to the folder's directory in your terminal, and if it is the first time you use it, run the following command
```bash
 make
```
This command will create an executable file named *push_swap* that you can use to sort your list. Here is the syntax to use it:
```bash
./push_swap [--flag] [numbers_list] [--flag]
```
Every *[--flag]* section can be omitted (the program will then automatically choose the best suited algorithm depending on the case), and if not, the user can choose one of the three sorting algorithms by replacing it by one of the three flags below:
- ***[--simple]***: use the first sorting algorithm (simple).
- ***[--medium]***: use the second sorting algorithm (medium).
- ***[--complex]***: use the third sorting algorithm (complex).

**Please note that only the last declared flag will be considered by the program*

Also, the user can use the ***[--bench]*** flag to display details such as the disorder percentage of the list as well as the number of operations that were made during the sorting process.

# **<u>Ressources</u>**

The ressources used for this project were essentially videos from Youtube and Instagram teaching the fundamentals of sorting algorithms and the basics of bitwise operations (Bro Code is still a goated channel frfr).
# **<u>Description of the used algorithms</u>**
When executed, the program first automatically checks the disorder percentage of the list given by the user.
Depending on this disorder percentage, the program will automatically choose the fastest sorting algorithm to use. Otherwise, if the user used flags any of the *--simple*, *--medium* or *--complex* flags, the program will use the algorithm associated to the flag independently of the disorder percentage.

Essentially, all the algorithm share a same pattern: rotate the elements order in the stack A so the smallest element is at the top, send this element to stack B, and then repeat this process until all the elements are sent to stack B and sorted in a decreasing order. From then on, it just sends each element back to stack A prints it out on the terminal, in an ascending order.

**This is just a basic description of the shared pattern of all the algorithms . Every sorting method will be explained with more details below.*
elements from stack A to stack B

### <u>First algorithm (--simple):</u>


- This algorithm is the fastest when it comes to sorting shorter lists, ideally containing between 6 and 100 elements (it still works above that, but it becomes slower).
- It repeatedly finds the smallest element in stack A, rotates stack A in the shortest way possible to put this smallest element on top, and then pushes it to stack B.
- This process is repeated until stack A is empty.
- Finally, it pushes every element back from stack B to stack A, resulting in a sorted stack in ascending order.

### <u>Second algorithm (--medium):</u>

- This algorithm is designed to be faster on medium sized lists (for example around 100 to 500 elements).
- It first assigns an index (rank) to each number depending on its position in the sorted order.
- The list is then split into "blocks" whose size is roughly the square root of the number of elements.
- It pushes every element from stack A to stack B block by block: if the current element's index is inside the current block, it is pushed to stack B, otherwise stack A is rotated.
- Once every element has been pushed to stack B, it then reconstructs stack A by always bringing the maximum indexed element of stack B to the top (using the shortest rotations) and pushing it back to stack A.
- By repeatedly pushing back the maximum, stack A ends up sorted in ascending order.

### <u>Third algorithm (--complex):</u>

- This algorithm is the most efficient on large and highly disordered lists.
- Just like the medium algorithm, it starts by indexing the list (transforming values into ranks from 0 to N - 1).
- It then applies a binary radix sort on these indices.
- For each bit position (from the least significant bit to the most significant bit), it goes through all the elements of stack A:
	- If the current bit is 1, it rotates stack A.
	- If the current bit is 0, it pushes the element to stack B.
- After one full pass for a given bit, it pushes every element back from stack B to stack A.
- Repeating this process for all necessary bits results in stack A being sorted in ascending order.

### <u>Adaptive mode (--adaptive or no-flag):</u>

- By default, the program uses an adaptive mode that automatically chooses the best algorithm depending on the disorder percentage of the list.
- If the list size is very small (5 elements or less), it uses a dedicated small sort:
	- For 2 or 3 elements, it uses swaps and rotations to directly sort stack A.
	- For 4 or 5 elements, it pushes the smallest element(s) to stack B, sorts the remaining 3 elements, and then pushes the elements back to stack A.
- For bigger lists, it uses the disorder percentage to choose between the three algorithms:
	- if the disorder percentage is low, it uses the simple method,
	- if it is medium, it uses the medium method,
	- otherwise, it uses the complex method.

