/*
 * BT_MergeBST.cpp
 *
 *  Created on: Apr 12, 2019
 *      Author: Connor
 */

#include "BT_MergeBST.h"
#include "BT_Node.h"

void mergeBST(bt_node* root1, bt_node* root2){
    if(!root1 && !root2){
        return;
    }
    if(!root1){
        printInOrder(root2);
    }
    if(!root2){
        printInOrder(root1);
    }
    std::stack<bt_node*> treeOneStack;
    buildLeftStack(root1, treeOneStack);
    std::stack<bt_node*> treeTwoStack;
    buildLeftStack(root2, treeTwoStack);
    bt_node* treeOneCurr;
    bt_node* treeTwoCurr;

    while(!treeOneStack.empty() && !treeTwoStack.empty()){

        treeOneCurr = treeOneStack.top();
        treeTwoCurr = treeTwoStack.top();

        if(treeOneCurr -> data <= treeTwoCurr -> data){
            std::cout << treeOneCurr -> data << " ";
            treeOneStack.pop();

            if(treeOneCurr -> rightChild){
                buildLeftStack(treeOneCurr -> rightChild, treeOneStack);
            }
        }
        else{
            std::cout << treeTwoCurr -> data << " ";
            treeTwoStack.pop();

            if(treeTwoCurr -> rightChild){
                buildLeftStack(treeTwoCurr -> rightChild, treeTwoStack);
            }
        }
    }

    while(!treeOneStack.empty()){
        treeOneCurr = treeOneStack.top();
        treeOneStack.pop();
        std::cout << treeOneCurr -> data << " ";
        if(treeOneCurr -> rightChild){
            buildLeftStack(treeOneCurr -> rightChild, treeOneStack);
        }
    }
    while(!treeTwoStack.empty()){
        treeTwoCurr = treeTwoStack.top();
        std::cout << treeTwoCurr -> data << " ";
        treeTwoStack.pop();
        if(treeTwoCurr -> rightChild){
            buildLeftStack(treeTwoCurr, treeTwoStack);
        }
    }
    delete treeOneCurr;
    delete treeTwoCurr;
}

void buildLeftStack(bt_node* node, std::stack<bt_node*>& stack){
    if(!node){
        return;
    }
    bt_node* temp = node;
    while(temp){
        stack.push(temp);
        temp = temp -> leftChild;
    }
    delete temp;
}


