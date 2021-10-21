//Sort an array of 0’s 1’s 2’s without using extra space or sorting algo
//striver ....DSA sheet solution
#include <iostream>
using namespace std;


void sort012(int arr[],int n)
{
int count0=0,count1=0,count2=0;

for(int i=0;i<n;i++)
{
    if(arr[i]==0)
    {
        count0++;
    }
    else if(arr[i]==1)
    {
        count1++;
    }
    else{
        count2++;
    }
}

cout <<"0 ="<<count0<<" "<<" 1="<<count1<<" "<<"2="<<count2;

}

int main()
{

int arr[]={1,1,0,0,0,0,2,1,1,2,2,2,2,};
int size=13;
sort012(arr,size);


}


