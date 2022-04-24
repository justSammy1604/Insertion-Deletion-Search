# Insertion-Deletion-Search
C++ program that performs 3 operations namely insertion,deletion,linear search

Let us understand what happens in each case of the operation

1) Insertion 
The user is asked to enter the size, values in the list and the position and value to be inserted
The next thing that happens is this 
The for loop is initialized to (size-1) and ranges from >=(pos-1)
Then the i th value of the list is assigned to the i+1th value of the list
Then the value to be inserted is assigned to the pos-1th value in the list

2) Searching 
After storing the values of the list 
User is asked to enter the value to be searched and traverses the list using a loop
if a[i]==value to be searched then 
The value was found at location i+1 else number does not exist

3) Deletion
After storing user is asked the position to be deleted
Then the loop is initialized to (pos-1) and ranges from (N-1)
Then the i+1th value is assigned to ith value
