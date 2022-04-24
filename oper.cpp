#include <iostream>
using namespace std;
int main()
{
int N,a[20],i,pos,val;
cout<<"Enter the size of the list "<<endl; // Insertion of a Number 
cin>>N;
for(int i=0; i<N; i++)
cin>>a[i];
cout<<"Enter the position and value to be inserted"<<endl; 
cin>>pos>>val;
for (int i=N-1; i>=pos-1; i--)// Loop from N-1 to pos-1 
a[i+1]=a[i]; // assigns a[i] to a[i+1]
a[pos-1]=val; // assigns the value to a[pos-1]

cout<<"List After Insertion is "<<endl;
for (int k=0; k<=N; k++)
cout<<a[k]<<"\t";

cout<<"Enter the number to be checked"<<endl; //Performs Linear Search Technique
cin>>val;
for (int i=0; i<N; i++){
if (a[i]==val){
cout<<"Number was found at location "<<i+1<<endl;
break;
}
}
cout<<"Enter the position to be deleted from the list "<<endl; // Performs Deletion 
cin>>pos;
for (int i=pos-1; i<N-1; i++) // Loop from pos-1 to N-1
a[i] = a[i+1]; // assigns the opposite to that of insertion

cout<<"Array after Deletion is "<<endl;
for (int g=0; g<=N-1; g++)
cout<<a[g]<<"\t";
return 0;
}
