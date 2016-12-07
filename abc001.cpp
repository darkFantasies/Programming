#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

string WriteInWords(int i);

int main()
{

cout << "Enter the value ";

int i;

cin>>i;

cout << WriteInWords(i)<<endl;

	
	 
	return 0;
}

string WriteInWords(int integerI)
{

int unitValue=integerI%10; integerI/=10;
int tensValue=integerI%10; integerI/=10;
int hundredValue=integerI%10; integerI/=10;
int thousandValue=integerI%10; integerI/=10;
int lakhValue=integerI%100; integerI/=100;
//int millionValue=integerI%10; integerI/=10;
int croreValue=integerI%100; integerI/=100;

if(croreValue!=0) return WriteInWords(croreValue)+" crore"+WriteInWords((((lakhValue*100+thousandValue)*10+hundredValue)*10+tensValue)*10+unitValue);

if(lakhValue!=0) return WriteInWords(lakhValue)+" lakh"+WriteInWords((((thousandValue)*10+hundredValue)*10+tensValue)*10+unitValue);

if(thousandValue!=0) return WriteInWords(thousandValue)+ " thousand"+WriteInWords(((hundredValue)*10+tensValue)*10+unitValue);

if(hundredValue!=0) return WriteInWords(hundredValue)+ " hundred"+WriteInWords((tensValue)*10+unitValue);

if(tensValue==1) switch(10+unitValue)
{
case 10: return "ten";
case 11: return "eleven";
case 12: return "twelve";
case 13: return "thirteen";
case 14: return "fourteen";
case 15: return "fifteen";
case 16: return "sixteen";
case 17: return "seventeen";
case 18: return "eighteen";
case 19: return "nineteen";
}
else if(tensValue==0) switch(unitValue)
{
case 1: return " one";
case 2: return " two";
case 3: return " three";
case 4: return " four";
case 5: return " five";
case 6: return " six";
case 7: return " seven";
case 8: return " eight";
case 9: return " nine";
default: return "";
}

else switch(tensValue)
{
case 2: return " twenty"+ WriteInWords(unitValue);
case 3: return " thirty"+ WriteInWords(unitValue);
case 4: return " forty"+ WriteInWords(unitValue);
case 5: return " fifty"+ WriteInWords(unitValue);
case 6: return " sixty"+ WriteInWords(unitValue);
case 7: return " seventy"+ WriteInWords(unitValue);
case 8: return " eighty"+ WriteInWords(unitValue);
case 9: return " ninty"+ WriteInWords(unitValue);
default: return "";

}//switch

}
