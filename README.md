# 0x1D. C - Binary trees
Created By: [Tatiana Fernández](https://github.com/Titania792), [Mauricio Miranda](https://github.com/Dak4rPrO)
### Welcome to our Binary Trees project!
On this occasion, the objective was to learn the details, advantages and disadvantages of using binary trees as data structures. We learn how to qualify and traverse them, among other things.
![binary tree](https://www.notion.so/image/https%3A%2F%2Fs3-us-west-2.amazonaws.com%2Fsecure.notion-static.com%2F271732ee-894c-4958-a4c0-0e3193bf7b8d%2Ffig01.gif?table=block&id=78fb188d-456c-4672-99d1-049bed57f9ae&spaceId=cb043966-01d5-49a7-9a77-cfffcb477f35&userId=09cae852-8d88-4611-b94b-e73ad111a274&cache=v2)
### Learning Objectives
-   What is a binary tree
-   What is the difference between a binary tree and a Binary Search Tree
-   What is the possible gain in terms of time complexity compared to linked lists
-   What are the depth, the height, the size of a binary tree
-   What are the different traversal methods to go through a binary tree
-   What is a complete, a full, a perfect, a balanced binary tree

## Tests
[tests](https://github.com/Titania792/holbertonschool-binary_trees/tree/main/tests): Folder of tests provided by Holberton.
## Print File
[binary_tree_print.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/binary_tree_print.c):  Helper file provided by Holberton for visualization purposes.

```
                      .-------(098)--.
            .-------(045)--.       (128)--.
       .--(012)--.       (050)          (402)
  .--(010)     (054)
```
  ## Header File
  [binary_trees.h](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/binary_trees.h): This file contains all the structures and prototypes of the functions written for this project.

## Tasks

0. New node
	-  [0-binary_tree_node.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c): function that creates a binary tree node
		-   Your function must return a pointer to the new node, or  `NULL`  on failure
1. Insert left
	-  [1-binary_tree_insert_left.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c): function that inserts a node as the left-child of another node
		-   Your function must return a pointer to the created node, or  `NULL`  on failure or if  `parent`  is  `NULL`
2. Insert right
	-  [2-binary_tree_insert_right.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c): function that inserts a node as the right-child of another node
		-   Your function must return a pointer to the created node, or  `NULL`  on failure or if  `parent`  is  `NULL`


3. Delete
	- [3-binary_tree_delete.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c): function that deletes an entire binary tree

4. Is leaf
	- [4-binary_tree_is_leaf.c]():  function that checks if a node is a leaf
		-   Your function must return  `1`  if  `node`  is a leaf, otherwise  `0`
		-   If  `node`  is  `NULL`, return  `0`



5. Is root
	- [5-binary_tree_is_root.c)](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c): function that checks if a given node is a root
		-   Your function must return  `1`  if  `node`  is a root, otherwise  `0`
		-   If  `node`  is  `NULL`, return  `0`

6. Pre-order traversal

	- [6-binary_tree_preorder.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c): function that goes through a binary tree using pre-order traversal

7. In-order traversal
	- [7-binary_tree_inorder.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c): function that goes through a binary tree using in-order traversal
8. Post-order traversal
	- [8-binary_tree_postorder.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c): function that goes through a binary tree using post-order traversal

9. Height
	- [9-binary_tree_height.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c): function that measures the height of a binary tree
		- If  `tree`  is  `NULL`, your function must return  `0`

10. Depth
	- [10-binary_tree_depth.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c): function that measures the depth of a node in a binary tree
		-   If  `tree`  is  `NULL`, your function must return  `0`

11. Size
	- [11-binary_tree_size.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c): function that measures the size of a binary tree
		-   If  `tree`  is  `NULL`, the function must return 0

12. Leaves
	- [12-binary_tree_leaves.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c): function that counts the leaves in a binary tree
		- If  `tree`  is  `NULL`, the function must return 0

13. Nodes
	- [13-binary_tree_nodes.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c): function that counts the nodes with at least 1 child in a binary tree
		- If  `tree`  is  `NULL`, the function must return 0

14. Balance factor
	-  [14-binary_tree_balance.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c): function that measures the balance factor of a binary tree
		-   If  `tree`  is  `NULL`, return  `0`
15. Is full
	- [15-binary_tree_is_full.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c): function that checks if a binary tree is full
		-   If  `tree`  is  `NULL`, your function must return  `0`

16. Is perfect
	- [16-binary_tree_is_perfect.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c): function that checks if a binary tree is perfect
		-   If  `tree`  is  `NULL`, your function must return  `0`


17. Sibling
	- [17-binary_tree_sibling.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c):  function that finds the sibling of a node
	-   Your function must return a pointer to the sibling node
		-   If  `node`  is  `NULL` , the parent is  `NULL` or if  `node`  has no sibling, return  `NULL`

18. Uncle
	- [18-binary_tree_uncle.c](https://github.com/Titania792/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c): function that finds the uncle of a node
	- Your function must return a pointer to the uncle node
		-  If  `node`  is  `NULL` or if  `node`  has no uncle, return  `NULL`

## Contact us:

-   [Tatiana Fernández](https://www.linkedin.com/in/tatiana-fern%C3%A1ndez-846b6a230/)
-   [Mauricio Miranda](https://www.linkedin.com/in/mauricio-miranda-13814b231/)