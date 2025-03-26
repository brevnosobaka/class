#pragma once
template <class T>
void select(T* a, int n) {
	int i, j, c;
	T t;
	bool exchange = false;
	for (int i = 0; i < n - 1; i++) {
		//exchange = 1;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < t) {
				exchange = 1;
				c = j;
				t = a[j];
			}
		}
		//if (exchange) {
			a[c] = a[j];
			a[i] = t;
		//}
	}
}
template <class T>
void insert(T* a, int n)
{
	int i, j;
	T t;
	for (int i = 1; i < n; i++)
	{
		t = a[i];
		for (j = i - 1; j >= 0 && t < a[i]; i++) a[j + 1] = a[j];
		a[i + 1] = t;
	}
};

