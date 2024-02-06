//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}



// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
//Node Structure
/*struct NodeGiven a binary tree with n nodes and a non-negative integer k, the task is to count the number of special nodes. A node is considered special if there exists at least one leaf in its subtree such that the distance between the node and leaf is exactly k.
{
	int data;
	Node *left, *right;
};*/

class Solution
{
    public:
    //Function to return count of nodes at a given distance from leaf nodes.
    int printKDistantfromLeaf(Node* root, int k)
    {
    	//Add your code here. 
    	unordered_map<Node*, Node*> m;
    	
    	// to make parent pointer
    	queue<Node*> q;
    	
    	// to store leaf nodes only 
    	queue<Node*> leaf;
    	
    	// to store only UNIQUE reachale pointer from leaf node 
    	set<Node*> s; 
    	
    	q.push(root); // root node
    	
    	while(!q.empty())
    	{
    	   Node * ptr = q.front();
    	   q.pop();
    	   
    	   // checking for children and putting into q for travel and mapping node -> parent in m 
    	   if(ptr->left){ q.push(ptr->left); m[ptr->left] = ptr;}
    	   if(ptr->right){ q.push(ptr->right); m[ptr->right] = ptr;}
    	   
    	   // if leaf node, saving in the leaf queue
    	   if(ptr->left == NULL && ptr->right == NULL) {leaf.push(ptr);}
    	}
    	// once travel complete, going to every leaf node 
    	while(!leaf.empty())
    	{
           Node * ptr = leaf.front();
    	   leaf.pop();
    	   
    	   // tracking the distance from leaf node
    	   int count = 0; 
    	   while(count != k && m.find(ptr) != m.end())
    	   {
    	       count++;
    	       ptr = m[ptr]; // changing the ptr to parent ptr 
    	   }
    	   // if the loop terminate because it could not find the node at particular distance then saving in set is invalid 
    	   if(count == k) s.insert(ptr);
    	}
    	// as set contains unique node only, total node in set must be the desired answer 
    	return s.size();
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s, ks;
        getline(cin, s);
        Node* root = buildTree(s);
        getline(cin, ks);
        int k=stoi(ks);
        Solution obj;
        cout<<obj.printKDistantfromLeaf(root, k)<<endl;
    }
    return 0;
}


// } Driver Code Ends