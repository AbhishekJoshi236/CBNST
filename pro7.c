#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void print(int n,float a[n][n+1]){

    for(int i=0;i<n;i++){
        for(int j=0;j<=n;j++)
            printf("%.2f\t",a[i][j]);
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int n;
    printf("\nEnter order of matrix: ");
    scanf("%d",&n);

    float a[n][n+1];

    printf("\nEnter elements of matrix: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<=n;j++)
            scanf("%f",&a[i][j]);

    for(int i=0;i<n-1;i++){
        float x=a[i][i];
        for(int j=i+1;j<n;j++){
            float y=a[j][i];
            for(int k=0;k<=n;k++){
                a[j][k]-=(y*a[i][k])/x;
            }
        }
    }

    print(n,a);

    if(a[n-1][n-1]==0){
        printf("\nRoots of this system does not exists.\n");
        return 0;
    }

    float X[n];
    for(int i=0;i<n;i++)
        X[i]=a[i][n];

    X[n-1]=a[n-1][n]/a[n-1][n-1];
    
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>i;j--){
            X[i]-=a[i][j]*X[j];
        }
        X[i]/=a[i][i];
    }

    for(int i=0;i<n;i++)
        printf("%f\n",X[i]);

    return 0;
}
