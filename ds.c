#include<stdio.h>
void main(){
    int arr[10],i,sum=0;
    printf("Enter the elements for array ");
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    printf("The Final Sum is %d",sum);
    getch();
}

    //   Factorial
//    int fact = 1,i,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact = fact*i;
//     }
//     printf("THe Factorial is %d",fact);
//     getch();
// }
      // fibonaci series
//       int f1,f2,f3,i,n;
//       f1=0;
//       f2=1;
//       printf("Enter the total location to be printed");
//       scanf("%d",&n);
//       printf("%d,%d",f1,f2);
//       for(i=3;i<=n;i++){
//         f3= f2 + f1;
//         printf(",%d",f3);
//         f1=f2;
//         f2=f3;
//       }
// }  
// prime no 
// int num,n;
// num =2;
// scanf("%d",&n);
// while( num<n){
    
//   if(n%num==0){
//     printf("Not Prime");
//      break;
//   }
 
//   else{
//     num =num +1;
//   }
//      if(n=2){
//        printf("Prime");
//      }
//    else{
//        printf("Not Prime");
//    }
    
// }

// }