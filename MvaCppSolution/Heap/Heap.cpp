// Heap.cpp : Defines the entry proint for the console application

int main() {
	int* p{ new int{ 1 } };
	*p = 2;
	delete p;

	return 0;
}
