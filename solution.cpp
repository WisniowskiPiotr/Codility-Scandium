class slice{
public:
	int index_beg;
	int index_end;
	long long int slice_sum;

	bool check_index(slice slice_checked){
		(index_end<slice_checked.index_beg || index_beg>slice_checked.index_end) ? return false: return true;
	};

	slice(int beg, int end, long long int sum){
		index_beg=beg;
		index_end=end;
		slice_sum=sum;
	};
};

class slice_collection{
public:
	vector<slice> slices;

	slice pick_slice(slice slice_picked){
		while(int i=0<slices.size())
			slices[i].check_index(slice_picked) ? slices.erace(slices.begin()+i): i++;
		return slice_picked;
	};

	slice_collection(vector<int> &A){
		for(int i=0; i<A.size(); i++){
			for(int j=i; j<A.size(); j++){
				long long int sum=0;
				for(k=i; k<=j; k++)
					sum+=A[k];
				(sum%2==0) ? slices.push_back(new slice(i,j,sum)): sum=0;
			};
		};
	};
};

class move{
public:

};


class player{
public:
	vector<slice> slices_picked;

};

class move{

};

class game{
public:
	player blue;
	player red;
	bool won;

	void move(player current_player, slice_collection current_slices){
		current_player
	};
};

string solution(vector<int> &A){
	
	vector<game> games;
	slice_collection starting_slices(A);

	for(int i=0; i<starting_slices.slices.size(); i++){
		games.push_back(new game);
		slice_collection active_slices=starting slices;

		games.back().blue.slices_picked.push_back(active_slices.pick_slice(active_slices.slices[i]));
		while(active_slices.slices.size()!=0){
			games.red.slices_picked.push_back(active_slices.pick_slice(active_slices.slices[0]));
			// jeś
			games.blue.slices_picked.push_back(active_slices.pick_slice(active_slices.slices[0]));
		};
		// brak sliców
	};
};
