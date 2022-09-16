#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elementsn");
scanf("%d",&n);
printf("Enter %d integersn", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to findn");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.n", key);
return 0;
}
[2:49 pm, 12/09/2022] Mahaveer Kanan: Assignment 4: 

Program From An Armstrong Number in C
C Program To Find LCM Of Two Numbers
Fibonacci Series In C : A Quick Start To C Programming
where we have to write the assignment sir
20.Write a program to perform the following operations:
a) Insert an element into a AVL tree.
b) Delete an element from a AVL tree.
c) Search for a key element in a AVL tree.
21.Write a C program to Graph traversal using Breadth First Search 
22.Write a C program to Graph traversal using Depth First Search
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int key;
struct Node *lft;
struct Node *rgt;
int height;
};
int max(int a, int b);
int height(struct Node *N)
{
if (N == NULL)
return 0;
return N->height;
}
int max(int a, int b)
{
return (a > b)? a : b;
}
struct Node* newNode(int key)
{
struct Node* node = (struct Node*)
malloc(sizeof(struct Node));
node->key   = key;
node->lft   = NULL;
node->rgt  = NULL;
node->height = 1;
return(node);
}
struct Node *rgtRotate(struct Node *y)
{
struct Node *x = y->lft;
struct Node *T2 = x->rgt;
x->rgt = y;
y->lft = T2;
y->height = max(height(y->lft), height(y->rgt))+1;
x->height = max(height(x->lft), height(x->rgt))+1;
return x;
}
struct Node *lftRotate(struct Node *x)
{
struct Node *y = x->rgt;
struct Node *T2 = y->lft;
…
[2:25 pm, 13/09/2022] Mahaveer Kanan: C Program to Implement Quick Sort:

#include <stdio.h>
#define MAX 10

void swap(int *m,int *n)
{
   int temp;
   temp = *m;
   *m = *n;
   *n = temp;
}
int get_key_position(int x,int y )
{
   return((x+y) /2);
}

// Function for Quick Sort
void quicksort(int list[],int m,int n)
{
   int key,i,j,k;
   if( m < n)
   {
      k = get_key_position(m,n);
      swap(&list[m],&list[k]);
      key = list[m];
      i = m+1;
      j = n;
      while(i <= j)
      {
         while((i <= n) && (list[i] <= key))
                i++;
         while((j >= m) && (list[j] > key))
		j--;
	 if( i < j)
		swap(&list[i],&list[j]);
      }
      swap(&list[m],&list[j]);
      quicksort(list,m,j-1);
      quicksort(list,j+1,n);
   }
}
#include<stdio.h>
void InsertionSort(int a[], int n)
{
    int j, p;
    int tmp;
    for(p = 1; p < n; p++)
    {
        tmp = a[p];
        for(j = p; j > 0 && a[j-1] > tmp; j--)
            a[j] = a[j-1];
        a[j] = tmp;
    }
}
 
int main()
{
    int i, n, a[10];
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    InsertionSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
