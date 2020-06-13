# --Linked List
## method lists-
 ```cpp
 void add_node(int value){...}
 ```
 - this will creat a node and insert a value at the end of the list;
 ```cpp
 void add_node(int position ,int  value){...}
 ```
 - will insert a node with `int  value` on the given `int position`
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
