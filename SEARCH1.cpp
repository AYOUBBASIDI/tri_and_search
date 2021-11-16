#include<stdio.h>
#include<conio.h>

main()
{
	
//la declaration des variables

int arr[50];
int j,x,n,i,choice;

printf("taper la dimension du tableau:");
scanf("%d",&x);
 int low=0;
    int high=x-1;
    
//remplissage

for(j=0;j<x;j++)
{
	printf("donner l'element %d:\n",j+1);
	scanf("%d",&arr[j]);
}
	printf("avant le trie :\n");
	for(j=0;j<x;j++)
	printf("%7d",arr[j]);
	printf("\n");
	
// traitement(do fo if)

int ech;
printf("apres le trie :\n");
do
{
	ech=0;
	
for (j=0;j<x-1;j++){
	
	if(arr[j]>arr[j+1])
	{
		int tmp;
		tmp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1]= tmp;
		ech++;
	}
}
}
while(ech>0);
for(j=0;j<x;j++)
		printf("%7d",arr[j]);
	printf("\n");
	printf ("What do you want ?\n");
printf ("1= Binary search\n2=Linear Search\n");
scanf ("%d", &choice);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (choice==1){
//Binary Search
    printf("Taper le nomber que vous chercher : ");
    scanf("%d",&n);

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(n>arr[mid])
        {
            low=mid+1;
        }
        else if(n<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            printf("l'element %d existe est sont index %d utilisation de (Binary Search)\n",n,mid);
            break;
        }
    }}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (choice==2){
////Linear Search
    int indice;
    bool b=false;
    
    printf("Taper le nomber que vous chercher : ");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            b=true;
            indice=i;
            break;
        }
    }
    if(b)
    
        printf("l'element %d existe est son indice %d utilisation de (Linear Search)",n,indice);
    
	else
    
	    printf("l'element %d n'existe pas ",n);
    
	getch();
}  }
