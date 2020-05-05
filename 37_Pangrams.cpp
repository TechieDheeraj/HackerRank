// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/pangrams/problem

string pangrams(string s) {

    unordered_set<char>hashSet;

    for (auto &i :s) {
        if (i == ' ') // Ignoring Space
            continue;
        else if (i < 97) { // Converting Upper Case Letters to Lower Case
            i += 32; 
            hashSet.insert(i);
        }
        else
            hashSet.insert(i);
    }
    
    if (hashSet.size() != 26)
        return "not pangram";
    else
        return "pangram";

}
