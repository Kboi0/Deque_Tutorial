STL Deque 

===OVERVIEW===

STL Deque is data structure implementation that is a part of the Standard Template Library. Deque is a complex acronym for "Double-Ended Queue".
At its core, Deque is a Linear list in which insertion and deletion are allowed from both ends of the list. Due to the nature of the data structure, Deques 
can be implemented in place of stacks, queues, and oftentimes vectors. 

===HOW DOES IT WORK?===


Since it is already implemented in the STL, let's take a look at Deque's API:

As with other STL Data Structures, you can access these member functions by typing "deque::" and then the function name. Example (deque::push_back())

push_back -adds an element to rear-  mydeque.push_back (myint);
push_front- adds an element to front
pop_back- removes an element from the back- mydeque.pop_back (myint);
pop_front- removes an element from the front
size- returns the number of elements in the deque container 
operator[]- returns a reference to element at position n in the deque container
front- returns a reference to the element at the front of the deque container
back- returns a reference to the element at the back of the deque container



Though its implementation already exists in the STL, understanding how Deque is implemented will help users see situations in which
Deque is applicable. 

There are two ways that Deque is implemented: using circle arrays and doubly linked lists. 
	
	1.Implementation using a Circular Array
		Using a circular array of size N, the user initializes a front(F) and rear(R) equal to index 0 and 1. 
 
		Adding an element to the queue:
			Upon adding to the front of the queue, one is subtracted from F. 
				If F would be less than 0, F is set to N-1
				If F would  be more than N-1, F is set to 0

			Upon adding to the back of the queue, one is added to R
				If R woudl be more than N-1, R is set to 0
				If R would be less than 0, R is set to N-1

		Deleting an element form the queue:
			Upon deleting from the front of the queue, one is added to F. 
				If F would  be more than N-1, F is set to 0

			Upon delelting from the back of the queue, one is subtracted from R
				If R would be less than 0, R is set to N-1

	2. Implementation using a doubly linked list (DLL)
		Declaring front and rear as nodes set to NULL where node is the structure of the DLL
			
			Inserting to front end:
				If front is NULL, then front is the newNode and rear is equal to that
				else, 
				      the newNode is equal to the next node after front
			Inserting to rear end:
				If rear is NULL, then rear is the newNode and front is equal to that
				else, 
				      the newNode is equal to the before the rear
			Deleting from the front end:
				Set a temporary variabel as front, then make front->next the new front
					if front is now null, rear is also null
					else
					     front->prev  becomes null
			Deleting from the rear end:
				Set a temporary variabel as rear, then make rear->prev the new rear
					if rear is now null, front is also null
					else
					     rear->next becomes null
===HOW IS IT USEFUL?===

	STL Deque is a very versatile data structure that is able to be used in lieu of vectors, stacks, and queues. Using deque instead of stacks and queues 
is usually fine because they share a lot of the same properties as a data structure. Deciding whether to use a vector or deque is usually a question of where majority of 
the insertions/deletions occur. If they happen near the front and rear, then dequeue is the way to go. If not, then it's probably best to stick with vector. 
	
There are a few well-known uses of deque that I will mention below. I image htere are many more you can think of based on these three alone!
	1. Redo and Undo Operations
	2. Palindrome Checker
	3. Multi-Processor Scheduling (Work-Steal Algorithm)

===FURTHER READING===
	While putting this tutuorial together, I used a lot of onlie resources to compile all of the data you just sifted through. If you want to head straight to the source, 
	look no further! 
	
	http://www.cplusplus.com/reference/deque/deque/ - Here you can find the STL API for deque and definitions for member functions that I left off. 
	https://www.youtube.com/watch?v=WJres9mgiAk - More information about implementation using circular arrays and a wonderful youtube channel that goes over many different CS topics and many Data Structures.  
	https://www.geeksforgeeks.org/implementation-deque-using-doubly-linked-list/- More on doubly linked lists
	https://www.geeksforgeeks.org/deque-cpp-stl/ - An example implementation of deque
	https://www.codeproject.com/Articles/5425/An-In-Depth-Study-of-the-STL-Deque-Container- An article discussing the applications of STL Deque in detail. A hugely helpful site.		 
