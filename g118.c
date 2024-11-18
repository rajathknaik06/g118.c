/*Hema is working on a project where she needs to search for a specific number within a list of integers and determine how many times this number appears in the list.



To accomplish this task, Hema wants to write a program that reads a list of integers, searches for a specific number, and prints the count of its occurrences.

Input format :
The first input line contains a single integer n, which represents the number of elements in the array.

The second input line contains n space-separated integers which represent the elements of the array.

The third input line contains a single integer srch_num, the number to search for in the array.

Output format :
The output displays an integer, representing the number of times a given number occurs in an array.

If no such element is present, print "No such element was found in the array."*/

#include <stdio.h>
int main(){
    int arr1[15], srch_num, i, n;
    int result = -1, ctr=0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d ", &arr1[i]);
    }
    scanf("%d", &srch_num);
    
    for(i=0;i<n;i++){
        if (srch_num == arr1[i]){
            ctr++;
            result = 1;
        }
    }
    
    if (result != -1)
        printf("%d", ctr);
    else
        printf("No such element found in the array.");
    return 0;
}
