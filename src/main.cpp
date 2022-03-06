#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, w, h;
	cin >> n >> w >> h;

	const auto& mx = w * w + h * h;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;

		if (x * x <= mx) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}
	}

	return 0;
}