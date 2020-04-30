// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/cats-and-a-mouse/problem

string catAndMouse(int x, int y, int z) {

    vector<string>results{"Cat A", "Cat B", "Mouse C"};

    if (abs(x-z) < abs(y-z))
        return results[0];
    if (abs(y-z) < abs(x-z))
        return results[1];
    else
        return results[2];
}
