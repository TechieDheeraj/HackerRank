// Solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

vector<int> breakingRecords(vector<int> scores) {

    vector <int> result;
    int lCount = 0, hCount = 0;
    int lowest, highest;
    lowest = highest = scores[0];

    for (auto &i : scores) {
        if (i < lowest) {
            lowest = i;
            ++lCount;
        }
        if (i > highest) {
            highest = i;
            ++hCount;
        }
    }

    result.push_back(hCount);
    result.push_back(lCount);

    return result;
}
