// solved by Techie Dheeraj
// https://www.hackerrank.com/test/33gp893pqhs/questions/bdfkfnld4gp

string decryptPassword(string s) {

    string result;
    int size = s.size();
    int numIndex = 0;

    for (int i = size-1; i >= numIndex; --i) {
        if (s[i] == '*') {
            result+= s[i-2];
            result+= s[i-1];
            i-=2;
            continue;
        }
        else if (s[i] == '0') {
            result+= s[numIndex];
            numIndex++;
        }
        else
            result += s[i];
    }

    std::reverse(result.begin(), result.end());
    return result;
}
