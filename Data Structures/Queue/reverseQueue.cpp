#include<iostream>
#include<stack>
#include<queue>
using  namespace std;

void inputQue(queue <int>& q) {
	int x;
	while (true) {
		cin >> x;
		if (x == -1)break;

		q.push(x);
	}
}

void reverseQue(queue <int>& q) {
	stack <int> s;
	while (q.empty() == false) {
		s.push(q.front());
		q.pop();
	}
	while (s.empty() == false) {
		q.push(s.top());
		s.pop();
	}
}

void printQue(queue <int>& q) {
	while(q.empty()==false){
		cout<<q.front()<<" ";
		q.pop();
	}

}
int main() {
	queue <int> q;
	inputQue(q);
	reverseQue(q);
	printQue(q);


}

