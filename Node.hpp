//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
//  Modified by Tiziana Ligorio for Hunter College CSCI 235 -- mainly style

/** @file Node.hpp
    Node for Singly Linked Chain*/

#ifndef NODE_
#define NODE_

template<class Item_Type>
class Node
{
public:
    Node();  //default constructor
    Node(const Item_Type& an_item); //parameterized constructor
    Node(const Item_Type& an_item, Node<Item_Type>* next_node_ptr); //parameterized constructor

    /** @param an_item  contained in the node
         @post sets item_ to an_item */
    void setItem(const Item_Type& an_item);

    /** @param next_node_ptr points to the next node in the chain
     @post sets next_ to next_node_ptr */
    void setNext(Node<Item_Type>* next_node_ptr);

    /**@return item_*/
    Item_Type getItem() const;

    /**@return next_*/
    Node<Item_Type>* getNext() const;

    /**@return returns a pointer to the previous node in the chain*/
    Node<Item_Type>* getPrevious() const;

private:
    Item_Type        item_; // A data item_
    Node<Item_Type>* next_; // Pointer to next_ node
    Node<Item_Type>* previous_; // Pointer to next node
}; // end Node

#include "Node.cpp"
#endif
