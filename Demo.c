#include<stdio.h>
int main() {
  int i;
  int n=10;
  int arr[10];
  fill(arr,n);
  sum=sumarr(arr,n);
  for(i=0;i<n;i++)
    printf("%d\n",arr[i]);  //*arr++, *(arr+i)
  return 0;
}
void fill(int* parr,int n) {
  int i;
  for(i=0;i<n;i++)
    parr[i]=i*10+1;  //scanf("%d",&arr[i]);
    //*parr++=rand()%10;  
}
int sumarr(const int* parr, int n) {
  int i, sum=0;
  for(i=0;i<n;i++)
    sum+=*parr++;   //sum+=parr[i]  //sum+=*(parr+i)
}
