// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem 

int beautifulDays(int i, int j, int k) {

    int rev = 0;
    int beautDays = 0;

    for (int num = i; num <= j; num++) {
        rev = 0;
      
        while(num >= 10) {
            rev  += (num % 10);
            rev  *= 10; 
            num /= 10; 
        }   
        rev += num;
        if ((abs(i - rev)) % k == 0)
            ++beautDays;
        num = i++;
    }   

    return beautDays;
}
