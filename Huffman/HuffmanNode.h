#ifndef _BIN_NODE_H_
#define _BIN_NODE_H_

template <typename E>
class BinNode {
private:
	E value;
	BinNode<E>* parent;
	BinNode<E>* leftChild;
	BinNode<E>* rightChild;

public:
	//Constructors
	BinNode();
	BinNode(E value);
	BinNode(E value, BinNode<E>* parent, BinNode<E>* left, BinNode<E>* right);
	//Get the value of the node
	E getValue();
	//Set the value of the node
	void setValue(E value);
	//Set the parent
	void setParent(BinNode<E>* parent);
	//Set the left child
	void setLeftChild(BinNode<E>* left);
	//Set the right child
	void setRightChild(BinNode<E>* right);
	//Get the left child pointer
	BinNode<E>* getLeft();
	//Get the right child pointer
	BinNode<E>* getRight();
	//Get the parent pointer
	BinNode<E>* getParent();
};

template <typename E>
BinNode<E>::BinNode() {
	parent = NULL;
	leftChild = NULL;
	rightChild = NULL;
}

template <typename E>
BinNode<E>::BinNode(E value) {
	this->value = value;
	parent = NULL;
	leftChild = NULL;
	rightChild = NULL;
}

template <typename E>
BinNode<E>::BinNode(E value, BinNode<E>* parent, BinNode<E>* left, BinNode<E>* right) {
	this->value = value;
	this->parent = parent;
	this->leftChild = left;
	this->rightChild = right;
}

template <typename E>
E BinNode<E>::getValue() {
	return value;
}

template <typename E>
void BinNode<E>::setValue(E value) {
	this->value = value;
}

template <typename E>
void BinNode<E>::setParent(BinNode<E>* parent) {
	this->parent = parent;
}

template <typename E>
void BinNode<E>::setLeftChild(BinNode<E>* left) {
	leftChild = left;
}

template <typename E>
void BinNode<E>::setRightChild(BinNode<E>* right) {
	rightChild = right;
}

template <typename E>
BinNode<E>* BinNode<E>::getLeft() {
	return leftChild;
}

template <typename E>
BinNode<E>* BinNode<E>::getRight() {
	return rightChild;
}

template <typename E>
BinNode<E>* BinNode<E>::getParent() {
	return parent;
}

#endif /* BinNode.h */