// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/apple-and-orange/copy-from/156026950

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int appleCount = 0;
    int orangesCount = 0;

    for ( auto &i : apples) {

        if (i > 0 && (i + a) >= s && (i +a) <= t )
            ++appleCount;
    }

    for ( auto &i : oranges) {

        if (i < 0 && (i+b) <= t && (i+b) >= s)
            ++orangesCount;
    }

    cout << appleCount << "\n";
    cout << orangesCount << "\n";
}
