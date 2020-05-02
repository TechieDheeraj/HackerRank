// solved by Techie Dheeraj
// https://www.hackerrank.com/challenges/sherlock-and-squares/problem 

int findNo(int num, bool fLeft) {

	int startNo = 0;
	int nearV = 0;
	long double result = 0.0;

	result = sqrt(num);
	if (fLeft)
		nearV = ceil(result);
	else
		nearV = floor(result);

	if ((result - nearV) == 0)
		startNo = result;
	else
		startNo = nearV;

	return startNo;
}
// Complete the squares function below.
int squares(int a, int b) {

	int startNo = 0;
	int endNo = 0;

	startNo = findNo(a, true);
	endNo = findNo(b, false);

	return (endNo - startNo + 1);
}
