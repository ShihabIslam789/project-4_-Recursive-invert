//  Created by Frank M. Carrano and Timothy M. Henry.
//  Copyright (c) 2017 Pearson Education, Hoboken, New Jersey.
//  Modified by Tiziana Ligorio for Hunter College CSCI 235 -- mainly style 

/** @file Node.cpp
 Node for Singly Linked List*/

#include "Node.hpp"
 //#include <cstddef>

 //default constructor
template<class Item_Type>
Node<Item_Type>::Node() : next_(nullptr)
{
} // end default constructor


//parameterized constructor
template<class Item_Type>
Node<Item_Type>::Node(const Item_Type& an_item) : item_(an_item), next_(nullptr)
{
} // end constructor

//parameterized constructor
template<class Item_Type>
Node<Item_Type>::Node(const Item_Type& an_item, Node<Item_Type>* next_node_ptr) :
    item_(an_item), next_(next_node_ptr)
{
} // end constructor


/** @param an_item contained in the node
 @post sets item_ to an_item */
template<class Item_Type>
void Node<Item_Type>::setItem(const Item_Type& an_item)
{
    item_ = an_item;
} // end setItem


/** @param next_node_ptr points to the next node in the chain
 @post sets next_ to next_node_ptr */
template<class Item_Type>
void Node<Item_Type>::setNext(Node<Item_Type>* next_node_ptr)
{
    next_ = next_node_ptr;
} // end setNext

 /**@return item_*/
template<class Item_Type>
Item_Type Node<Item_Type>::getItem() const
{
    return item_;
} // end getItem

 /**@return next_*/
template<class Item_Type>
Node<Item_Type>* Node<Item_Type>::getNext() const
{
    return next_;
} // end getNext

template<class Item_Type>
Node<Item_Type>* Node<Item_Type>::getPrevious() const
{
    return previous_;
} // end getPrevious