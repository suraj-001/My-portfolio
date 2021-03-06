 #include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
  int Myarr[100], n, i, sum = 0, mean;
  float sd;


  int *ptr = Myarr;
  printf ("Enter the number of elements you want to use: ");
  scanf ("%d", &n);
  printf ("\n Enter %d Elements:", n);
  for (i = 0; i < n; i++)
    scanf ("%d", &Myarr[i]);


  for (i = 0; i < n; i++)
    {
      sum += *ptr;
      *ptr++;
    }

  mean = sum / n;
  for(int i=0;i<n;i++)
  sd=sd+sqrt(pow((Myarr[i]-mean),2));
  

  printf ("\nSum = %d\nmean = %d\nstandard deviation =%f ", sum, mean,sd);
  getch ();
}
