#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void contest(vector<pair<int,int>> &v)
    {
    int i=0;
        if(v[i].second <= v[i+1].first)
            cout<<"Moderator not required";
        else
            cout<<"Moderator required";
}

int main()
{
	int n;
	cin>>n;
    vector<pair<int,int> >v;

	v.clear();
	while(n--)
	{
		int shr,smin,ehr,emin;
		char s1,s2,s3;
		cin>>shr>>s1>>smin>>s2>>ehr>>s3>>emin;
		int st=shr*60+smin;
		int en=ehr*60+emin;
		v.push_back(make_pair(st,en));
	}
	contest(v);
	return 0;
}

