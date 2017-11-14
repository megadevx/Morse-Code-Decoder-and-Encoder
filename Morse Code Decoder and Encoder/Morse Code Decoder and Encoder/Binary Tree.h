#pragma once
//Binary Tree Class, courtesy of Dr Kuhail's source code

/** A node for a Binary Tree. */
template<typename Item_Type>
struct BTNode
{
	// Data Fields
	Item_Type data;
	BTNode<Item_Type>* left;
	BTNode<Item_Type>* right;

	// Constructor
	BTNode(const Item_Type& the_data,
		BTNode<Item_Type>* left_val = NULL,
		BTNode<Item_Type>* right_val = NULL) :
		data(the_data), left(left_val), right(right_val) {}

	// Destructor (to avoid warning message)
	virtual ~BTNode() {}
	// to_string
	virtual std::string to_string() const {
		std::ostringstream os;
		os << data;
		return os.str();
	}
}; // End BTNode

template<typename Item_Type>
class Binary_Tree
{


	Binary_Tree(BTNode<Item_Type>* new_root) :
		root(new_root) {}

	// Data Field
	BTNode<Item_Type>* root;

};

