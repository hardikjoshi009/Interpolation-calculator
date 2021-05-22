#include<iostream>
#include<conio.h>
using namespace std;
void trapenzoidal(){
	int n;
	double h;
	system("CLS");
	cout<<"\nNOTE :- intervel number should be multipal of '1'";
	cout<<"\nenter number of intervel\n"; 
	cin>>n;
	cout<<"\nEnter the value of 'h'\n";
	cin>>h;
	n=n+1;
	double *arr= new double[n];
	double sum=0;
	cout<<"\nenter  value from y0 to y"<<n-1<<" value("<<n<<" element)\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i>0&&i<n-1)
			sum+=arr[i];
	}
	double firstsum=arr[0]+arr[n-1];
	cout<<"\n      =      [(";
	printf("%.10lf",firstsum);
	cout<<")/2 + (";
	printf("%.10lf",sum);
	cout<<")] * ";
	printf("%.10lf",h);
	cout<<" ";
	firstsum/=2;
	cout<<"\n\n      =      [(";
	printf("%.10lf",firstsum);
	cout<<") + (";
	printf("%.10lf",sum);
	cout<<")] * ";
	printf("%.10lf",h);
	cout<<" ";
	double ans=h*(firstsum+sum);
	cout<<"\n\n      =      ";
	printf("%.10lf",ans);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
void simpson1_3(){
		int n;
	double h;
	system("CLS");
	cout<<"\nNOTE :- intervel number should be multipal of '2'";
	cout<<"\nenter number of intervel\n"; 
	cin>>n;
	cout<<"\nEnter the value of 'h'\n";
	cin>>h;
	n=n+1;
	double *arr= new double[n];
	double sumodd=0,sumeven=0;
	cout<<"\nenter  value from y0 to y"<<n-1<<" value("<<n<<" element)\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i>0&&i<n-1){
			if(i%2==0)
			sumeven+=arr[i];
			else
			sumodd+=arr[i];
		}
			
	}
	double firstsum=arr[0]+arr[n-1];
	
	cout<<"\n      =      [(";
	printf("%.10lf",firstsum);
	cout<<") + 4*(";
	printf("%.10lf",sumodd);
	cout<<") + 2*(";
	printf("%.10lf",sumeven);
		cout<<")] * ";
	printf("%.10lf",h);
	cout<<" /3 ";
	sumeven*=2;
	sumodd*=4;
	cout<<"\n      =      [(";
	printf("%.10lf",firstsum);
	cout<<") + (";
	printf("%.10lf",sumodd);
	cout<<") + (";
	printf("%.10lf",sumeven);
		cout<<")] * ";
	printf("%.10lf",h);
	cout<<" /3 ";
	double ans=h*(firstsum+sumodd+sumeven);
	ans/=3;
	cout<<"\n\n      =      ";
	printf("%.10lf",ans);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
void simpson3_8(){
	int n;
	double h;
	system("CLS");
	cout<<"\nNOTE :- intervel number should be multipal of '3'";
	cout<<"\nenter number of intervel\n"; 
	cin>>n;
	cout<<"\nEnter the value of 'h'\n";
	cin>>h;
	n=n+1;
	double *arr= new double[n];
	double sumnot3=0,sum3=0;
	cout<<"\nenter  value from y0 to y"<<n-1<<" value ("<<n<<" element)\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i>0&&i<n-1){
			if(i%3==0)
			sum3+=arr[i];
			else
			sumnot3+=arr[i];
		}
			
	}
	double firstsum=arr[0]+arr[n-1];
	cout<<"\n      =      [(";
	printf("%.10lf",firstsum);
	cout<<") + 3*(";
	printf("%.10lf",sumnot3);
	cout<<") + 2*(";
	printf("%.10lf",sum3);
		cout<<")] * ";
	printf("%.10lf",h);
	cout<<" * 3/ 8 ";
	sum3*=2;
	sumnot3*=3;
	cout<<"\n      =      [(";
	printf("%.10lf",firstsum);
	cout<<") + (";
	printf("%.10lf",sumnot3);
	cout<<") + (";
	printf("%.10lf",sum3);
		cout<<")] * ";
	printf("%.10lf",h);
	cout<<" * 3/ 8 ";
	double ans=h*(firstsum+sumnot3+sum3);
	ans*=3;
	ans/=8;
	cout<<"\n\n      =      ";
	printf("%.10lf",ans);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
