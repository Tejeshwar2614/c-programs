#include <stdio.h>

// here we will declare the structure and the basic creation of the structure 
// structure is basically our own defined data type ...in other we can say that user defined data type 

struct tejeshwar
{
    int age;
    char bloodgroup;
    char name[10];
};
struct student
{
    int rollno ;
    char name1[100];
    float marks ;
};
int main()
{
    // here we ahve created the first object t1.....
    struct tejeshwar t1 = {12,'a',"tejs"};

    // Here w have created the object t2.......
    struct tejeshwar t2;
    printf("%d\n",sizeof(t1));
    printf("%c\n",t1.bloodgroup);
    printf("%s\n",t1.name);
    printf("%d\n",t1.age);

    // here we copy the element from the object t1 to t2 ......
    t2 = t1;
    printf("%d\n",t2.age);
    printf("%c\n",t2.bloodgroup);
    printf("%s\n",t2.name);

    // These all till now we have studied is all about the complile time initialization...

    // Now we will study about the run time initialization......

    //  here we will create the another object ....

    /*struct tejeshwar t3 ;
    scanf("Enter the age of the tejeshwar : %d",&t3.age);
    scanf("Enter the bloodgroup of the tejeshwar : %c",&t3.bloodgroup);
    scanf("Enter the name of the tejeshwar : %s",&t3.name);
    printf("The age of the tejeshwar is : %d\n",t3.age);
    printf("The bloodgroup of the tejeshwar : %c\n",t3.bloodgroup);
    printf("The name of the tejeshawr : %s\n",t3.name);*/


    // Here we will create the array of the object ...lets do it .....

   struct student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%d\n%s\n%f",&s[i].rollno,&s[i].name1,&s[i].marks);
    } 
    for(i=0;i<3;i++)
    {
        printf("The roll no of the student is : %d\n",s[i].rollno);
        printf("The name of the student is : %s\n",s[i].name1);
        printf("The marks of the student is : %.2f\n",s[i].marks);
    }

    // Here we will create the pointer of the structure which means the pointer structure .....

    struct tejeshwar *ptr=&t2;
    printf("rhe value using the pointer is : %d\n",ptr->age);
    printf("the char value using pointer is : %c\n",ptr->bloodgroup);
    printf("the name using the pointer is the : %s\n",ptr->name);


   // Like this we can create the or print the the pointer value to the sructure ......

}
/*int main(){
    int n;
    scanf("%d",&n);
    for(int i=1,k=n-1;i<=n,k>=0;i++,k--){
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        for(int r=0;r<k;r++){
            printf("* ");
        }
        for(int u=k+1;u>=1;u--){
            printf("%d ",u);
        }
        for(int o=1;o<i;o++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1,f=n;i<=n,f>=1;i++,f--){
        for(int j=n;j>=1;j--){
            if(j<=i){
                printf("%d ",j);
            }
            else {
                printf("* ");
            }
        }
        for(int r=n;r>=1;r--){
            if(f>=r){
                printf("%d ",r);
            }
            else {
                printf("* ");
            }
        }
        printf("\n");
    }}*/