# --Linked List

In this Linked List about all functionality included.
To create a link list we have to creat an object of LinkedList class in the `main()` function
Here is the example to initiate a LinkList.
```cpp
int main()
{
  LinkedList l;
}

```
this will create empty list. to add some node or data we have to call `add_node(int)` method.


## method lists-
 ```cpp
 void add_node(int value){...}
 ```
 - this will creat a node and insert a value at the end of the list; example 
 let list `l` has no node now execute `l.add_node(1);` the list is `[1]` again execute `l.add_node(5);` this list is `[1, 5]`
 ```cpp
 void add_node(int position ,int  value){...}
 ```
 - will insert a node with `int  value` on the given `int position`.
 this is solved by method overloading we have to use same method we've used to add a node. we should pass another position before value. asume our list is same as before. now execute `l.add_node(2, 20);` now the list is `[1, 20, 5]`

 ```cpp
void search_value(int d){...}
```
- `d` means data the method will show that the value is found or not if found the position;
```cpp
void update_node_by_value(int u, int v){...}
```
- here `u` which value or values you wanted to update with `v`
```cpp
void update_node_by_position(int p, int v){...}
```
- this method will update the value at position `p` with `v`
```cpp
void add_node_sorted(int val){...}
```
- this method will add a value `val` by it's sorted order
```cpp
void delete_node_by_position(int p){...}
```
- this method will delete the node at position `p`

```cpp
void marge(LiknedList * list){...}
```
- This method is to marge two list together like if I want to ad l2 to l1 then we will write l1.marge(&l2);
```cpp
void reverse(){...}
```
- This method is used to reverse a list. example such that a list `l`
and the list have data `1, 2, 3, 4, 5` now just pass `l.reverse();`
and the result will `5, 4, 3, 2, 1`