void difference_table(){
	system("CLS");
	int n;
	cout<<"\nNote:- the difference table shown from up to down formate\n";
   cout<<"\nEnter the number of element\n";
   cin>>n;
   double *arr= new double[n];
   cout<<"\nEnter function value('Y' value)\n";
   for(int i=0;i<n;i++)
   cin>>arr[i];
   int k=n;
   cout<<"\n        y =     ";
   for(int i=0;i<n;i++){
   printf("%.10lf",arr[i]);
   cout<<"   ";
   }
   cout<<"\n------------------------------------------------------------------------------------------------";
   cout<<"\n";
   for(int j=0;j<n-1;j++){
   	cout<<"\ndelta "<<j+1<<" y =     ";
   for(int i=0;i<k-1;i++){
        arr[i]=arr[i+1]-arr[i];
        printf("%.10lf",arr[i]);
        cout<<"   ";
   }
   cout<<"\n------------------------------------------------------------------------------------------------";
   cout<<"\n";
       k--;
   }
   cout<<"\npress any key to continue\n";
   getch();
   delete[] arr;
}
void newtonforward(){
	system("CLS");
	double sum=0;
	double multi=1,m;
	int n,fact=1;
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t\tExample table\n";
	cout<<"\tX   Y   y1  y2  y3";
	cout<<"\n\t1   5";
	cout<<"\n\t        3";
	cout<<"\n\t2   8       -1";
	cout<<"\n\t        2       3";
	cout<<"\n\t3   10       2";
	cout<<"\n\t        4";
	cout<<"\n\t4   14";
	cout<<"\nEnter the total number of terms you wanted to calculate \n";
	cout<<"4\t(because of y,y1,y2,y3)\n";
	cout<<"\nEnter the value of 'm' \n";
	cout<<"user have to find m by himself";
	cout<<"\nEnter the value of function (table value)\n";
	cout<<"5   3   -1   3\t(first value in each coloum) ";
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\n\nEnter the total number of terms you wanted to calculate \n";
	cin>>n;
	cout<<"\nEnter the value of 'm' \n";
	cin>>m;
	double *arr=new double[n];
	cout<<"\nEnter the value of function (table value)\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\n1 st term     ";
	printf("%.10lf",arr[0]);
	sum=arr[0];
	for(int i=1;i<n;i++){
		multi*=m/fact;
		cout<<"\n"<<i+1<<" th term     ";
		printf("%.10lf",multi*arr[i]);
		sum+=multi*arr[i];
		m--;
		fact++;
	}
	cout<<"\n\nAns =         ";
	printf("%.10lf",sum);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
void newtonbackward(){
	system("CLS");
	double sum=0;
	double multi=1,m;
	int n,fact=1;
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t\tExample table\n";
	cout<<"\tX   Y   y1  y2  y3";
	cout<<"\n\t1   5";
	cout<<"\n\t        3";
	cout<<"\n\t2   8       -1";
	cout<<"\n\t        2       3";
	cout<<"\n\t3   10       2";
	cout<<"\n\t        4";
	cout<<"\n\t4   14";
	cout<<"\nEnter the total number of terms you wanted to calculate \n";
	cout<<"4\t(because of y,y1,y2,y3)\n";
	cout<<"\nEnter the value of 'm' \n";
	cout<<"user have to find m by himself";
	cout<<"\nEnter the value of function (table value)\n";
	cout<<"14   4   2   3\t(last value in each coloum) ";
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\nEnter the total number of term 'include y0 term'\n";
	cin>>n;
	cout<<"\nEnter the value of 'm'\n";
	cin>>m;
	double *arr=new double[n];
	cout<<"\nEnter the value of function (table value)\n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\n1 st term     ";
	printf("%.10lf",arr[0]);
	sum=arr[0];
	for(int i=1;i<n;i++){
		multi*=m/fact;
		cout<<"\n"<<i+1<<" th term     ";
		printf("%.10lf",multi*arr[i]);
		sum+=multi*arr[i];
		m++;
		fact++;
	}
	cout<<"\n\nAns =         ";
	printf("%.10lf",sum);
	cout<<"\npress enter to continue";
	getch();	
	delete[] arr;
}
void Lagrange(){
	system("CLS");
	cout<<"\nThere is no difference value in this methord so avoid it (^-^)";
	int n;
	cout<<"\nEnter the total number of xvalue(form x0 to xn)\nExample:- form x0 to x5 so value of n = 6\n";
	cin>>n;
	double *arr_x=new double[n],*arr_y=new double[n],*term=new double[n];
	cout<<"\nEnter element whose value you want to calculated =     ";
	double x,sum=0;
	cin>>x;
	cout<<"\nEnter values form x0 to x"<<n-1<<"\n";
	for(int i=0;i<n;i++)
	cin>>arr_x[i];
	cout<<"\nEnter values form y0 to y"<<n-1<<"\n";
	for(int i=0;i<n;i++)
	cin>>arr_y[i];
	for(int i=0;i<n;i++)
	term[i]=1;
	for(int i=0;i<n;i++){
		cout<<"             ";
		for(int j=0;j<n;j++){
			if(j==i)
			continue;
			cout<<"("<<x<<"-"<<arr_x[j]<<") ";
			term[i]*=(x-arr_x[j]);
		}
		cout<<"\n"<<i+1<<"   term =   ---------------------------------------  ";
		printf("%.10lf",arr_y[i]);
		cout<<"\n             ";
		for(int j=0;j<n;j++){
			if(j==i)
			continue;
			cout<<"("<<arr_x[i]<<"-"<<arr_x[j]<<") ";
			term[i]/=(arr_x[i]-arr_x[j]);
		}

		cout<<"\n\n";
		
	}
	cout<<"         =   ";
	printf("%.10lf",term[0]*arr_y[0]);
	
	term[0]=term[0]*arr_y[0];
	sum+=term[0];
	for(int i=1;i<n;i++){
		cout<<"   +  ";
		printf("%.10lf",term[i]*arr_y[i]);
		term[i]=term[i]*arr_y[i];
		sum+=term[i];
	}
	cout<<"\n\n";
	cout<<"     sum =   ";
	printf("%.10lf",sum);
	cout<<"\npress enter to continue";
	getch();	
	delete[] arr_x;
	delete[] arr_y;
	delete[] term;
	
}
void gauss_forward(){
		system("CLS");
	double sum=0;
	double multi=1,uodd,ueven;
	int n,fact=1;
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t\tExample table\n";
	cout<<"\tX   Y   y1  y2  y3";
	cout<<"\n\t1   5";
	cout<<"\n\t        3";
	cout<<"\n\t2   8       -1";
	cout<<"\n\t        2       3";
	cout<<"\n\t3   10       2";
	cout<<"\n\t        4";
	cout<<"\n\t4   14";
	cout<<"\nEnter the total number of term to be calculated\n";
	cout<<"4\t(because of y,y1,y2,y3)\n";
	cout<<"\nEnter value of u\n";
	cout<<"user have to find 'u' by himself\n";
	cout<<"Enter the value of funtion table value) \n";
	cout<<"8   2   -1   3\t(central line value ) ";
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\nEnter the total number of term to be calculated\n";
	cin>>n;
	cout<<"\nEnter the value of 'u' \n";
	cin>>ueven;
	uodd=ueven;
	double *arr=new double[n];
	cout<<"\nEnter the value of function (table value) \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\n1 st term     ";
	printf("%.10lf",arr[0]);
	sum=arr[0];
	for(int i=1;i<n;i++){
		if(i%2==0){
			ueven--;
			multi*=ueven/fact;
			cout<<"\n"<<i+1<<" th term     ";
			printf("%.10lf",multi*arr[i]);
			sum+=multi*arr[i];
		}
		else{
			multi*=uodd/fact;
			cout<<"\n"<<i+1<<" th term     ";
			printf("%.10lf",multi*arr[i]);
			sum+=multi*arr[i];
			
			uodd++;
		}
		fact++;
	}
	cout<<"\n\nAns =         ";
	printf("%.10lf",sum);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
void gauss_backword(){
	system("CLS");
	double sum=0;
	double multi=1,uodd,ueven;
	int n,fact=1;
		cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t\tExample table\n";
	cout<<"\tX   Y   y1  y2  y3";
	cout<<"\n\t1   5";
	cout<<"\n\t        3";
	cout<<"\n\t2   8       -1";
	cout<<"\n\t        2       3";
	cout<<"\n\t3   10       2";
	cout<<"\n\t        4";
	cout<<"\n\t4   14";
	cout<<"\nEnter the total number of term to be calculated\n";
	cout<<"4\t(because of y,y1,y2,y3)\n";
	cout<<"\nEnter value of u\n";
	cout<<"user have to find 'u' by himself\n";
	cout<<"Enter the value of funtion table value) \n";
	cout<<"10    2   2   3\t(central line value ) ";
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\nEnter the total number of term to be calculated\n";
	cin>>n;
	cout<<"\nEnter the value of 'u' \n";
	cin>>ueven;
	uodd=ueven;
	double *arr=new double[n];
	cout<<"\nEnter the value of function (table value) \n";
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\n1 st term     ";
	printf("%.10lf",arr[0]);
	sum=arr[0];
	for(int i=1;i<n;i++){
		if(i%2==0){
			ueven++;
			multi*=ueven/fact;
			cout<<"\n"<<i+1<<" th term     ";
			printf("%.10lf",multi*arr[i]);
			sum+=multi*arr[i];
		}
		else{
			multi*=uodd/fact;
			cout<<"\n"<<i+1<<" th term     ";
			printf("%.10lf",multi*arr[i]);
			sum+=multi*arr[i];
			
			uodd--;
		}
		fact++;
	}
	cout<<"\n\nAns =         ";
	printf("%.10lf",sum);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
void stirling(){
	system("CLS");
		int n,fvalue,fact=2,fcount=3,multipal=1;
	double sum=0;
	double u,multiu=1;
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t\tExample table\n";
	cout<<"\tX   Y   y1  y2  ";
	cout<<"\n\t1   5";
	cout<<"\n\t        3";
	cout<<"\n\t2   8       -1";
	cout<<"\n\t        2       3";
	cout<<"\n\t3   10       ";
	cout<<"\n\t        ";
	cout<<"\nEnter total number of term\n";
	cout<<"3\t(because of y,y1,y2,y2)\n";
	cout<<"\nEnter value of u\n";
	cout<<"user have to find 'u' by himself\n";
	cout<<"Enter 4 funtion value(table value) \n";
	cout<<"8   3   2   -1\t(central line value from up to down) ";
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\nEnter total number of term\n ";
	cin>>n;
	if(n%2==0){
		fvalue=n+n/2;
	}
	else{
		fvalue=n+(n-1)/2;
	}
	double *arr=new double[fvalue];
	cout<<"\nEnter value of u\n";
	cin>>u;
	multiu=u;
	cout<<"Enter "<<fvalue<<" funtion value \n";
	cout<<"If you have "<<fvalue-1<<" funtion value(table value) than enter last value '0' \n";
	for(int i=0;i<fvalue;i++)
	cin>>arr[i];
	cout<<"\n1 st term =     ";
	printf("%.10lf",arr[0]);
	cout<<"\n2 nd term =     ";
	printf("%.10lf",u*((arr[1]+arr[2])/2));
	sum+=u*((arr[1]+arr[2])/2);
	for(int i=2;i<n;i++){
		if(i%2==0){
			multiu/=fact;
			sum+=multiu*u*arr[fcount];
			cout<<"\n"<<i+1<<" term    =     ";
			printf("%.10lf",multiu*u*arr[fcount]);
			fcount++;
		}
		else{
			multiu*=(u*u)-(multipal*multipal);
			multiu/=fact;
			sum+=multiu*((arr[fcount]+arr[fcount+1])/2);
			cout<<"\n"<<i+1<<" term    =     ";
			printf("%.10lf",multiu*((arr[fcount]+arr[fcount+1])/2));
			
			multipal++;
			fcount+=2;
		}
		fact++;
	}
	sum+=arr[0];
	cout<<"\n\n      sum =     ";
	printf("%.10lf",sum);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
void bessal(){
	system("CLS");
	int n,fvalue,fact=1,fcount=2,multipal=1,uplus=0,uminus=1;
	double sum=0;
	float u,multiu=1;
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\n\t\t\tExample table\n";
	cout<<"\tX   Y   y1  y2  y3";
	cout<<"\n\t1   5";
	cout<<"\n\t        3";
	cout<<"\n\t2   8       -1";
	cout<<"\n\t        2       3";
	cout<<"\n\t3   10       2";
	cout<<"\n\t        4";
	cout<<"\n\t4   14";
	cout<<"\nEnter total number of term\n";
	cout<<"4\t(because of y,y1,y2,y3)\n";
	cout<<"\nEnter value of u\n";
	cout<<"user have to find 'u' by himself\n";
	cout<<"Enter 6 funtion value(table value) \n";
	cout<<"8   10   2   -1   2   3\t(central line value from up to down) ";
	cout<<"\n------------------------------------------------------------------------------------------------";
	cout<<"\nEnter total number of term\n";
	cin>>n;
	if(n%2==0){
		fvalue=n+n/2;
	}
	else{
		fvalue=n+(n+1)/2;
	}
	double *arr=new double[fvalue];
	cout<<"\nEnter value of u\n";
	cin>>u;
	cout<<"Enter "<<fvalue<<" funtion value(table value) \n";
	cout<<"If you have "<<fvalue-1<<" funtion value(table value) than enter last value '0' \n";
	for(int i=0;i<fvalue;i++)
	cin>>arr[i];
	//multiu=u;
	
	cout<<"\n1 st term =     ";
	printf("%.10lf",(arr[0]+arr[1])/2);
	sum+=(arr[0]+arr[1])/2;
	for(int i=1;i<n;i++){
		if(i%2==1){
			multiu/=fact;
			sum+=multiu*(u-0.5)*arr[fcount];
			cout<<"\n"<<i+1<<" term    =     ";
			printf("%.10lf",multiu*(u-0.5)*arr[fcount]);
		}
		else{
			multiu*=(u+uplus)*(u-uminus);
			multiu/=fact;
			sum+=multiu*((arr[fcount]+arr[fcount+1])/2);
			cout<<"\n"<<i+1<<" term    =     ";
			printf("%.10lf",multiu*((arr[fcount]+arr[fcount+1])/2));
			fcount++;
			uplus++;
			uminus++;
		}
		fcount++;
		fact++;
	}
	cout<<"\n     sum =    ";
	printf("%.10lf",sum);
	cout<<"\npress enter to continue";
	getch();
	delete[] arr;
}
int main(){
	char ch='Y';
	while(ch=='y'||ch=='Y'){
		system("CLS");
		cout<<"\nenter number";
		cout<<"\n1 for trapezoidal";
		cout<<"\n2 for simpson 1/3ed rule";
		cout<<"\n3 for simpson 3/8th rule";
		cout<<"\n4 for difference table";
		cout<<"\n\n Note:- You have to insert table value in the below funtion (-_-)";
		cout<<"\n\n5 for Newton Gegory Forward";
		cout<<"\n6 for Newton Gegory backward";
		cout<<"\n7 for Lagrange";
		cout<<"\n8 for Gauss forward";
		cout<<"\n9 for Gauss backward";
		cout<<"\n10 for stirling";
		cout<<"\n11 for bessal";
		cout<<"\n\nEnter number from 1 to 11 =   ";
		int inp;
		cin>>inp;
		switch(inp){
			case 1:
				trapenzoidal();
				break;
			case 2:
				simpson1_3();
				break;
			case 3:
				simpson3_8();
				break;
			case 4:
				difference_table();
				break;
			case 5:
				newtonforward();
				break;
			case 6:
				newtonbackward();
				break;
			case 7:
				Lagrange();
				break;	
			case 8: 
				gauss_forward();
				break;
			case 9: 
				gauss_backword();
				break;
			case 10:
				stirling();
				break;
			case 11:
				bessal();
				break;	
			default :
				cout<<"\nBus maharaj itne he h ";
					
		}
		if(inp>0&&inp<12)
	cout<<"\nEk br note krle varna clear ho jayega";
	cout<<"\nor calculate kr na h kya(y/n)\n";
	cin>>ch;	
	}
	return 0;
}
