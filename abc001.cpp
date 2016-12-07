#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>


using namespace std;

string WriteInWords(int i, bool flag);
string WriteInWords(int i);

int main()
{


cout << "Enter the value <Max Value 2147483647> :";

int i;

cin>>i;
cout << WriteInWords(i)<<endl;

return 0;
}


/*
*
*WriteInWords(int,bool)
*
*
*/
string WriteInWords(int integerI, bool inDigitWord)
{
if(!inDigitWord) return WriteInWords(integerI);

string str="";

while(integerI!=0)
{

switch(integerI%10)
{
case 0: str=" zero" + str; break;
case 1: str= " one"+ str; break;
case 2: str= " two"+ str; break;
case 3: str= " three"+ str; break;
case 4: str= " four"+ str; break;
case 5: str= " five"+ str; break;
case 6: str= " six"+ str; break;
case 7: str= " seven"+ str; break;
case 8: str= " eight"+ str; break;
case 9: str= " nine"+ str; break;
default: ;
}
integerI/=10;
}

return str;
}

/*
*
*WriteInWords (int)
*
*
*
*
*/
string WriteInWords(int integerI)
{

int unitValue=integerI%10; integerI/=10;
int tensValue=integerI%10; integerI/=10;
int hundredValue=integerI%10; integerI/=10;
int thousandValue=integerI%100; integerI/=100;
int lakhValue=integerI%100; integerI/=100;
//int millionValue=integerI%10; integerI/=10;
int croreValue=integerI%100; integerI/=100;
string str="";

if(croreValue!=0) str+= WriteInWords(croreValue, true)+" crore";


if(lakhValue!=0) str+= WriteInWords(lakhValue)+" lakh";

if(thousandValue!=0) str+= WriteInWords(thousandValue)+ " thousand";

if(hundredValue!=0) str+= WriteInWords(hundredValue)+ " hundred";

if(tensValue==1) 
switch(10+unitValue)
{
case 10: str+= " ten"; break;
case 11: str+= " eleven"; break;
case 12: str+= " twelve";break;
case 13: str+= " thirteen";break;
case 14: str+= " fourteen"; break;
case 15: str+= " fifteen"; break;
case 16: str+= " sixteen"; break;
case 17: str+= " seventeen"; break;
case 18: str+= " eighteen"; break;
case 19: str+= " nineteen"; break;
}
else if(tensValue==0) str+= WriteInWords(unitValue, true);

else 
switch(tensValue)
{
case 2: str+= " twenty"+ WriteInWords(unitValue); break;
case 3: str+= " thirty"+ WriteInWords(unitValue); break;
case 4: str+= " forty"+ WriteInWords(unitValue); break;
case 5: str+= " fifty"+ WriteInWords(unitValue); break;
case 6: str+= " sixty"+ WriteInWords(unitValue); break;
case 7: str+= " seventy"+ WriteInWords(unitValue); break;
case 8: str+= " eighty"+ WriteInWords(unitValue); break;
case 9: str+= " ninty"+ WriteInWords(unitValue); break;
default: str+= "";
}//switch

return str;
}
