// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/angry-professor/problem

string angryProfessor(int k, vector<int> a) {

    int ontime = 0;

    for (auto &i : a) {
        if (i <= 0)
            ++ontime;
    }

    if (ontime >= k) // minimum students should be k
        return "NO";
    else
        return "YES"; // Class is Cancelled
}
