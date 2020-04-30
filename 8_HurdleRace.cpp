// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/the-hurdle-race/problem

int hurdleRace(int k, vector<int> height) {

    int max = 0;
    max = height[0];
    for (auto &i : height) {
        if (i > max)
            max = i;
    }
    return (max > k) ? (max - k) : 0;
}
