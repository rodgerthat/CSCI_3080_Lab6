// Norris, Joel R.
// filename: Lab6.cpp
// description : For this lab you will read in a left child - right child array representation of a binary tree, 
// reprint the left child - right child array representation, and then tell which nodes are leaves.  
// There will be no more than 10 nodes.  
// Your program will begin by asking for the number of nodes, then read the array, print, and list the leaves.
// Good luck.
//

#include <iostream>

using namespace std;

int main()
{

    const int MAX_ROWS = 10;
    const int MAX_COLS = 2;
	int A[MAX_ROWS][MAX_COLS] = { 0 };
	int numNodes = 0;
	int leafNodesArray[MAX_ROWS];
	int numLeafs = 0;
	int i, j = 0;

    // get the number of nodes from the user
    cout << endl;
    cout << "Please input the number of nodes: ";

    cin >> numNodes;

    // get the array representation from the user, assign the values into the array
	cout << "Please input the left child - right child array representation of the graph" << endl;
    for (i = 0; i < numNodes; ++i) {
        for (j = 0; j < MAX_COLS; ++j) {
            cin >> A[i][j];
        }
    }


	// output the array representation
	cout << endl;
	cout << "The left child - right child representation of the graph is" << endl;
    cout << endl;
    for (i = 0; i < numNodes; ++i) {
        for (j = 0; j < MAX_COLS; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

	// count the number of leaves
    for (i = 0; i < numNodes; ++i) {
		if (A[i][0] == 0 && A[i][1] == 0) {
			leafNodesArray[numLeafs] = i + 1;
			++numLeafs;
		}
    }

	// output the leaves
	cout << "The leaves are ";
	for (i = 0; i < numLeafs; ++i) {
		cout << leafNodesArray[i] << " ";
	}

    return 0;
}

