#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	auto sum = int{ 0 };
	if (a < 0) {
		sum -= a * c;
		sum += d;
		sum += e * b;
	}
	else {
		sum += e * (b - a);
	}

	cout << sum;

	return 0;
}