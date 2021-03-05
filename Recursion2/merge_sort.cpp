#include <bits/stdc++.h>
using namespace std;

void mergeS(int a[],int l, int h)
{
    if(l>h)return;
    if((h-l)<2)return;
    int mid=(l+h)/2;
    mergeS(a,l,mid);mergeS(a,mid+1,h);
    merge(a,l,mid,h);
}
void merge(int a[],int l,int mid,int h)
{
    int* tmp=new int[l-h+1];
    int i=0;
    int e1=mid;
    int f=l,k=h;
    while(mid<h && l<=e1)
    { 
      if(a[l]<a[mid+1]){tmp[i]=a[l];i++;l++;}
      else if(a[l]==a[mid+1]){tmp[i]=a[l];
      tmp[i+1]=a[mid+1];
      i+=2;
      l++;mid++;}
      else{tmp[i]=a[mid+1];i++;mid++;}
    }
    if(mid>h){
      for(int j=l;j<e1+1;j++){tmp[i]=a[j];i++;}
    }
    if(l>e1){
    for(int j=mid+1;j<k+1;j++){tmp[i]=a[j];i++;}
    }
    for(int j=f;j<k+1;j++)
    {
      a[j]=tmp[j];
    }
    delete tmp;
}
void mergeSort(int a[], int n)
{
    mergeS(a,0,n-1);
}

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}

/*
base case 
1. size =1
2. si>ei

mid = (si+ei)/2
2 calls :- si,mid)(mid+1,ei

merging
use complete merger sort algo that you've learnt earlier

outline
call merge sort on two halves and then merge the two halves
Test Cases:-
6 
2 6 8 5 4 3

5
2 1 5 2 3
*/