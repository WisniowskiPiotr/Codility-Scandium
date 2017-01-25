#include <vector>
#include <iostream>

using namespace std;

class slice{
// single slice from vector
	int *starts;
	int *ends;

	public:
	slice(int &s, int &e){
		if(&s<=&e) { 
			starts=&s;
			ends=&e;
		} else {
			starts=&e;
			ends=&s;
		};
	};

	long long int sum(){
		long long int s=0;
		for(int *i=starts;i<=ends;i++)
			s+=*i;
		return s;
	};
};

class slice_collection{
// all possible slices 
	vector<slice> some_slices;

	slice pick_slice(slice A){
	// removes all overlaping slices from collection and returns slice picked
		
	};
	
	slice_collection(vector<int> &A){
	//constructs slices from vector of ints
	};
};
class player{
// player picks slice from collection

        //slice_collection slices_tacken; // tacken slicees	
	
	bool won(){
	// if current_player doesnt have move return false
	// if next player doesnt have move return true
	// else check after picking a slice
	}; 
};

//string 
//int solution(vector<int> &A){
int main(int argc, char *argv[]){
	
	vector<int> A;

	cout<<argv[1]<<"\n";
	cout<<argv[1].size()<<"\n";

	//for(int i=0; i<=*argv[1].size(); i++)
	//	A.push_back(*argc[1][i]);
		
	//slice aslice(A[1],A[2]);
	//cout<<aslice.sum()<<"\n";


};
