// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/counting-valleys/problem

int countingValleys(int n, string s) {

    char c;
    int level = 0, countV = 0;
    stringstream s_stream(s);

    while (s_stream >> c) {

        if (c == 'U')
            level++;
        if (c == 'D')
            --level;      
        if (level == 0 && c == 'U') // It assure that We came from Down
            ++countV;
    }    

    return countV;
}
