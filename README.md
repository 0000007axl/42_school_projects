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

**Please not that only the last declared flag will be considered by the program*

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


- This algorithm is the fastest when it comes to sorting shorter lists, ideally containing   
