// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem

int jumpingOnClouds(vector<int> c, int k) {

    int e = 100;
    int visited = 0;
    int i = 0;

    while(i < c.size()) {

        if (i == 0 && visited)
            break;

        if (c[i] == 1)
            e -= 3;
        else
            --e;

        visited = 1;
        i = ((i+k) % c.size());
    }

    return e;
}

