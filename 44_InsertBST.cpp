// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem

Node * insert(Node * root, int data) {

	Node *node = new Node(data);
	if(root == NULL) {
		root = node;
		return root;
	}
	Node *tmp = root;

	while(tmp) {
		if(tmp->data < data) {
			if(tmp->right == NULL) {
				tmp->right = node;
				break;
			}
			tmp = tmp->right;
		}
		else {
			if(tmp->left == NULL) {
				tmp->left = node;
				break;
			}
			tmp = tmp->left;
		}
	}

	return root;
}
