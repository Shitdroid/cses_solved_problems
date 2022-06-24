#include<iostream>

using namespace std;

int tow[3][65];
long long int l,cnt=0;

int tower(int n,int ti);

int main()
{
	int n,i;
	cin>>n;
	tow[0][0]=n;
	tow[1][0]=tow[2][i]=0;
	/*all data in 0'th position means discs in that tower*/
	for(i=1;i<=n;i++){//keeping discs in towers
		tow[0][i]=n-i+1;
		tow[1][i]=tow[2][i]=0;
	}
	l=n;
	// for(i=l;i>=1;i--)cout<<tow[0][i]<<"\t"<<tow[1][i]<<"\t"<<tow[2][i]<<endl;
	// cout<<endl<<endl;
	cout<<(1<<n)-1<<endl;
	tower(n,0);//starting simulation from 0'th tower
	return 0;
}

int tower(int n, int t){
	int a,b,i;
	if(n>1)b=tower(n-1,t);//take out all discs except bottommost one
	a=tow[t][tow[t][0]];
	tow[t][tow[t][0]]=0;
	tow[t][0]--;
	cout<<t+1<<" ";//source tower
	if(l&1)t=(t+2)%3;
	else t=(t+1)%3;
	if((tow[t][0]==0)||(tow[t][tow[t][0]]>n)){
		tow[t][0]++;
		tow[t][tow[t][0]]=n;
		cout<<t+1<<endl;//dest tower
	}
	else{
		if(l&1)t=(t+2)%3;
		else t=(t+1)%3;
		if((tow[t][0]==0)||(tow[t][tow[t][0]]>n)){
			tow[t][0]++;
			tow[t][tow[t][0]]=n;
			cout<<t+1<<endl;//dest tower
		}
	}
	cnt++;
	// for(i=l;i>=1;i--)cout<<tow[0][i]<<"\t"<<tow[1][i]<<"\t"<<tow[2][i]<<endl;
	// cout<<endl<<endl;
	if(n>1)tower(n-1,b);
	return t;
}
