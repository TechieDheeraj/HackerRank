// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/lonely-integer/problem

int lonelyinteger(vector<int> a) {

    int result = 0;

    for (int i = 0; i < a.size(); ++i)
        result ^= a[i];

    return result;
}
