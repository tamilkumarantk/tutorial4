#include<stdio.h>        //this header file used for printf and scanf usage in my code
#include<math.h>         //this header file used for do a mathimatical operations in code (eg:- keywords like sqrt,exp,pow etc.)
int main()
{
    int a[30],b[30],c[30],d[30];     //a and b assigned for get collection of vectors c assigned for Addition of these two collection of vectors 
    int i,k=0;                       //i assigned to apply the for loop conditions
    float magnitude,angle,x,y,z;     //we are going to find the magnitude and angle in decimal value 
    printf("Enter the values of vector a:\n");  
    for(i=0;i<2;i++)
    {
        scanf("%d",&a[i]);                         //collecting vectors of a
    }
    printf("Enter the values of vector b:\n");
    for(i=0;i<2;i++)
    {
        scanf("%d",&b[i]);                         //collecting vectors of b
    }
    printf("Addition of vector:");
    for(i=0;i<2;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);                       // printing addition of a and b in c
    }
    magnitude=sqrt(pow(c[0],2)+pow(c[1],2));                       //sqrt means square root,pow means power of, for which we are using math.h header file in this code 
    printf("\nMagnitude of vector c is %f\n",magnitude);     
    for(i=0;i<2;i++)                              //for loop used for finding angle 
    {
        d[i]=a[i]*b[i];
        k+=d[i];
    }
    x=sqrt(pow(a[0],2)+pow(a[1],2));
    y=sqrt(pow(b[0],2)+pow(b[1],2));
    z=x*y;
    angle=k/z;
    printf("Angle between the vector is cos θ = %f",angle);       //this prints the angle between the two vectors
    return 0;
}







/*
report:-
    this C program can be used for mathematical problem solving.this will be very useful to mathematical calculation works.
    */
