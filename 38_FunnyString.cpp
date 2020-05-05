// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/funny-string/problem

string funnyString(string s) {

    vector<int> result1;
    vector<int> result2;
    char prev = s[0];

    for (int i = 1; i < s.size(); ++i) {
        result1.push_back(abs(s[i]-prev));
        prev = s[i];
    }

    result2 = result1;
    std::reverse(result2.begin(), result2.end());
    if (result1 == result2)
        return "Funny";
    else
        return "Not Funny";
}
