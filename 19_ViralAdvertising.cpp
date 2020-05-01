// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/strange-advertising/problem

int viralAdvertising(int n) {

    int shared = 5; // First shared with 5 people
    int like = 0, liked = 0;

    while(n) {
        like = (shared / 2); // Half only like
        shared = (like * 3); // Share with three friends

        liked += like;
        --n;
    }

    return liked;
}
