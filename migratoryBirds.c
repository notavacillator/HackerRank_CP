// the idea is to make and modify a new array of size 5 (5 because
// the types of the birds which is fixed) and so I'll then sort the freqArr and
// the highest number's index is given as the output, if multiple indexes
// satisfies this than print the smallest index

#include<stdio.h>
#include<stdlib.h>                  // for malloc()

int main()
{
    int n, freqArr[5] = {0}, i=0, max = 0, index = 0;
    int *arr;

    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));  // allocate memory chunk for arr
    /*
    for(int i=0; i<n; i++)              // take input of arr
    {
        scanf("%d", (arr+i));
        freqArr[ *(arr+i) - 1]++;
    }
    */
    // the above 'taking input' loop is working only for newline inputs and not
    // single line space-separated integers

    // below loop is working just fine for the specified problem above
    while (i < n && scanf("%d", &arr[i])  == 1)
    {
        freqArr[ *(arr+i) - 1]++;
        i++;
    }


    // non necessary array printing
    /*
    for(i=0; i<n; i++)
    {
        printf("%d ", *(arr+i));        // space separated printing
    }
    */
    //printing freqArr
    /*
    printf("\n");

    for(i=0; i<5; i++)              // freqArr working fine
    {
        printf("%d ", freqArr[i]);
    }
    */
    // TODO
    // freqArr should now be sorted and then the index that holds the largest
    // value should be printed (compare among indexes to see if a smaller index
    // has the  same value )

    // or maybe just start processing from the lower indexes (i.e 1)
    // store a max see if it changes (if encounters a larger value)
    // print the most recent index where it altered

    printf("\n");
    for(i=0; i<5; i++)
    {
        if(max < freqArr[i]){
            max = freqArr[i];
            index = i+1;
        }
    }

    printf("%d\n",index);
    free(arr);
    return 0;
}
