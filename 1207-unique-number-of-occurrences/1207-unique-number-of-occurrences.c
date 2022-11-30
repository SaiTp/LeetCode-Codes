

bool uniqueOccurrences(int* arr, int arrSize){
int a[2000],i,j;
    for(i=0;i<2000;i++)
        a[i]=0;
    for(i=0;i<arrSize;i++)
        a[arr[i]>0?arr[i]-1:(-arr[i]-1)+1000]++;
     for(i=0;i<1999;i++)
        for(j=i+1;j<2000;j++)
        {
            if(a[i]==a[j] && a[i]!=0)
                return false;
        }
    return true;
}

