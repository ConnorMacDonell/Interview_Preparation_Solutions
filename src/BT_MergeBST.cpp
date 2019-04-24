/*
 * BT_MergeBST.cpp
 *
 *  Created on: Apr 12, 2019
 *      Author: Connor
 */

#include "BT_MergeBST.h"

void mergeBST(bst_node* root1, bst_node* root2){
    if(!root1 && !root2){
        return;
    }
    if(!root1){
        printInOrder(root2);
    }
    if(!root2){
        printInOrder(root1);
    }
    std::stack<bst_node*> treeOneStack;
    buildLeftStack(root1, treeOneStack);
    std::stack<bst_node*> treeTwoStack;
    buildLeftStack(root2, treeTwoStack);
    bst_node* treeOneCurr;
    bst_node* treeTwoCurr;

    while(!treeOneStack.empty() && !treeTwoStack.empty()){

        treeOneCurr = treeOneStack.top();
        treeTwoCurr = treeTwoStack.top();

        if(treeOneCurr -> data <= treeTwoCurr -> data){
            std::cout << treeOneCurr -> data << " ";
            treeOneStack.pop();

            if(treeOneCurr -> right){
                buildLeftStack(treeOneCurr -> right, treeOneStack);
            }
        }
        else{
            std::cout << treeTwoCurr -> data << " ";
            treeTwoStack.pop();

            if(treeTwoCurr -> right){
                buildLeftStack(treeTwoCurr -> right, treeTwoStack);
            }
        }
    }

    while(!treeOneStack.empty()){
        treeOneCurr = treeOneStack.top();
        treeOneStack.pop();
        std::cout << treeOneCurr -> data << " ";
        if(treeOneCurr -> right){
            buildLeftStack(treeOneCurr -> right, treeOneStack);
        }
    }
    while(!treeTwoStack.empty()){
        treeTwoCurr = treeTwoStack.top();
        std::cout << treeTwoCurr -> data << " ";
        treeTwoStack.pop();
        if(treeTwoCurr -> right){
            buildLeftStack(treeTwoCurr, treeTwoStack);
        }
    }
    delete treeOneCurr;
    delete treeTwoCurr;
}

void buildLeftStack(bst_node* node, std::stack<bst_node*>& stack){
    if(!node){
        return;
    }
    bst_node* temp = node;
    while(temp){
        stack.push(temp);
        temp = temp -> left;
    }
    delete temp;
}

void printInOrder(bst_node* root){
    if(!root){
        return;
    }
    printInOrder(root -> left);
    std::cout << root -> data << " ";
    printInOrder(root -> right);
}



