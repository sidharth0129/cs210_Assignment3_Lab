# 1 - It takes two separate delete calls since two different objects are present. delete doomed->data; (put on heap by new Data(...)) frees the data, and delete doomed; (created by new Node<T>(value)) frees the node. 

# 2 - Since we now have pointers, the array stores pointers with the data on the heap, so we have to write the destructor so everything is deleted and not just the pointers. If we forgot to write one, the data will take up space in memory without being deleted. We will not get a compiler error since there is nothing syntactically wrong with the code itself.

# 3 - search() doesn't own the pointer and so cannot delete what you hand to it, while addFront() takes ownership and so is allowed to delete what we hand it.

# 4 - One mechanism is the fact that makeList() acts as the hood that covers the parts of the Array and Linked Lists as the factory function. Therefore, main does not need to know exactly what list is being created. The other mechanism that makes this possible is the fact that - depending on the context main receives - the correct methods can be executed, also known as polymorphism.

# 5 - A keyword I would not have added myself is override. An example of where leaving it out could lead to problems would be if you meant to override a method, but got some part of that method wrong when creating it. With override, this will create a compiler error instead of compiling and sabotaging the program.