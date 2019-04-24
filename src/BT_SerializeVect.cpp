/*
 * SerializeVect.cpp
 *
 *  Created on: Mar 19, 2019
 *      Author: Connor
 */

#include "BT_SerializeVect.h"

bt_node* serializeVect(std::vector<int> data){
	if(data.empty()){
		return NULL;
	}
	return serializeVectHelper(data, 0, data.size() - 1);
}

bt_node* serializeVectHelper(std::vector<int> data, int start, int end){
	if(start > end){
		return NULL;
	}
	int mid = start + (end - start)/2;
	bt_node* root = makeNode(data[mid]);
	root -> leftChild = serializeVectHelper(data, start, mid - 1);
	root -> rightChild = serializeVectHelper(data, mid + 1, end);
	return root;
}

std::vector<int> preorderVectMaker(bt_node* root){
	std::vector<int> result;
	if(root == NULL){
		return result;
	}
	return preorderVectMakerHelper(root, result);

}

std::vector<int> preorderVectMakerHelper(bt_node* root, std::vector<int> result){
	if(root == NULL){
		return result;
	}
	result = preorderVectMakerHelper(root -> leftChild, result);
	result.push_back(root -> data);
	result = preorderVectMakerHelper(root -> rightChild, result);
	return result;
}


