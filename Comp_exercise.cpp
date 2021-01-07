#include "std_lib_facilities.h"
int main()
{
	vector<double>records;
	for(double record; cin>>record;)
		records.push_back(record);
	for(int i=0; i<records.size();++i)
		cout<<records[i]<<"\n";
}
