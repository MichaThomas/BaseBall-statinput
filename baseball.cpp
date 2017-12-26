//mequelle thomas

#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 8;

void init(int[]);
float average(int,int);
void init(float[]);


int main()
{
	//float average[MAX];

	int outs[MAX];   //arrays

	int hits[MAX];

	int walks[MAX];

	int p_num, p_hits,p_walks,p_outs;

	init(hits);                                                   //Zeroing out array
	init(walks);
	init(outs);
    //init(average);

	cout<<"*******************************************"<<endl;
	cout<<"Enter the player's number to begin inputing stats.\n";
	cout<<"*******************************************"<<endl;
	cin>>p_num;
	cout<<"*******************************************"<<endl;
	cout<<"Enter the Number of hits, Walks and outs for player "<<p_num<<".\n";
	cout<<"*******************************************"<<endl;
	cin>>p_hits
	 	>>p_walks
		>>p_outs;															//player hits entry
   														//player walks entry


	while(p_num < MAX && p_num >= 0)                             //while player number is greater then zero
	{
		                                             // Protect the next line!!!
		hits[p_num]=hits[p_num] + p_hits;           //values being added to arrays
        walks[p_num] += p_walks;
		outs[p_num] += p_outs;
		                                             //average[p_num] = (float)hits[p_num] /(hits[p_num]+outs[p_num]);



	cout<<"*******************************************"<<endl;
	cout<<"Enter the player's number.\n";
	cout<<"*******************************************"<<endl;
	cin>>p_num;
	cout<<"*******************************************"<<endl;
	cout<<"Enter the hits, Walks and outs for player "<<p_num<<".\n";
	cout<<"*******************************************"<<endl;
	cin>>p_hits
	 	>>p_walks
		>>p_outs;															//player hits entry


	}

	float ace = 0.0;
	int c=0;


	cout<<"\n\nPlyr\tHits\tWalks\tOuts\tAverage"<<endl;



	for(int i=0; i<MAX; i++)
	{

		float a = average(hits[i],outs[i]);

		cout<<i<<'\t'<<hits[i]<<'\t'<<walks[i]<<'\t'<<outs[i]<<'\t'
			<<a<<'\n'<<endl;


		if (a >= 0){
			c=1+c;
			ace = ace + a;}
		else{
			}

	}

    cout<<"\nThe Team average is "<< ace/c<<endl;








	cout<<"Mequelle Thomas program complete.\n";
	getch();
	return 0;
}
 //**********************************************************

void init(int sco[])
{
	for(int i=0; i<MAX; i++)
		sco[i]=0;
}


void init(float sco[])
{
	for( int i=0; i<MAX; i++)
		sco[i]=0;
}


float average (int hits, int outs)
{
	if (hits+outs)

		return (float)hits/(hits+outs);
	else
		return -1.0f;
}


