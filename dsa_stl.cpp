/*
Preetham Karanth Kota
Basic DSA for practice
 */
#include <iostream>
#include <stack>
using namespace std;

void displayMenu() 
{
  cout << "Choose an option:" << endl;
  cout << "1. Implement Stack" << endl;
  cout << "2. Exit" << endl;
}

void stackOperations(stack<int>& myStack) 
{
  while (true) 
  {
    cout << "Choose a stack operation:" << endl;
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Top" << endl;
    cout << "4. Display Stack" << endl;
    cout << "5. Return to main menu" << endl;

    int choice;
    cin >> choice;

    switch (choice) 
    {
      case 1: {
                cout << "Enter the number of elements to push: ";
                int n;
                cin >> n;
                for (int i = 0; i < n; ++i) 
                {
                  int value;
                  cout << "Enter value " << i + 1 << ": ";
                  cin >> value;
                  myStack.push(value);
                }
                break;
              }
      case 2: {
                if (myStack.empty()) {
                  cout << "Stack is empty, nothing to pop." << endl;
                } else {
                  cout << "Popped element: " << myStack.top() << endl;
                  myStack.pop();
                }
                break;
              }
      case 3: {
                if (myStack.empty()) {
                  cout << "Stack is empty." << endl;
                } else {
                  cout << "Top element: " << myStack.top() << endl;
                }
                break;
              }
      case 4: {
                if (myStack.empty()) 
                {
                  cout << "Stack is empty." << endl;
                } 
                else 
                {
                  stack<int> tempStack = myStack;
                  cout << "Stack elements: ";
                  while (!tempStack.empty()) 
                  {
                    cout << tempStack.top() << " ";
                    tempStack.pop();
                  }
                  cout << endl;
                }
                break;
              }
      case 5: {
                return;
              }
      default: {
                 cout << "Invalid option. Please try again." << endl;
               }
    }
  }
}

int main() 
{
  stack<int> myStack;
  while (true) 
  {
    displayMenu();
    int option;
    cin >> option;

    switch (option) 
    {
      case 1: {
                stackOperations(myStack);
                break;
              }
      case 2: {
                cout << "Exiting program." << endl;
                return 0;
              }
      default: {
                 cout << "Invalid option. Please try again." << endl;
               }
    }
  }
  return 0;
}

