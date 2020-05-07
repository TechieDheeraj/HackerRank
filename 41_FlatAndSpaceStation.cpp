// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/flatland-space-stations/problem

int flatlandSpaceStations(int n, vector<int> c) {

	vector<int> minDist;
	int i = 0;
	int result = 0;
	int dist;
	int min = 100000000;
	int max = 0;

	while (i < n) {
		for(auto &j:c) {
			dist = abs(j - i);
			if (dist < min)
				min = dist;
		}
		if (min > max)
			max = min;

		min = 10000000;
		++i;
	}

	return max;
}
