//CITATIONS ARE LISTED BELOW FOR THE FOLLOWING ASSIGNMENT, I TAKE NO CREDIT FOR ANY INFORMATION USED, AND IS OWNED BY THE RESPECTED OWNER.

// Citation: https://github.com/DanielLandonJr/CSCI_202-Lab-Binary_Search_Tree
// Citation: https://www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/
// Citation: https://www.techiedelight.com/find-inorder-predecessor-given-key-bst/

#include <iostream>
#include "BinarySearchTree.hpp"
using namespace std;

int main(){
    BST<int> tree;
    int x = 15;
    tree.insertElement(x);
    x = 12;
    tree.insertElement(x);
    x = 5;
    tree.insertElement(x);
    x = 19;
    tree.insertElement(x);
    x = 17;
    tree.insertElement(x);
    x = 14;
    tree.insertElement(x);
    x = 24;
    tree.insertElement(x);
    x = 34;
    tree.insertElement(x);
    x = 9;
    tree.insertElement(x);
    x = 21;
    tree.insertElement(x);

    cout << "Testing inorderTraversal: ";
    tree.inorderTraversal(); //Output is : 5, 9, 12, 14, 15, 17, 19, 21, 24, 34,
    cout << "\n";
    cout << "\n";

     //You must test all remaining functions of your program in the following order.
     //  Your program should produce the given outputs.

    cout << "Testing preorderTraversal: ";
    tree.preorderTraversal(); //output should be 15, 12, 5, 9, 14, 19, 17, 24, 21, 34,
    cout << "\n";
    cout << "\n";

    cout << "Testing postorderTraversal: ";
    tree.postorderTraversal(); //output should be 9, 5, 14, 12, 17, 21, 34, 24, 19, 15,
    cout << "\n";
    cout << "\n";

    //Test search for element 17:
    cout << "Testing if 17 is in the tree: \n";
    int key = 17;
    if (tree.searchElement(key) == true) { //output should be, "17 is found in the tree""
        cout << key <<" is found in the tree";
    }
    else {
        cout << key << " is not found in the tree";
    }
    cout << "\n";
    cout << "\n";

    //Test search for element 55:
    cout << "Testing if 55 is in the tree: \n";
    key = 55;
    if (tree.searchElement(key) == true) { //output should be, "55 is not found in the tree"
        cout << key << " is found in the tree";
    } // if
    else {
        cout << key << " is not found in the tree";
    }// else
    cout << "\n";
    cout << "\n";

     //Test Number of leaves:
    cout << "Number of leaves: " << tree.numberOfLeaves(); //output should be, Number of leaves are 5
    cout << "\n";
    cout << "\n";

    //Test max tree height :
    cout << "Max tree height: " << tree.maxTreeHeight();//output should be, Max tree height is 3
    cout << "\n";
    cout << "\n";

    //Test inorder predecessor for element 15: 
    key = 15;
    cout << "Predecessor of 15: " << tree.inorderPredecessor(key);//output should be, predecessor of 15 is 14
    cout << "\n";
    cout << "\n";

    //Test inorder predecessor for element 5: 
    key = 5;
    cout << "Predecessor of 5: " << tree.inorderPredecessor(key); //output should be, predecessor of 5 is null
    cout << "\n";
    cout << "\n";

     //Test inorder predecessor for element 17: 
    key = 17;
    cout << "Predecessor of 17: " << tree.inorderPredecessor(key);//output should be, predecessor of 17 is 15
    cout << "\n";
    cout << "\n";


    //Test delete element 17 (leaf node):  
    key = 17;
    cout << "Deleting element 17: \n";//output inorder : 5, 9, 12, 14, 15, 19, 21, 24, 34,
    tree.deleteElement(key);
    cout << "New inorder: "; 
    tree.inorderTraversal();
    cout << "\n";
    cout << "New preorder: ";
    tree.preorderTraversal();//output preorder: 15, 12, 5, 9, 14, 19, 24, 21, 34,
    cout << "\n";
    cout << "\n";

     //Test delete element 5 :   
    key = 5;
    cout << "Deleting element 5: \n"; //output inorder : 9, 12, 14, 15, 19, 21, 24, 34,
    tree.deleteElement(key);
    cout << "New inorder: ";
    tree.inorderTraversal();
    cout << "\n";
    cout << "New preorder: ";
    tree.preorderTraversal(); //(node with a single child) //output preorder: 15, 12, 9, 14, 19, 24, 21, 34,
    cout << "\n";
    cout << "\n";

     //Test delete element 15 :     
    key = 15;
    cout << "Deleting element 15: \n"; //output inorder : 9, 12, 14, 19, 21, 24, 34,
    tree.deleteElement(key);
    cout << "New inorder: ";
    tree.inorderTraversal();
    cout << "\n";
    cout << "New preorder: ";
    tree.preorderTraversal(); //(root node with two children) output preorder: 14, 12, 9, 19, 24, 21, 34,
    cout << "\n";
    cout << "\n";

     //If your program does not produce above outputs, then your program is NOT correct.

     
    
    
    return 0;
}// main

