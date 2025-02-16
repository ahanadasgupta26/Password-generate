#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
string getpass(int len)
{
	string pass="";
	string lower="abcdefghijklmnopqrstuvwxyz";
    string upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string digits="0123456789";
    string spl_chars="!@#$%^&*()-_=+[]{}|;:,.<>?/";
    string charr=lower+upper+digits+spl_chars;
	int charsize=charr.size();
	srand(time(0));
	int ranind;
	for(int i=0;i<len;i++)
	{
		ranind=rand()%charsize;
		pass=pass+charr[ranind];
	}
	return pass;
}
int main()
{
	cout<<"\t\t\t\t\t--------PASSWORD GENARATOR--------"<<endl;
	int len;
	cout<<"\n\nENTER THE LENGTH OF THE PASSWORD :  ";
	cin>>len;
	if (len <= 0) 
	{
        cout << "INVALID PASSWORD LENGTH!" << endl;
        return 1;
    }
	cout<<"GENARATED PASSWORD :  "<<getpass(len);
	return 0;
}