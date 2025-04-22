#include <iostream>
using namespace std;
#define MAX 100
class Stack
{
	int arr[MAX];
	int top;
public:
	Stack()
	{
		top = -1;
	}
	void push(int item)
	{
		if (isFull())
		{
			cout << "Stack overflow!" << endl;
			return;
		}
		arr[++top] = item;
	}

	int pop()
	{
		if (isEmpty())
		{
			cout << "Stack underflow!" << endl;
			return -1;
		}
		return arr[top--];
	}
	int peek()
	{
		if (isEmpty())
		{
			cout << "Stack is empty!" << endl;
			return -1;
		}
		return arr[top];
	}
	bool isFull()
	{
		return top == MAX - 1;
	}
	bool isEmpty()
	{
		return top == -1;
	}
};
int main()
{
	Stack stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	cout << "Popped element is " << stack.pop() << endl;
	cout << "Top element is " << stack.peek() << endl;
	cout << "Popped element is " << stack.pop() << endl;
	cout << "Popped element is " << stack.pop() << endl;
	cout << "Is stack empty? " << stack.isEmpty() << endl;
	return 0;
}