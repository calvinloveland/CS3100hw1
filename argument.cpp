#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int fib(int n){
	if (n <= 0){
			return 1;
	}
	if (n == 1){
			return 1;
	}
	return fib(n-1)+fib(n-2); //This is not the best way to do this. Fibonacci has a closed form
}

string pi(int n){
	string pi = "3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428810975665933446128475648233786783165271201909145648566923460348610454326648213393607260249141273724587006606315588174881520920962829254091715364367892590360011330530548820466521384146951941511609433057270365759591953092186117381932611793105118548074462379962749567351885752724891227938183011949129833673362440656643086021394946395224737190702179860943702770539217176293176752384674818467669405132000568127145263560827785771342757789609173637178721468440901224953430146549585371050792279689258923542019956112129021960864034418159813629774771309960518707211349999998372978049951059731732816096318595024459455346908302642522308253344685035261931188171010003137838752886587533208381420617177669147303598253490428755468731159562863882353787593751957781857780532171226806613001927876611195909216420198938095257201065485863278865936153381827968230301952035301852968995773622599413891249721775283479131515574857242454150695950829533116861727855889075098381754637464939319255060400927701671139009848824012858361603563707660104710181942955596198946767837449448255379774726847104047534646208046"; //How many digits is this? Who knows? Not me
	string returnString = "";
	for(int i = 0; i < n+2; i++){
		returnString += pi.at(i); //Best way to do this? Who knows? Not me
	}
	return returnString;
}

long double factorial(int n){
	if(n==1){
			return 1;
	}
	return n * factorial(n-1);
}

long double e(int n){
	if(n == 0){
		return 2; //Janky? Yes. Works? Also yes.
	}
	return ((long double)(2*n+2))/(factorial(2*n+1)) + e(n-1); //Doesn't do anything past like n=15
}

int main(int argc, char *argv[]){
	if (argc == 3){
		int n = atoi(argv[2]); //ATOI IS A THING! THIS TOOK ME FOREVER
		string argument = argv[1];
		if(argument == "-fib"){
				cout << "Fibonacci at " << n << " is " << fib(n);
		}
		if(argument ==  "-pi"){
				cout << "Pi until the " << n << "th digit is " << pi(n);
		}
		if(argument ==  "-e"){
				cout.precision(10+n);
				cout << "E calculated with " << n << " iterations is " << e(n); 
		}
	}
	else{
		cout<<"Usage: argument [-f,-p,-e] [n]";
	}
}
